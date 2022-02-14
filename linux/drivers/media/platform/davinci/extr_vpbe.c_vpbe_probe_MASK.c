
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vpbe_device {int lock; struct vpbe_config* cfg; int current_timings; TYPE_3__* pdev; int ops; } ;
struct TYPE_6__ {int * module_name; } ;
struct TYPE_5__ {int * module_name; } ;
struct vpbe_config {TYPE_4__* outputs; TYPE_2__ venc; TYPE_1__ osd; int * module_name; } ;
struct TYPE_7__ {int driver; struct vpbe_config* platform_data; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_8__ {scalar_t__ num_modes; int * modes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vpbe_device*) ;
 struct vpbe_device* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct platform_device*,struct vpbe_device*) ;
 int FUNC_4 (int ,char*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_5)
{
 struct vpbe_device *VAR_6;
 struct vpbe_config *VAR_7;

 if (!VAR_5->dev.platform_data) {
  FUNC_4(VAR_5->dev.driver, "No platform data\n");
  return -VAR_1;
 }
 VAR_7 = VAR_5->dev.platform_data;

 if (!VAR_7->module_name[0] ||
     !VAR_7->osd.module_name[0] ||
     !VAR_7->venc.module_name[0]) {
  FUNC_4(VAR_5->dev.driver, "vpbe display module names not defined\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  return -VAR_2;

 VAR_6->cfg = VAR_7;
 VAR_6->ops = VAR_4;
 VAR_6->pdev = &VAR_5->dev;

 if (VAR_7->outputs->num_modes > 0)
  VAR_6->current_timings = VAR_6->cfg->outputs[0].modes[0];
 else {
  FUNC_0(VAR_6);
  return -VAR_1;
 }


 FUNC_3(VAR_5, VAR_6);
 FUNC_2(&VAR_6->lock);

 return 0;
}
