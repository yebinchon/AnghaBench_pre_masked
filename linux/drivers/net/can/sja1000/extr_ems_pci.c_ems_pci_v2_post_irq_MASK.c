
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1000_priv {scalar_t__ priv; } ;
struct ems_pci_card {scalar_t__ conf_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(const struct sja1000_priv *VAR_2)
{
 struct ems_pci_card *VAR_3 = (struct ems_pci_card *)VAR_2->priv;

 FUNC_0(VAR_1, VAR_3->conf_addr + VAR_0);
}
