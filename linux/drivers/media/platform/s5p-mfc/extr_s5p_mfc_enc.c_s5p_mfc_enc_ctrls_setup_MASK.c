
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct v4l2_ctrl_config {scalar_t__ type; scalar_t__ menu_skip_mask; scalar_t__ step; int id; int qmenu; scalar_t__ flags; int name; int def; int max; int min; int * ops; } ;
struct TYPE_11__ {int error; } ;
struct s5p_mfc_ctx {TYPE_2__ ctrl_handler; TYPE_1__** ctrls; } ;
struct TYPE_12__ {scalar_t__ type; scalar_t__ is_volatile; int default_value; scalar_t__ step; int maximum; int minimum; int id; scalar_t__ menu_skip_mask; int name; } ;
struct TYPE_10__ {int flags; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_9__* VAR_4 ;
 int FUNC_1 (struct v4l2_ctrl_config*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_1__* FUNC_6 (TYPE_2__*,struct v4l2_ctrl_config*,int *) ;
 TYPE_1__* FUNC_7 (TYPE_2__*,int *,int ,int ,int ,scalar_t__,int ) ;
 TYPE_1__* FUNC_8 (TYPE_2__*,int *,int ,int ,int ,int ) ;

int FUNC_9(struct s5p_mfc_ctx *VAR_6)
{
 struct v4l2_ctrl_config VAR_7;
 int VAR_8;

 FUNC_4(&VAR_6->ctrl_handler, VAR_0);
 if (VAR_6->ctrl_handler.error) {
  FUNC_3("v4l2_ctrl_handler_init failed\n");
  return VAR_6->ctrl_handler.error;
 }
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if (FUNC_0(VAR_4[VAR_8].id)) {
   FUNC_1(&VAR_7, 0, sizeof(struct v4l2_ctrl_config));
   VAR_7.ops = &VAR_5;
   VAR_7.id = VAR_4[VAR_8].id;
   VAR_7.min = VAR_4[VAR_8].minimum;
   VAR_7.max = VAR_4[VAR_8].maximum;
   VAR_7.def = VAR_4[VAR_8].default_value;
   VAR_7.name = VAR_4[VAR_8].name;
   VAR_7.type = VAR_4[VAR_8].type;
   VAR_7.flags = 0;

   if (VAR_7.type == VAR_3) {
    VAR_7.step = 0;
    VAR_7.menu_skip_mask = VAR_4[VAR_8].menu_skip_mask;
    VAR_7.qmenu = FUNC_2(VAR_7.id);
   } else {
    VAR_7.step = VAR_4[VAR_8].step;
    VAR_7.menu_skip_mask = 0;
   }
   VAR_6->ctrls[VAR_8] = FUNC_6(&VAR_6->ctrl_handler,
     &VAR_7, ((void*)0));
  } else {
   if ((VAR_4[VAR_8].type == VAR_3) ||
    (VAR_4[VAR_8].type ==
     VAR_2)) {
    VAR_6->ctrls[VAR_8] = FUNC_8(
     &VAR_6->ctrl_handler,
     &VAR_5, VAR_4[VAR_8].id,
     VAR_4[VAR_8].maximum, 0,
     VAR_4[VAR_8].default_value);
   } else {
    VAR_6->ctrls[VAR_8] = FUNC_7(
     &VAR_6->ctrl_handler,
     &VAR_5, VAR_4[VAR_8].id,
     VAR_4[VAR_8].minimum,
     VAR_4[VAR_8].maximum, VAR_4[VAR_8].step,
     VAR_4[VAR_8].default_value);
   }
  }
  if (VAR_6->ctrl_handler.error) {
   FUNC_3("Adding control (%d) failed\n", VAR_8);
   return VAR_6->ctrl_handler.error;
  }
  if (VAR_4[VAR_8].is_volatile && VAR_6->ctrls[VAR_8])
   VAR_6->ctrls[VAR_8]->flags |= VAR_1;
 }
 FUNC_5(&VAR_6->ctrl_handler);
 return 0;
}
