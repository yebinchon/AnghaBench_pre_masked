
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {scalar_t__ phydev; } ;
struct enetc_ndev_priv {int bdr_int_num; TYPE_1__** int_vector; } ;
struct TYPE_2__ {int napi; } ;


 int FUNC_0 (struct enetc_ndev_priv*) ;
 int FUNC_1 (struct enetc_ndev_priv*) ;
 int FUNC_2 (struct enetc_ndev_priv*) ;
 int FUNC_3 (struct enetc_ndev_priv*) ;
 int FUNC_4 (struct enetc_ndev_priv*) ;
 int FUNC_5 (struct enetc_ndev_priv*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct enetc_ndev_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;

int FUNC_13(struct net_device *VAR_0)
{
 struct enetc_ndev_priv *VAR_1 = FUNC_8(VAR_0);
 int VAR_2;

 FUNC_10(VAR_0);

 if (VAR_0->phydev) {
  FUNC_12(VAR_0->phydev);
  FUNC_11(VAR_0->phydev);
 } else {
  FUNC_9(VAR_0);
 }

 for (VAR_2 = 0; VAR_2 < VAR_1->bdr_int_num; VAR_2++) {
  FUNC_7(&VAR_1->int_vector[VAR_2]->napi);
  FUNC_6(&VAR_1->int_vector[VAR_2]->napi);
 }

 FUNC_1(VAR_1);
 FUNC_0(VAR_1);

 FUNC_4(VAR_1);
 FUNC_3(VAR_1);
 FUNC_5(VAR_1);
 FUNC_2(VAR_1);

 return 0;
}
