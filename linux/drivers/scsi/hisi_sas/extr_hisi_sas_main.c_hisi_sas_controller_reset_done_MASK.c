
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hisi_hba {TYPE_1__* hw; int flags; int sem; scalar_t__ reject_stp_links_msk; struct Scsi_Host* shost; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int (* get_phys_state ) (struct hisi_hba*) ;int (* phys_init ) (struct hisi_hba*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct hisi_hba*) ;
 int FUNC_2 (struct hisi_hba*,int ) ;
 int FUNC_3 (struct hisi_hba*) ;
 int FUNC_4 (struct hisi_hba*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct Scsi_Host*) ;
 int FUNC_7 (struct hisi_hba*) ;
 int FUNC_8 (struct hisi_hba*) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct hisi_hba *VAR_2)
{
 struct Scsi_Host *VAR_3 = VAR_2->shost;
 u32 VAR_4;


 VAR_2->hw->phys_init(VAR_2);
 FUNC_5(1000);
 FUNC_1(VAR_2);
 FUNC_0(VAR_0, &VAR_2->flags);

 if (VAR_2->reject_stp_links_msk)
  FUNC_4(VAR_2);
 FUNC_3(VAR_2);
 FUNC_9(&VAR_2->sem);
 FUNC_6(VAR_3);
 FUNC_0(VAR_1, &VAR_2->flags);

 VAR_4 = VAR_2->hw->get_phys_state(VAR_2);
 FUNC_2(VAR_2, VAR_4);
}
