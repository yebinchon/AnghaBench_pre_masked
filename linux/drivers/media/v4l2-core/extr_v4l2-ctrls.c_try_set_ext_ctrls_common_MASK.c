
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct video_device {int dummy; } ;
struct v4l2_fh {int dummy; } ;
struct v4l2_ext_controls {unsigned int error_idx; unsigned int count; scalar_t__ which; TYPE_5__* controls; } ;
struct v4l2_ctrl_ref {int dummy; } ;
struct v4l2_ctrl_helper {int next; TYPE_4__* ref; TYPE_1__* mref; } ;
struct TYPE_8__ {scalar_t__ req; } ;
struct v4l2_ctrl_handler {TYPE_2__ req_obj; } ;
struct v4l2_ctrl {unsigned int ncontrols; scalar_t__ manual_mode_value; TYPE_3__** cluster; int p_new; scalar_t__ is_ptr; scalar_t__ has_volatiles; scalar_t__ is_auto; } ;
typedef scalar_t__ s32 ;
typedef int helper ;
struct TYPE_11__ {scalar_t__ value; } ;
struct TYPE_10__ {struct v4l2_ctrl* ctrl; } ;
struct TYPE_9__ {int id; scalar_t__ is_new; } ;
struct TYPE_7__ {struct v4l2_ctrl* ctrl; } ;


 unsigned int FUNC_0 (struct v4l2_ctrl_helper*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct v4l2_ctrl_handler*,scalar_t__) ;
 int FUNC_3 (struct video_device*,char*,int ) ;
 struct v4l2_ctrl_ref* FUNC_4 (struct v4l2_ctrl_handler*,int ) ;
 int FUNC_5 (struct v4l2_ctrl*) ;
 int FUNC_6 (struct v4l2_ctrl_helper*) ;
 struct v4l2_ctrl_helper* FUNC_7 (unsigned int,int,int ) ;
 int FUNC_8 (struct v4l2_ctrl_ref*) ;
 int FUNC_9 (TYPE_5__*,struct v4l2_ctrl*) ;
 int FUNC_10 (struct v4l2_ctrl_handler*,struct v4l2_ext_controls*,struct v4l2_ctrl_helper*,struct video_device*,int) ;
 int FUNC_11 (struct v4l2_fh*,struct v4l2_ctrl*,int,int ) ;
 int FUNC_12 (struct v4l2_ctrl*) ;
 int FUNC_13 (TYPE_5__*,struct v4l2_ctrl*) ;
 int FUNC_14 (struct v4l2_ctrl*) ;
 int FUNC_15 (struct v4l2_ctrl*) ;
 int FUNC_16 (struct v4l2_ext_controls*,struct v4l2_ctrl_helper*,struct video_device*,int) ;
 int FUNC_17 (struct v4l2_ctrl*,int ) ;
 int FUNC_18 (struct video_device*) ;

__attribute__((used)) static int FUNC_19(struct v4l2_fh *VAR_4,
        struct v4l2_ctrl_handler *VAR_5,
        struct v4l2_ext_controls *VAR_6,
        struct video_device *VAR_7, bool VAR_8)
{
 struct v4l2_ctrl_helper VAR_9[4];
 struct v4l2_ctrl_helper *VAR_10 = VAR_9;
 unsigned VAR_11, VAR_12;
 int VAR_13;

 VAR_6->error_idx = VAR_6->count;


 if (VAR_6->which == VAR_3) {
  FUNC_3(VAR_7, "%s: cannot change default value\n",
   FUNC_18(VAR_7));
  return -VAR_0;
 }

 VAR_6->which = FUNC_1(VAR_6->which);

 if (VAR_5 == ((void*)0)) {
  FUNC_3(VAR_7, "%s: invalid null control handler\n",
   FUNC_18(VAR_7));
  return -VAR_0;
 }

 if (VAR_6->count == 0)
  return FUNC_2(VAR_5, VAR_6->which);

 if (VAR_6->count > FUNC_0(VAR_9)) {
  VAR_10 = FUNC_7(VAR_6->count, sizeof(VAR_9[0]),
      VAR_2);
  if (!VAR_10)
   return -VAR_1;
 }
 VAR_13 = FUNC_10(VAR_5, VAR_6, VAR_10, VAR_7, 0);
 if (!VAR_13)
  VAR_13 = FUNC_16(VAR_6, VAR_10, VAR_7, VAR_8);
 if (VAR_13 && VAR_8)
  VAR_6->error_idx = VAR_6->count;
 for (VAR_11 = 0; !VAR_13 && VAR_11 < VAR_6->count; VAR_11++) {
  struct v4l2_ctrl *VAR_14;
  u32 VAR_15 = VAR_11;

  if (VAR_10[VAR_11].mref == ((void*)0))
   continue;

  VAR_6->error_idx = VAR_11;
  VAR_14 = VAR_10[VAR_11].mref->ctrl;
  FUNC_14(VAR_14);


  for (VAR_12 = 0; VAR_12 < VAR_14->ncontrols; VAR_12++)
   if (VAR_14->cluster[VAR_12])
    VAR_14->cluster[VAR_12]->is_new = 0;







  if (VAR_14->is_auto && VAR_14->has_volatiles &&
      !FUNC_5(VAR_14)) {

   s32 VAR_16 = VAR_14->manual_mode_value + 1;
   u32 VAR_17 = VAR_15;

   do {


    if (VAR_10[VAR_17].ref->ctrl == VAR_14)
     VAR_16 = VAR_6->controls[VAR_17].value;
    VAR_17 = VAR_10[VAR_17].next;
   } while (VAR_17);


   if (VAR_16 == VAR_14->manual_mode_value)
    FUNC_12(VAR_14);
  }



  do {
   struct v4l2_ctrl *VAR_18 = VAR_10[VAR_15].ref->ctrl;

   VAR_13 = FUNC_13(VAR_6->controls + VAR_15, VAR_18);
   if (!VAR_13 && VAR_18->is_ptr)
    VAR_13 = FUNC_17(VAR_18, VAR_18->p_new);
   VAR_15 = VAR_10[VAR_15].next;
  } while (!VAR_13 && VAR_15);

  if (!VAR_13)
   VAR_13 = FUNC_11(VAR_4, VAR_14,
       !VAR_5->req_obj.req && VAR_8, 0);
  if (!VAR_13 && VAR_5->req_obj.req && VAR_8) {
   for (VAR_12 = 0; VAR_12 < VAR_14->ncontrols; VAR_12++) {
    struct v4l2_ctrl_ref *VAR_19 =
     FUNC_4(VAR_5, VAR_14->cluster[VAR_12]->id);

    FUNC_8(VAR_19);
   }
  }


  if (!VAR_13) {
   VAR_15 = VAR_11;
   do {
    VAR_13 = FUNC_9(VAR_6->controls + VAR_15,
      VAR_10[VAR_15].ref->ctrl);
    VAR_15 = VAR_10[VAR_15].next;
   } while (!VAR_13 && VAR_15);
  }
  FUNC_15(VAR_14);
 }

 if (VAR_6->count > FUNC_0(VAR_9))
  FUNC_6(VAR_10);
 return VAR_13;
}
