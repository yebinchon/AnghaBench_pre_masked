
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_esp_priv {int dummy; } ;
struct esp {int dev; } ;


 struct pci_esp_priv* FUNC_0 (int ) ;

__attribute__((used)) static inline struct pci_esp_priv *FUNC_1(struct esp *VAR_0)
{
 return FUNC_0(VAR_0->dev);
}
