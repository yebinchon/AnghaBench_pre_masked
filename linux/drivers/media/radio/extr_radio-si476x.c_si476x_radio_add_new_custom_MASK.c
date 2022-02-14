
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_ctrl {int dummy; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_6__ {int error; } ;
struct si476x_radio {TYPE_1__ v4l2dev; TYPE_2__ ctrl_handler; } ;
typedef enum si476x_ctrl_idx { ____Placeholder_si476x_ctrl_idx } si476x_ctrl_idx ;
struct TYPE_7__ {int name; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 TYPE_3__* VAR_0 ;
 struct v4l2_ctrl* FUNC_1 (TYPE_2__*,TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_2(struct si476x_radio *VAR_1,
           enum si476x_ctrl_idx VAR_2)
{
 int VAR_3;
 struct v4l2_ctrl *VAR_4;

 VAR_4 = FUNC_1(&VAR_1->ctrl_handler,
        &VAR_0[VAR_2],
        ((void*)0));
 VAR_3 = VAR_1->ctrl_handler.error;
 if (VAR_4 == ((void*)0) && VAR_3)
  FUNC_0(VAR_1->v4l2dev.dev,
   "Could not initialize '%s' control %d\n",
   VAR_0[VAR_2].name, VAR_3);

 return VAR_3;
}
