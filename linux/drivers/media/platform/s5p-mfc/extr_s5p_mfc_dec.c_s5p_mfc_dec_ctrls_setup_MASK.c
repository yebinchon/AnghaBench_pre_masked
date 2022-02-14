
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct v4l2_ctrl_config {scalar_t__ menu_skip_mask; int step; int type; int name; int def; int max; int min; int id; int * ops; } ;
struct TYPE_8__ {int error; } ;
struct s5p_mfc_ctx {TYPE_1__** ctrls; TYPE_2__ ctrl_handler; } ;
struct TYPE_9__ {scalar_t__ is_volatile; int default_value; int step; int maximum; int minimum; int id; int type; int name; } ;
struct TYPE_7__ {int flags; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* VAR_2 ;
 int FUNC_1 (struct v4l2_ctrl_config*,int ,int) ;
 int FUNC_2 (char*,...) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_4 (TYPE_2__*,struct v4l2_ctrl_config*,int *) ;
 TYPE_1__* FUNC_5 (TYPE_2__*,int *,int ,int ,int ,int ,int ) ;

int FUNC_6(struct s5p_mfc_ctx *VAR_4)
{
 struct v4l2_ctrl_config VAR_5;
 int VAR_6;

 FUNC_3(&VAR_4->ctrl_handler, VAR_0);
 if (VAR_4->ctrl_handler.error) {
  FUNC_2("v4l2_ctrl_handler_init failed\n");
  return VAR_4->ctrl_handler.error;
 }

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (FUNC_0(VAR_2[VAR_6].id)) {
   FUNC_1(&VAR_5, 0, sizeof(struct v4l2_ctrl_config));
   VAR_5.ops = &VAR_3;
   VAR_5.id = VAR_2[VAR_6].id;
   VAR_5.min = VAR_2[VAR_6].minimum;
   VAR_5.max = VAR_2[VAR_6].maximum;
   VAR_5.def = VAR_2[VAR_6].default_value;
   VAR_5.name = VAR_2[VAR_6].name;
   VAR_5.type = VAR_2[VAR_6].type;

   VAR_5.step = VAR_2[VAR_6].step;
   VAR_5.menu_skip_mask = 0;

   VAR_4->ctrls[VAR_6] = FUNC_4(&VAR_4->ctrl_handler,
     &VAR_5, ((void*)0));
  } else {
   VAR_4->ctrls[VAR_6] = FUNC_5(&VAR_4->ctrl_handler,
     &VAR_3,
     VAR_2[VAR_6].id, VAR_2[VAR_6].minimum,
     VAR_2[VAR_6].maximum, VAR_2[VAR_6].step,
     VAR_2[VAR_6].default_value);
  }
  if (VAR_4->ctrl_handler.error) {
   FUNC_2("Adding control (%d) failed\n", VAR_6);
   return VAR_4->ctrl_handler.error;
  }
  if (VAR_2[VAR_6].is_volatile && VAR_4->ctrls[VAR_6])
   VAR_4->ctrls[VAR_6]->flags |= VAR_1;
 }
 return 0;
}
