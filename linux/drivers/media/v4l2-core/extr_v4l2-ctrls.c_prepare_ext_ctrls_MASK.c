
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct video_device {int dummy; } ;
struct v4l2_ext_controls {size_t count; size_t error_idx; scalar_t__ which; struct v4l2_ext_control* controls; } ;
struct v4l2_ext_control {size_t id; unsigned int size; } ;
struct v4l2_ctrl_ref {struct v4l2_ctrl_helper* helper; struct v4l2_ctrl* ctrl; } ;
struct v4l2_ctrl_helper {size_t next; struct v4l2_ctrl_ref* mref; struct v4l2_ctrl_ref* ref; } ;
struct v4l2_ctrl_handler {int lock; } ;
struct v4l2_ctrl {int flags; int ncontrols; size_t id; unsigned int elems; unsigned int elem_size; int is_string; scalar_t__ is_ptr; struct v4l2_ctrl** cluster; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (size_t) ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct video_device*,char*,...) ;
 struct v4l2_ctrl_ref* FUNC_2 (struct v4l2_ctrl_handler*,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct v4l2_ctrl_handler *VAR_8,
        struct v4l2_ext_controls *VAR_9,
        struct v4l2_ctrl_helper *VAR_10,
        struct video_device *VAR_11,
        bool VAR_12)
{
 struct v4l2_ctrl_helper *VAR_13;
 bool VAR_14 = 0;
 u32 VAR_15;

 for (VAR_15 = 0, VAR_13 = VAR_10; VAR_15 < VAR_9->count; VAR_15++, VAR_13++) {
  struct v4l2_ext_control *VAR_16 = &VAR_9->controls[VAR_15];
  struct v4l2_ctrl_ref *VAR_17;
  struct v4l2_ctrl *VAR_18;
  u32 VAR_19 = VAR_16->id & VAR_5;

  VAR_9->error_idx = VAR_15;

  if (VAR_9->which &&
      VAR_9->which != VAR_6 &&
      VAR_9->which != VAR_7 &&
      FUNC_0(VAR_19) != VAR_9->which) {
   FUNC_1(VAR_11,
    "invalid which 0x%x or control id 0x%x\n",
    VAR_9->which, VAR_19);
   return -VAR_1;
  }



  if (VAR_19 >= VAR_3) {
   FUNC_1(VAR_11,
    "old-style private controls not allowed\n");
   return -VAR_1;
  }
  VAR_17 = FUNC_2(VAR_8, VAR_19);
  if (VAR_17 == ((void*)0)) {
   FUNC_1(VAR_11, "cannot find control id 0x%x\n", VAR_19);
   return -VAR_1;
  }
  VAR_13->ref = VAR_17;
  VAR_18 = VAR_17->ctrl;
  if (VAR_18->flags & VAR_4) {
   FUNC_1(VAR_11, "control id 0x%x is disabled\n", VAR_19);
   return -VAR_1;
  }

  if (VAR_18->cluster[0]->ncontrols > 1)
   VAR_14 = 1;
  if (VAR_18->cluster[0] != VAR_18)
   VAR_17 = FUNC_2(VAR_8, VAR_18->cluster[0]->id);
  if (VAR_18->is_ptr && !VAR_18->is_string) {
   unsigned VAR_20 = VAR_18->elems * VAR_18->elem_size;

   if (VAR_16->size < VAR_20) {




    if (VAR_12) {
     VAR_16->size = VAR_20;
     return -VAR_2;
    }
    FUNC_1(VAR_11,
     "pointer control id 0x%x size too small, %d bytes but %d bytes needed\n",
     VAR_19, VAR_16->size, VAR_20);
    return -VAR_0;
   }
   VAR_16->size = VAR_20;
  }

  VAR_13->mref = VAR_17;



  VAR_13->next = 0;
 }



 if (!VAR_14)
  return 0;





 FUNC_3(VAR_8->lock);


 for (VAR_15 = 0; VAR_15 < VAR_9->count; VAR_15++)
  VAR_10[VAR_15].mref->helper = ((void*)0);
 for (VAR_15 = 0, VAR_13 = VAR_10; VAR_15 < VAR_9->count; VAR_15++, VAR_13++) {
  struct v4l2_ctrl_ref *VAR_21 = VAR_13->mref;



  if (VAR_21->helper) {



   VAR_21->helper->next = VAR_15;


   VAR_13->mref = ((void*)0);
  }

  VAR_21->helper = VAR_13;
 }
 FUNC_4(VAR_8->lock);
 return 0;
}
