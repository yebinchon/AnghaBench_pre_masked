
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int error; } ;
struct TYPE_4__ {TYPE_2__* ctrl_handler; } ;
struct sta2x11_vip {TYPE_2__ ctrl_hdl; TYPE_1__ v4l2_dev; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_2(struct sta2x11_vip *VAR_0)
{




 FUNC_1(&VAR_0->ctrl_hdl, 0);

 VAR_0->v4l2_dev.ctrl_handler = &VAR_0->ctrl_hdl;
 if (VAR_0->ctrl_hdl.error) {
  int VAR_1 = VAR_0->ctrl_hdl.error;

  FUNC_0(&VAR_0->ctrl_hdl);
  return VAR_1;
 }

 return 0;
}
