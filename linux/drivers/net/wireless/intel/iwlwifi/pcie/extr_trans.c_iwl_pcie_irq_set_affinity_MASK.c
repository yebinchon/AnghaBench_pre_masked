
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_trans_pcie {int shared_vec_mask; TYPE_2__* trans; int * affinity_mask; TYPE_1__* msix_entries; } ;
struct iwl_trans {int dummy; } ;
struct TYPE_4__ {int num_rx_queues; } ;
struct TYPE_3__ {int vector; } ;


 int FUNC_0 (TYPE_2__*,char*,int) ;
 int VAR_0 ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int VAR_1 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct iwl_trans *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 struct iwl_trans_pcie *VAR_8 = FUNC_1(VAR_2);

 VAR_4 = VAR_8->shared_vec_mask & VAR_0 ? 0 : 1;
 VAR_3 = VAR_8->trans->num_rx_queues - 1 + VAR_4;
 VAR_7 = 1 + VAR_4;
 for (; VAR_4 < VAR_3 ; VAR_4++) {




  VAR_6 = FUNC_2(VAR_4 - VAR_7, VAR_1);
  FUNC_3(VAR_6, &VAR_8->affinity_mask[VAR_4]);
  VAR_5 = FUNC_4(VAR_8->msix_entries[VAR_4].vector,
         &VAR_8->affinity_mask[VAR_4]);
  if (VAR_5)
   FUNC_0(VAR_8->trans,
    "Failed to set affinity mask for IRQ %d\n",
    VAR_4);
 }
}
