
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * msg; int ignore; void* hcam; int baddr; } ;
struct TYPE_5__ {int ignore; int * msg; void* hcam; int baddr; } ;
struct pmcraid_instance {TYPE_3__ ldn; TYPE_2__ ccn; TYPE_1__* pdev; } ;
struct pmcraid_hcam_ldn {int dummy; } ;
struct pmcraid_hcam_ccn_ext {int dummy; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 void* FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (struct pmcraid_instance*) ;

__attribute__((used)) static int FUNC_3(struct pmcraid_instance *VAR_3)
{
 VAR_3->ccn.msg = FUNC_1(&VAR_3->pdev->dev,
     VAR_2 +
     sizeof(struct pmcraid_hcam_ccn_ext),
     &VAR_3->ccn.baddr, VAR_1);

 VAR_3->ldn.msg = FUNC_1(&VAR_3->pdev->dev,
     VAR_2 +
     sizeof(struct pmcraid_hcam_ldn),
     &VAR_3->ldn.baddr, VAR_1);

 if (VAR_3->ldn.msg == ((void*)0) || VAR_3->ccn.msg == ((void*)0)) {
  FUNC_2(VAR_3);
 } else {
  VAR_3->ccn.hcam =
   (void *)VAR_3->ccn.msg + VAR_2;
  VAR_3->ldn.hcam =
   (void *)VAR_3->ldn.msg + VAR_2;

  FUNC_0(&VAR_3->ccn.ignore, 0);
  FUNC_0(&VAR_3->ldn.ignore, 0);
 }

 return (VAR_3->ldn.msg == ((void*)0)) ? -VAR_0 : 0;
}
