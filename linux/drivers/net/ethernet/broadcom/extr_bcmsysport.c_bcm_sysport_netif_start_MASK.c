
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct bcm_sysport_priv {int is_lite; int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bcm_sysport_priv*,int ) ;
 int FUNC_1 (struct bcm_sysport_priv*) ;
 int FUNC_2 (struct bcm_sysport_priv*,int) ;
 int FUNC_3 (struct bcm_sysport_priv*,int) ;
 int FUNC_4 (int *) ;
 struct bcm_sysport_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_4)
{
 struct bcm_sysport_priv *VAR_5 = FUNC_5(VAR_4);


 FUNC_0(VAR_5, VAR_3);
 FUNC_1(VAR_5);
 FUNC_4(&VAR_5->napi);


 FUNC_2(VAR_5, VAR_0 | VAR_2);

 FUNC_6(VAR_4->phydev);


 if (!VAR_5->is_lite)
  FUNC_3(VAR_5, 0xffffffff);
 else
  FUNC_2(VAR_5, VAR_1);
}
