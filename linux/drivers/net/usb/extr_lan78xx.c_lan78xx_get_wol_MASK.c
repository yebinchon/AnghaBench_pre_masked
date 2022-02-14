
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct lan78xx_priv {int wol; } ;
struct lan78xx_net {int intf; scalar_t__* data; } ;
struct ethtool_wolinfo {int wolopts; scalar_t__ supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct lan78xx_net*,int ,int*) ;
 struct lan78xx_net* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_3,
       struct ethtool_wolinfo *VAR_4)
{
 struct lan78xx_net *VAR_5 = FUNC_1(VAR_3);
 int VAR_6;
 u32 VAR_7;
 struct lan78xx_priv *VAR_8 = (struct lan78xx_priv *)(VAR_5->data[0]);

 if (FUNC_3(VAR_5->intf) < 0)
   return;

 VAR_6 = FUNC_0(VAR_5, VAR_0, &VAR_7);
 if (FUNC_2(VAR_6 < 0)) {
  VAR_4->supported = 0;
  VAR_4->wolopts = 0;
 } else {
  if (VAR_7 & VAR_1) {
   VAR_4->supported = VAR_2;
   VAR_4->wolopts = VAR_8->wol;
  } else {
   VAR_4->supported = 0;
   VAR_4->wolopts = 0;
  }
 }

 FUNC_4(VAR_5->intf);
}
