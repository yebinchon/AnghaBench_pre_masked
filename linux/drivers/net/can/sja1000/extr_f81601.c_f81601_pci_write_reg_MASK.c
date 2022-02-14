
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sja1000_priv {scalar_t__ reg_base; struct f81601_pci_card* priv; } ;
struct f81601_pci_card {int lock; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(const struct sja1000_priv *VAR_0, int VAR_1,
     u8 VAR_2)
{
 struct f81601_pci_card *VAR_3 = VAR_0->priv;
 unsigned long VAR_4;

 FUNC_1(&VAR_3->lock, VAR_4);
 FUNC_3(VAR_2, VAR_0->reg_base + VAR_1);
 FUNC_0(VAR_0->reg_base);
 FUNC_2(&VAR_3->lock, VAR_4);
}
