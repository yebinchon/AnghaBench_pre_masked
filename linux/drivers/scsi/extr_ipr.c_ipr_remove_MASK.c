
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ipr_ioa_cfg {TYPE_2__* host; } ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ shost_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_4 ;
 struct ipr_ioa_cfg* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_5)
{
 struct ipr_ioa_cfg *VAR_6 = FUNC_3(VAR_5);

 VAR_0;

 FUNC_2(&VAR_6->host->shost_dev.kobj,
         &VAR_4);
 FUNC_1(&VAR_6->host->shost_dev.kobj,
        &VAR_2);
 FUNC_5(&VAR_6->host->shost_dev.kobj,
   &VAR_3);
 FUNC_4(VAR_6->host);

 FUNC_0(VAR_5);

 VAR_1;
}
