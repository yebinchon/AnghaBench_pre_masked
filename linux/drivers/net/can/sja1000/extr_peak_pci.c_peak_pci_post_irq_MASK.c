
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sja1000_priv {struct peak_pci_chan* priv; } ;
struct peak_pci_chan {int icr_mask; scalar_t__ cfg_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(const struct sja1000_priv *VAR_1)
{
 struct peak_pci_chan *VAR_2 = VAR_1->priv;
 u16 VAR_3;


 VAR_3 = FUNC_0(VAR_2->cfg_base + VAR_0);
 if (VAR_3 & VAR_2->icr_mask)
  FUNC_1(VAR_2->icr_mask, VAR_2->cfg_base + VAR_0);
}
