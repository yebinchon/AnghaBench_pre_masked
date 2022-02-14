
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smi_port {int ** cpu_addr; int * dma_addr; TYPE_1__* dev; } ;
struct TYPE_2__ {int pci_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct smi_port *VAR_1)
{
 if (VAR_1->cpu_addr[0]) {
  FUNC_0(VAR_1->dev->pci_dev, VAR_0,
        VAR_1->cpu_addr[0], VAR_1->dma_addr[0]);
  VAR_1->cpu_addr[0] = ((void*)0);
 }
 if (VAR_1->cpu_addr[1]) {
  FUNC_0(VAR_1->dev->pci_dev, VAR_0,
        VAR_1->cpu_addr[1], VAR_1->dma_addr[1]);
  VAR_1->cpu_addr[1] = ((void*)0);
 }
}
