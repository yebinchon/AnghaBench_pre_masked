
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orinoco_private {scalar_t__ nicbuf_size; } ;
struct net_device {int mtu; } ;
struct ieee80211_hdr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct orinoco_private* FUNC_0 (struct net_device*) ;

int FUNC_1(struct net_device *VAR_3, int VAR_4)
{
 struct orinoco_private *VAR_5 = FUNC_0(VAR_3);


 if ((VAR_4 + VAR_1 + sizeof(struct ieee80211_hdr)) >
      (VAR_5->nicbuf_size - VAR_2))
  return -VAR_0;

 VAR_3->mtu = VAR_4;

 return 0;
}
