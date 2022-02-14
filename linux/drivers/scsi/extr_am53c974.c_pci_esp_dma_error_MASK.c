
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_esp_priv {int dma_status; } ;
struct esp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct pci_esp_priv* FUNC_0 (struct esp*) ;
 void* FUNC_1 (struct esp*,int ) ;
 int FUNC_2 (struct esp*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct esp *VAR_7)
{
 struct pci_esp_priv *VAR_8 = FUNC_0(VAR_7);

 if (VAR_8->dma_status & VAR_6) {
  u8 VAR_9 = FUNC_1(VAR_7, VAR_0);

  if ((VAR_9 & VAR_3) == VAR_4)
   FUNC_2(VAR_7, VAR_1, VAR_0);

  return 1;
 }
 if (VAR_8->dma_status & VAR_5) {
  FUNC_2(VAR_7, VAR_2, VAR_0);
  VAR_8->dma_status = FUNC_1(VAR_7, VAR_0);
  return 1;
 }
 return 0;
}
