
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct arc_emac_priv {int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct arc_emac_priv*,int ,int) ;
 int FUNC_3 (int *) ;
 struct arc_emac_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_6)
{
 struct arc_emac_priv *VAR_7 = FUNC_4(VAR_6);

 FUNC_3(&VAR_7->napi);
 FUNC_5(VAR_6);

 FUNC_6(VAR_6->phydev);


 FUNC_2(VAR_7, VAR_4, VAR_2 | VAR_5 | VAR_1);


 FUNC_2(VAR_7, VAR_3, VAR_0);


 FUNC_1(VAR_6);
 FUNC_0(VAR_6);

 return 0;
}
