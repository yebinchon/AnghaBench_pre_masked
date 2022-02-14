
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kpc_dma_device {scalar_t__ eng_regs; } ;
struct kpc_dma_descriptor {int MyDMAAddr; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline
void FUNC_1(struct kpc_dma_device *VAR_0, struct kpc_dma_descriptor *VAR_1)
{
 FUNC_0(VAR_1->MyDMAAddr, VAR_0->eng_regs + 2);
}
