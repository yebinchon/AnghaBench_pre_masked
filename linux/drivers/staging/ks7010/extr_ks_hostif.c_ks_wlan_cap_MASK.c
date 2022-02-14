
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ preamble; scalar_t__ phy_type; } ;
struct ks_wlan_private {TYPE_1__ reg; } ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;

__attribute__((used)) static __le16 FUNC_1(struct ks_wlan_private *VAR_6)
{
 u16 VAR_7 = 0x0000;

 if (VAR_6->reg.preamble == VAR_1)
  VAR_7 |= VAR_4;

 VAR_7 &= ~(VAR_3);

 if (VAR_6->reg.phy_type != VAR_0) {
  VAR_7 |= VAR_5;
  VAR_7 &= ~(VAR_2);
 }

 return FUNC_0(VAR_7);
}
