
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct netxen_legacy_intr_set {int pci_int_reg; int tgt_mask_reg; int int_vec_bit; int tgt_status_reg; } ;
struct TYPE_2__ {scalar_t__ revision_id; size_t pci_func; } ;
struct netxen_adapter {void* crb_int_state_reg; TYPE_1__ ahw; void* isr_int_vec; void* pci_int_reg; void* tgt_mask_reg; void* tgt_status_reg; int int_vec_bit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct netxen_legacy_intr_set* VAR_5 ;
 void* FUNC_0 (struct netxen_adapter*,int ) ;

__attribute__((used)) static void
FUNC_1(struct netxen_adapter *VAR_6)
{
 struct netxen_legacy_intr_set *VAR_7;
 u32 VAR_8, VAR_9;

 if (VAR_6->ahw.revision_id >= VAR_3)
  VAR_7 = &VAR_5[VAR_6->ahw.pci_func];
 else
  VAR_7 = &VAR_5[0];

 VAR_8 = VAR_7->tgt_status_reg;
 VAR_9 = VAR_1;

 VAR_6->int_vec_bit = VAR_7->int_vec_bit;
 VAR_6->tgt_status_reg = FUNC_0(VAR_6, VAR_8);
 VAR_6->tgt_mask_reg = FUNC_0(VAR_6,
        VAR_7->tgt_mask_reg);
 VAR_6->pci_int_reg = FUNC_0(VAR_6,
       VAR_7->pci_int_reg);
 VAR_6->isr_int_vec = FUNC_0(VAR_6, VAR_2);

 if (VAR_6->ahw.revision_id >= VAR_4)
  VAR_6->crb_int_state_reg = FUNC_0(VAR_6,
              VAR_9);
 else
  VAR_6->crb_int_state_reg = FUNC_0(VAR_6,
              VAR_0);
}
