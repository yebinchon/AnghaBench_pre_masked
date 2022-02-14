
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct sis900_private {scalar_t__ host_bridge_rev; int cur_phy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct net_device*,int ,int ) ;
 int FUNC_1 (struct net_device*,int ,int ,int) ;
 struct sis900_private* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_7, u8 VAR_8)
{
 struct sis900_private *VAR_9 = FUNC_2(VAR_7);
 u16 VAR_10, VAR_11=0, VAR_12=0, VAR_13=0;
 int VAR_14, VAR_15=10;

 if ( !(VAR_8 == VAR_6 || VAR_8 == VAR_4 ||
        VAR_8 == VAR_1 || VAR_8 == VAR_5) )
  return;

 if (FUNC_3(VAR_7)) {
  VAR_10 = FUNC_0(VAR_7, VAR_9->cur_phy, VAR_0);
  FUNC_1(VAR_7, VAR_9->cur_phy, VAR_0,
     (0x2200 | VAR_10) & 0xBFFF);
  for (VAR_14=0; VAR_14 < VAR_15; VAR_14++) {
   VAR_11 = (0x00F8 & FUNC_0(VAR_7,
     VAR_9->cur_phy, VAR_0)) >> 3;
   if (VAR_14 == 0)
    VAR_12=VAR_13=VAR_11;
   VAR_12 = (VAR_11 > VAR_12) ?
      VAR_11 : VAR_12;
   VAR_13 = (VAR_11 < VAR_13) ?
      VAR_11 : VAR_13;
  }

  if (VAR_8 == VAR_6 || VAR_8 == VAR_4 ||
      VAR_8 == VAR_5) {
   if (VAR_12 < 5)
    VAR_11 = VAR_12;
   else if (VAR_12 >= 5 && VAR_12 < 15)
    VAR_11 = (VAR_12 == VAR_13) ?
      VAR_12+2 : VAR_12+1;
   else if (VAR_12 >= 15)
    VAR_11=(VAR_12 == VAR_13) ?
      VAR_12+6 : VAR_12+5;
  }

  if (VAR_8 == VAR_1 &&
      (VAR_9->host_bridge_rev == VAR_2 ||
       VAR_9->host_bridge_rev == VAR_3)) {
   if (VAR_12 == 0)
    VAR_11 = 3;
   else
    VAR_11 = (VAR_12 + VAR_13 + 1)/2;
  }

  VAR_10 = FUNC_0(VAR_7, VAR_9->cur_phy, VAR_0);
  VAR_10 = (VAR_10 & 0xFF07) | ((VAR_11 << 3) & 0x00F8);
  VAR_10 = (VAR_10 | 0x6000) & 0xFDFF;
  FUNC_1(VAR_7, VAR_9->cur_phy, VAR_0, VAR_10);
 } else {
  VAR_10 = FUNC_0(VAR_7, VAR_9->cur_phy, VAR_0);
  if (VAR_8 == VAR_1 &&
      (VAR_9->host_bridge_rev == VAR_2 ||
       VAR_9->host_bridge_rev == VAR_3))
   FUNC_1(VAR_7, VAR_9->cur_phy, VAR_0,
      (VAR_10 | 0x2200) & 0xBFFF);
  else
   FUNC_1(VAR_7, VAR_9->cur_phy, VAR_0,
      (VAR_10 | 0x2000) & 0xBFFF);
 }
}
