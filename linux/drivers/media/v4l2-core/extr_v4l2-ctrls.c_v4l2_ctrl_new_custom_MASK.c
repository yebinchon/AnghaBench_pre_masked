
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct v4l2_ctrl_handler {int dummy; } ;
struct v4l2_ctrl_config {char* name; char** qmenu; int type; int is_private; int elem_size; int dims; int menu_skip_mask; int id; int type_ops; int ops; int def; int step; int max; int min; int flags; int * qmenu_int; } ;
struct v4l2_ctrl {int is_private; } ;
typedef int s64 ;
typedef enum v4l2_ctrl_type { ____Placeholder_v4l2_ctrl_type } v4l2_ctrl_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct v4l2_ctrl_handler*,int ) ;
 int FUNC_2 (int ,char const**,int*,int *,int *,int *,int *,int *) ;
 char** FUNC_3 (int ) ;
 struct v4l2_ctrl* FUNC_4 (struct v4l2_ctrl_handler*,int ,int ,int ,char const*,int,int ,int ,int ,int ,int ,int ,int ,char const* const*,int const*,void*) ;

struct v4l2_ctrl *FUNC_5(struct v4l2_ctrl_handler *VAR_3,
   const struct v4l2_ctrl_config *VAR_4, void *VAR_5)
{
 bool VAR_6;
 struct v4l2_ctrl *VAR_7;
 const char *VAR_8 = VAR_4->name;
 const char * const *VAR_9 = VAR_4->qmenu;
 const s64 *VAR_10 = VAR_4->qmenu_int;
 enum v4l2_ctrl_type VAR_11 = VAR_4->type;
 u32 VAR_12 = VAR_4->flags;
 s64 VAR_13 = VAR_4->min;
 s64 VAR_14 = VAR_4->max;
 u64 VAR_15 = VAR_4->step;
 s64 VAR_16 = VAR_4->def;

 if (VAR_8 == ((void*)0))
  FUNC_2(VAR_4->id, &VAR_8, &VAR_11, &VAR_13, &VAR_14, &VAR_15,
        &VAR_16, &VAR_12);

 VAR_6 = (VAR_11 == VAR_2 ||
     VAR_11 == VAR_1);
 if (VAR_6)
  FUNC_0(VAR_15);
 else
  FUNC_0(VAR_4->menu_skip_mask);
 if (VAR_11 == VAR_2 && !VAR_9) {
  VAR_9 = FUNC_3(VAR_4->id);
 } else if (VAR_11 == VAR_1 && !VAR_10) {
  FUNC_1(VAR_3, -VAR_0);
  return ((void*)0);
 }

 VAR_7 = FUNC_4(VAR_3, VAR_4->ops, VAR_4->type_ops, VAR_4->id, VAR_8,
   VAR_11, VAR_13, VAR_14,
   VAR_6 ? VAR_4->menu_skip_mask : VAR_15, VAR_16,
   VAR_4->dims, VAR_4->elem_size,
   VAR_12, VAR_9, VAR_10, VAR_5);
 if (VAR_7)
  VAR_7->is_private = VAR_4->is_private;
 return VAR_7;
}
