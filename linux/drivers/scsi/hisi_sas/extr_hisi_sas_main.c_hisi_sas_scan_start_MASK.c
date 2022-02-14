
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hisi_hba {TYPE_1__* hw; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int (* phys_init ) (struct hisi_hba*) ;} ;


 struct hisi_hba* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (struct hisi_hba*) ;

void FUNC_2(struct Scsi_Host *VAR_0)
{
 struct hisi_hba *VAR_1 = FUNC_0(VAR_0);

 VAR_1->hw->phys_init(VAR_1);
}
