
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ phydev; int dev_addr; } ;
struct hisi_femac_priv {scalar_t__ glb_base; scalar_t__ link_status; int napi; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hisi_femac_priv*,int) ;
 int FUNC_1 (struct hisi_femac_priv*) ;
 int FUNC_2 (struct hisi_femac_priv*) ;
 int FUNC_3 (struct hisi_femac_priv*,int ) ;
 int FUNC_4 (int *) ;
 struct hisi_femac_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_5)
{
 struct hisi_femac_priv *VAR_6 = FUNC_5(VAR_5);

 FUNC_1(VAR_6);
 FUNC_3(VAR_6, VAR_5->dev_addr);
 FUNC_2(VAR_6);

 FUNC_7(VAR_5);
 FUNC_6(VAR_5);
 FUNC_8(VAR_5);
 FUNC_4(&VAR_6->napi);

 VAR_6->link_status = 0;
 if (VAR_5->phydev)
  FUNC_9(VAR_5->phydev);

 FUNC_10(VAR_4, VAR_6->glb_base + VAR_1);
 FUNC_0(VAR_6, VAR_2 | VAR_3 | VAR_0);

 return 0;
}
