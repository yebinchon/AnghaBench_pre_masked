
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_mcc_wrb {int dummy; } ;
struct be_mcc_mailbox {struct be_mcc_wrb wrb; } ;
struct be_dma_mem {scalar_t__ va; } ;
struct be_adapter {struct be_dma_mem mbox_mem; } ;


 int FUNC_0 (struct be_mcc_wrb*,int ,int) ;

__attribute__((used)) static inline struct be_mcc_wrb *FUNC_1(struct be_adapter *VAR_0)
{
 struct be_dma_mem *VAR_1 = &VAR_0->mbox_mem;
 struct be_mcc_wrb *VAR_2
  = &((struct be_mcc_mailbox *)(VAR_1->va))->wrb;
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 return VAR_2;
}
