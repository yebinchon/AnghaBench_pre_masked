
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_esp_priv {int dma_status; } ;
struct esp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 struct pci_esp_priv* FUNC_1 (struct esp*) ;
 int FUNC_2 (struct esp*,int ) ;

__attribute__((used)) static int FUNC_3(struct esp *VAR_5)
{
 struct pci_esp_priv *VAR_6 = FUNC_1(VAR_5);

 VAR_6->dma_status = FUNC_2(VAR_5, VAR_0);
 FUNC_0("dma intr dreg[%02x]\n", VAR_6->dma_status);

 if (VAR_6->dma_status & (VAR_3 |
          VAR_1 |
          VAR_2 |
          VAR_4))
  return 1;

 return 0;
}
