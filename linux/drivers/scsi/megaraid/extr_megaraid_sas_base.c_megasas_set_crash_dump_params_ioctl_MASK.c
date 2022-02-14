
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct megasas_instance {int crash_dump_app_support; TYPE_4__* pdev; int adprecovery; scalar_t__ crash_dump_drv_support; } ;
struct megasas_cmd {TYPE_3__* frame; } ;
struct TYPE_10__ {int max_index; struct megasas_instance** instance; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_6__ {int* w; } ;
struct TYPE_7__ {TYPE_1__ mbox; } ;
struct TYPE_8__ {TYPE_2__ dcmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 TYPE_5__ VAR_1 ;
 int FUNC_2 (struct megasas_instance*,int) ;

__attribute__((used)) static int FUNC_3(struct megasas_cmd *VAR_2)
{
 struct megasas_instance *VAR_3;
 int VAR_4, VAR_5 = 0;
 int VAR_6;

 VAR_6 = VAR_2->frame->dcmd.mbox.w[0];

 for (VAR_4 = 0; VAR_4 < VAR_1.max_index; VAR_4++) {
  VAR_3 = VAR_1.instance[VAR_4];
  if (VAR_3 && VAR_3->crash_dump_drv_support) {
   if ((FUNC_0(&VAR_3->adprecovery) ==
    VAR_0) &&
    !FUNC_2(VAR_3,
     VAR_6)) {
    VAR_3->crash_dump_app_support =
     VAR_6;
    FUNC_1(&VAR_3->pdev->dev,
     "Application firmware crash "
     "dump mode set success\n");
    VAR_5 = 0;
   } else {
    FUNC_1(&VAR_3->pdev->dev,
     "Application firmware crash "
     "dump mode set failed\n");
    VAR_5 = -1;
   }
  }
 }
 return VAR_5;
}
