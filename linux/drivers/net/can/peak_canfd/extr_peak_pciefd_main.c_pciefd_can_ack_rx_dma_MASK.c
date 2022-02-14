
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pciefd_can {int irq_tag; scalar_t__ rx_dma_vaddr; } ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pciefd_can*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct pciefd_can *VAR_1)
{

 VAR_1->irq_tag = FUNC_0(*(__le32 *)VAR_1->rx_dma_vaddr);
 VAR_1->irq_tag++;
 VAR_1->irq_tag &= 0xf;


 FUNC_1(VAR_1, VAR_1->irq_tag, VAR_0);
}
