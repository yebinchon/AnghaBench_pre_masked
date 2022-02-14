
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hisi_sas_slot {int dummy; } ;
struct hisi_hba {TYPE_1__* hw; } ;
struct TYPE_2__ {int (* prep_stp ) (struct hisi_hba*,struct hisi_sas_slot*) ;} ;


 int FUNC_0 (struct hisi_hba*,struct hisi_sas_slot*) ;

__attribute__((used)) static void FUNC_1(struct hisi_hba *VAR_0,
      struct hisi_sas_slot *VAR_1)
{
 VAR_0->hw->prep_stp(VAR_0, VAR_1);
}
