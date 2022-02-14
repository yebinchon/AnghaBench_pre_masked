
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpbe_layer {TYPE_2__* disp_dev; } ;
struct vpbe_device {TYPE_1__* cfg; int pdev; } ;
struct v4l2_capability {int card; int bus_info; int driver; } ;
struct file {int dummy; } ;
struct TYPE_4__ {struct vpbe_device* vpbe_dev; } ;
struct TYPE_3__ {int module_name; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,char*,char*) ;
 int FUNC_2 (int ,int ,int) ;
 struct vpbe_layer* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_0, void *VAR_1,
          struct v4l2_capability *VAR_2)
{
 struct vpbe_layer *VAR_3 = FUNC_3(VAR_0);
 struct vpbe_device *VAR_4 = VAR_3->disp_dev->vpbe_dev;

 FUNC_1(VAR_2->driver, sizeof(VAR_2->driver), "%s",
  FUNC_0(VAR_4->pdev));
 FUNC_1(VAR_2->bus_info, sizeof(VAR_2->bus_info), "platform:%s",
   FUNC_0(VAR_4->pdev));
 FUNC_2(VAR_2->card, VAR_4->cfg->module_name, sizeof(VAR_2->card));

 return 0;
}
