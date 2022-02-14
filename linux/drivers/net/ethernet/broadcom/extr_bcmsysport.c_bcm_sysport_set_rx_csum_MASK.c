
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct bcm_sysport_priv {int rx_chk_en; scalar_t__ crc_fwd; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct bcm_sysport_priv* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct bcm_sysport_priv*,int ) ;
 int FUNC_3 (struct bcm_sysport_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_6,
        netdev_features_t VAR_7)
{
 struct bcm_sysport_priv *VAR_8 = FUNC_0(VAR_6);
 u32 VAR_9;

 VAR_8->rx_chk_en = !!(VAR_7 & VAR_0);
 VAR_9 = FUNC_2(VAR_8, VAR_2);



 VAR_9 &= ~VAR_4;
 if (VAR_8->rx_chk_en)
  VAR_9 |= VAR_3;
 else
  VAR_9 &= ~VAR_3;




 if (VAR_8->rx_chk_en && VAR_8->crc_fwd)
  VAR_9 |= VAR_5;
 else
  VAR_9 &= ~VAR_5;





 if (FUNC_1(VAR_6))
  VAR_9 |= VAR_1;
 else
  VAR_9 &= ~VAR_1;

 FUNC_3(VAR_8, VAR_9, VAR_2);
}
