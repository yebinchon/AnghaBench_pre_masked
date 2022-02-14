
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bcm_sysport_priv {int crc_fwd; int is_lite; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct bcm_sysport_priv*,int ) ;
 struct bcm_sysport_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct bcm_sysport_priv*,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_5,
        netdev_features_t VAR_6)
{
 struct bcm_sysport_priv *VAR_7 = FUNC_3(VAR_5);


 if (!VAR_7->is_lite)
  VAR_7->crc_fwd = !!(FUNC_4(VAR_7, VAR_4) & VAR_0);
 else
  VAR_7->crc_fwd = !((FUNC_2(VAR_7, VAR_1) &
      VAR_2) >> VAR_3);

 FUNC_0(VAR_5, VAR_6);
 FUNC_1(VAR_5, VAR_6);

 return 0;
}
