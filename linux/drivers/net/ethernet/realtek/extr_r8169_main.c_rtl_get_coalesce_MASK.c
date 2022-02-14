
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rtl_coalesce_scale {int* nsecs; } ;
struct rtl_coalesce_info {struct rtl_coalesce_scale* scalev; } ;
struct rtl8169_private {size_t cp_cmd; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int tx_coalesce_usecs; int tx_max_coalesced_frames; int rx_coalesce_usecs; int rx_max_coalesced_frames; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct rtl_coalesce_info const*) ;
 int VAR_2 ;
 int FUNC_1 (struct rtl_coalesce_info const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct rtl8169_private*,int ) ;
 int FUNC_3 (struct ethtool_coalesce*,int ,int) ;
 struct rtl8169_private* FUNC_4 (struct net_device*) ;
 struct rtl_coalesce_info* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct rtl8169_private*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_5, struct ethtool_coalesce *VAR_6)
{
 struct rtl8169_private *VAR_7 = FUNC_4(VAR_5);
 const struct rtl_coalesce_info *VAR_8;
 const struct rtl_coalesce_scale *VAR_9;
 struct {
  u32 *max_frames;
  u32 *usecs;
 } VAR_10 [] = {
  { &VAR_6->rx_max_coalesced_frames, &VAR_6->rx_coalesce_usecs },
  { &VAR_6->tx_max_coalesced_frames, &VAR_6->tx_coalesce_usecs }
 }, *VAR_11 = VAR_10;
 int VAR_12;
 u16 VAR_13;

 if (FUNC_6(VAR_7))
  return -VAR_0;

 FUNC_3(VAR_6, 0, sizeof(*VAR_6));


 VAR_8 = FUNC_5(VAR_5);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_9 = &VAR_8->scalev[VAR_7->cp_cmd & VAR_1];


 for (VAR_13 = FUNC_2(VAR_7, VAR_2); VAR_13; VAR_13 >>= VAR_4, VAR_11++) {
  *VAR_11->max_frames = (VAR_13 & VAR_3) << 2;
  VAR_13 >>= VAR_4;
  *VAR_11->usecs = VAR_13 & VAR_3;
 }

 for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
  VAR_11 = VAR_10 + VAR_12;
  *VAR_11->usecs = (*VAR_11->usecs * VAR_9->nsecs[VAR_12]) / 1000;





  if (!*VAR_11->usecs && !*VAR_11->max_frames)
   *VAR_11->max_frames = 1;
 }

 return 0;
}
