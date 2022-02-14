
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans_pcie {int msix_enabled; struct iwl_trans* trans; } ;
struct iwl_trans {int status; TYPE_1__* trans_cfg; } ;
struct TYPE_2__ {scalar_t__ mq_rx_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iwl_trans*) ;
 int FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (struct iwl_trans*,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;

void FUNC_4(struct iwl_trans_pcie *VAR_4)
{
 struct iwl_trans *VAR_5 = VAR_4->trans;

 if (!VAR_4->msix_enabled) {
  if (VAR_5->trans_cfg->mq_rx_supported &&
      FUNC_3(VAR_0, &VAR_5->status))
   FUNC_2(VAR_5, VAR_1,
         VAR_3);
  return;
 }





 if (FUNC_3(VAR_0, &VAR_5->status))
  FUNC_2(VAR_5, VAR_1, VAR_2);
 FUNC_1(VAR_5);

 FUNC_0(VAR_5);
}
