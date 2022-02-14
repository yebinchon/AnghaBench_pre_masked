
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2i_hba {int * regview; int pcidev; int ep_destroy_list; int ep_active_list; int ep_ofld_list; struct Scsi_Host* shost; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct bnx2i_hba*) ;
 int FUNC_2 (struct bnx2i_hba*) ;
 int FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;

void FUNC_7(struct bnx2i_hba *VAR_0)
{
 struct Scsi_Host *VAR_1 = VAR_0->shost;

 FUNC_4(VAR_1);
 FUNC_0(&VAR_0->ep_ofld_list);
 FUNC_0(&VAR_0->ep_active_list);
 FUNC_0(&VAR_0->ep_destroy_list);
 FUNC_5(VAR_0->pcidev);

 if (VAR_0->regview) {
  FUNC_6(VAR_0->pcidev, VAR_0->regview);
  VAR_0->regview = ((void*)0);
 }
 FUNC_1(VAR_0);
 FUNC_2(VAR_0);
 FUNC_3(VAR_1);
}
