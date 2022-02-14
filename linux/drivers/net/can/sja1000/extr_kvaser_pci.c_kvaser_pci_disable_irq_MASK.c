
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sja1000_priv {struct kvaser_pci* priv; } ;
struct net_device {int dummy; } ;
struct kvaser_pci {scalar_t__ conf_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct sja1000_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2)
{
 struct sja1000_priv *VAR_3 = FUNC_2(VAR_2);
 struct kvaser_pci *VAR_4 = VAR_3->priv;
 u32 VAR_5;


 VAR_5 = FUNC_0(VAR_4->conf_addr + VAR_1);
 VAR_5 &= ~VAR_0;
 FUNC_1(VAR_5, VAR_4->conf_addr + VAR_1);
}
