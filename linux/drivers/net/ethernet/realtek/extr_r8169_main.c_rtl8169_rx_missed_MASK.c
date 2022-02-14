
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8169_private {scalar_t__ mac_version; } ;
struct TYPE_2__ {int rx_missed_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rtl8169_private*,int ) ;
 int FUNC_1 (struct rtl8169_private*,int ,int ) ;
 int VAR_1 ;
 struct rtl8169_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2)
{
 struct rtl8169_private *VAR_3 = FUNC_2(VAR_2);

 if (VAR_3->mac_version > VAR_0)
  return;

 VAR_2->stats.rx_missed_errors += FUNC_0(VAR_3, VAR_1) & 0xffffff;
 FUNC_1(VAR_3, VAR_1, 0);
}
