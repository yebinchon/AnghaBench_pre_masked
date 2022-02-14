
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {void* num_dma_attr; void* num_irqs; void* num_ceqs; void* num_aeqs; void* func_type; void* pci_intf_idx; void* pf_idx; void* func_idx; } ;
struct hinic_hwif {TYPE_1__ attr; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_3(struct hinic_hwif *VAR_8, u32 VAR_9, u32 VAR_10)
{
 VAR_8->attr.func_idx = FUNC_1(VAR_9, VAR_3);
 VAR_8->attr.pf_idx = FUNC_1(VAR_9, VAR_7);
 VAR_8->attr.pci_intf_idx = FUNC_1(VAR_9, VAR_6);
 VAR_8->attr.func_type = FUNC_1(VAR_9, VAR_4);

 VAR_8->attr.num_aeqs = FUNC_0(FUNC_2(VAR_10, VAR_0));
 VAR_8->attr.num_ceqs = FUNC_0(FUNC_2(VAR_10, VAR_1));
 VAR_8->attr.num_irqs = FUNC_0(FUNC_2(VAR_10, VAR_5));
 VAR_8->attr.num_dma_attr = FUNC_0(FUNC_2(VAR_10, VAR_2));
}
