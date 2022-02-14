
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_esp_priv {scalar_t__ dma_status; } ;
struct esp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 struct pci_esp_priv* FUNC_1 (struct esp*) ;
 int FUNC_2 (struct esp*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct esp *VAR_2)
{
 struct pci_esp_priv *VAR_3 = FUNC_1(VAR_2);

 FUNC_0("invalidate DMA\n");

 FUNC_2(VAR_2, VAR_1, VAR_0);
 VAR_3->dma_status = 0;
}
