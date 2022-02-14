
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rtl_coalesce_scale {int* nsecs; } ;
struct rtl8169_private {int cp_cmd; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int tx_coalesce_usecs; int tx_max_coalesced_frames; int rx_coalesce_usecs; int rx_max_coalesced_frames; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct rtl_coalesce_scale const*) ;
 int VAR_4 ;
 int FUNC_1 (struct rtl_coalesce_scale const*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct rtl8169_private*,int ) ;
 int FUNC_3 (struct rtl8169_private*,int ,int) ;
 int FUNC_4 (int,int) ;
 struct rtl8169_private* FUNC_5 (struct net_device*) ;
 struct rtl_coalesce_scale* FUNC_6 (struct net_device*,int,int*) ;
 scalar_t__ FUNC_7 (struct rtl8169_private*) ;
 int FUNC_8 (struct rtl8169_private*) ;
 int FUNC_9 (struct rtl8169_private*) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_7, struct ethtool_coalesce *VAR_8)
{
 struct rtl8169_private *VAR_9 = FUNC_5(VAR_7);
 const struct rtl_coalesce_scale *VAR_10;
 struct {
  u32 frames;
  u32 usecs;
 } VAR_11 [] = {
  { VAR_8->rx_max_coalesced_frames, VAR_8->rx_coalesce_usecs },
  { VAR_8->tx_max_coalesced_frames, VAR_8->tx_coalesce_usecs }
 }, *VAR_12 = VAR_11;
 u16 VAR_13 = 0, VAR_14;
 int VAR_15;

 if (FUNC_7(VAR_9))
  return -VAR_2;

 VAR_10 = FUNC_6(VAR_7,
   FUNC_4(VAR_12[0].usecs, VAR_12[1].usecs) * 1000, &VAR_14);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 for (VAR_15 = 0; VAR_15 < 2; VAR_15++, VAR_12++) {
  u32 VAR_16;
  if (VAR_12->frames == 1) {
   VAR_12->frames = 0;
  }

  VAR_16 = VAR_12->usecs * 1000 / VAR_10->nsecs[VAR_15];
  if (VAR_12->frames > VAR_5 || VAR_12->frames % 4)
   return -VAR_1;

  VAR_13 <<= VAR_6;
  VAR_13 |= VAR_16;
  VAR_13 <<= VAR_6;
  VAR_13 |= VAR_12->frames >> 2;
 }

 FUNC_8(VAR_9);

 FUNC_3(VAR_9, VAR_4, FUNC_10(VAR_13));

 VAR_9->cp_cmd = (VAR_9->cp_cmd & ~VAR_3) | VAR_14;
 FUNC_3(VAR_9, VAR_0, VAR_9->cp_cmd);
 FUNC_2(VAR_9, VAR_0);

 FUNC_9(VAR_9);

 return 0;
}
