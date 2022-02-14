
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct bcmgenet_priv {int desc_64b_en; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bcmgenet_priv*,int ) ;
 int FUNC_1 (struct bcmgenet_priv*,int ,int ) ;
 int FUNC_2 (struct bcmgenet_priv*) ;
 int FUNC_3 (struct bcmgenet_priv*,int ) ;
 struct bcmgenet_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4,
    netdev_features_t VAR_5)
{
 struct bcmgenet_priv *VAR_6 = FUNC_4(VAR_4);
 bool VAR_7;
 u32 VAR_8, VAR_9;

 VAR_8 = FUNC_2(VAR_6);
 VAR_9 = FUNC_0(VAR_6, VAR_3);

 VAR_7 = !!(VAR_5 & (VAR_1 | VAR_0));


 if (VAR_7) {
  VAR_8 |= VAR_2;
  VAR_9 |= VAR_2;
 } else {
  VAR_8 &= ~VAR_2;
  VAR_9 &= ~VAR_2;
 }
 VAR_6->desc_64b_en = VAR_7;

 FUNC_3(VAR_6, VAR_8);
 FUNC_1(VAR_6, VAR_9, VAR_3);

 return 0;
}
