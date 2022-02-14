
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlme_ext_priv {int tx_rate; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;



void FUNC_0(struct adapter *VAR_0, u8 VAR_1)
{
 struct mlme_ext_priv *VAR_2 = &(VAR_0->mlmeextpriv);

 VAR_2->tx_rate = VAR_1;

}
