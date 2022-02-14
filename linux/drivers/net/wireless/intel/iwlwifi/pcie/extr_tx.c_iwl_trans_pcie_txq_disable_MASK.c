
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iwl_trans_pcie {TYPE_1__** txq; int queue_used; scalar_t__ scd_base_addr; } ;
struct iwl_trans {int status; } ;
struct TYPE_2__ {int frozen; int ampdu; scalar_t__ frozen_expiry_remainder; } ;


 int FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (struct iwl_trans*,char*,int) ;
 struct iwl_trans_pcie* FUNC_2 (struct iwl_trans*) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct iwl_trans*,int) ;
 int FUNC_6 (struct iwl_trans*,int) ;
 int FUNC_7 (struct iwl_trans*,scalar_t__,void*,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int *) ;

void FUNC_10(struct iwl_trans *VAR_1, int VAR_2,
    bool VAR_3)
{
 struct iwl_trans_pcie *VAR_4 = FUNC_2(VAR_1);
 u32 VAR_5 = VAR_4->scd_base_addr +
   FUNC_3(VAR_2);
 static const u32 VAR_6[4] = {};

 VAR_4->txq[VAR_2]->frozen_expiry_remainder = 0;
 VAR_4->txq[VAR_2]->frozen = 0;







 if (!FUNC_8(VAR_2, VAR_4->queue_used)) {
  FUNC_4(FUNC_9(VAR_0, &VAR_1->status),
     "queue %d not used", VAR_2);
  return;
 }

 if (VAR_3) {
  FUNC_6(VAR_1, VAR_2);

  FUNC_7(VAR_1, VAR_5, (void *)VAR_6,
        FUNC_0(VAR_6));
 }

 FUNC_5(VAR_1, VAR_2);
 VAR_4->txq[VAR_2]->ampdu = 0;

 FUNC_1(VAR_1, "Deactivate queue %d\n", VAR_2);
}
