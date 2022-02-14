
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ baddr; int * hcam; int * msg; } ;
struct TYPE_4__ {scalar_t__ baddr; int * hcam; int * msg; } ;
struct pmcraid_instance {TYPE_3__ ldn; TYPE_2__* pdev; TYPE_1__ ccn; } ;
struct pmcraid_hcam_ldn {int dummy; } ;
struct pmcraid_hcam_ccn_ext {int dummy; } ;
struct TYPE_5__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct pmcraid_instance *VAR_1)
{
 if (VAR_1->ccn.msg != ((void*)0)) {
  FUNC_0(&VAR_1->pdev->dev,
        VAR_0 +
        sizeof(struct pmcraid_hcam_ccn_ext),
        VAR_1->ccn.msg,
        VAR_1->ccn.baddr);

  VAR_1->ccn.msg = ((void*)0);
  VAR_1->ccn.hcam = ((void*)0);
  VAR_1->ccn.baddr = 0;
 }

 if (VAR_1->ldn.msg != ((void*)0)) {
  FUNC_0(&VAR_1->pdev->dev,
        VAR_0 +
        sizeof(struct pmcraid_hcam_ldn),
        VAR_1->ldn.msg,
        VAR_1->ldn.baddr);

  VAR_1->ldn.msg = ((void*)0);
  VAR_1->ldn.hcam = ((void*)0);
  VAR_1->ldn.baddr = 0;
 }
}
