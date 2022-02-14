
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct bcmgenet_priv {int desc_rxchk_en; scalar_t__ crc_fwd_en; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bcmgenet_priv*,int ) ;
 int FUNC_1 (struct bcmgenet_priv*,int ,int ) ;
 struct bcmgenet_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4,
    netdev_features_t VAR_5)
{
 struct bcmgenet_priv *VAR_6 = FUNC_2(VAR_4);
 u32 VAR_7;
 bool VAR_8;

 VAR_8 = !!(VAR_5 & VAR_0);

 VAR_7 = FUNC_0(VAR_6, VAR_1);


 if (VAR_8)
  VAR_7 |= VAR_2;
 else
  VAR_7 &= ~VAR_2;
 VAR_6->desc_rxchk_en = VAR_8;




 if (VAR_8 && VAR_6->crc_fwd_en)
  VAR_7 |= VAR_3;
 else
  VAR_7 &= ~VAR_3;

 FUNC_1(VAR_6, VAR_7, VAR_1);

 return 0;
}
