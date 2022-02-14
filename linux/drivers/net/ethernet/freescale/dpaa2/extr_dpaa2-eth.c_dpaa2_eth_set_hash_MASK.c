
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct dpaa2_eth_priv {int dummy; } ;
struct TYPE_3__ {int rxnfc_field; int id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct dpaa2_eth_priv*) ;
 int FUNC_2 (struct net_device*,int ,int) ;
 struct dpaa2_eth_priv* FUNC_3 (struct net_device*) ;

int FUNC_4(struct net_device *VAR_3, u64 VAR_4)
{
 struct dpaa2_eth_priv *VAR_5 = FUNC_3(VAR_3);
 u64 VAR_6 = 0;
 int VAR_7;

 if (!FUNC_1(VAR_5))
  return -VAR_1;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++)
  if (VAR_2[VAR_7].rxnfc_field & VAR_4)
   VAR_6 |= VAR_2[VAR_7].id;

 return FUNC_2(VAR_3, VAR_0, VAR_6);
}
