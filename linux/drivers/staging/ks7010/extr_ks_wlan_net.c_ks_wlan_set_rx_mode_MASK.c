
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ks_wlan_private {scalar_t__ dev_state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ks_wlan_private*,int ) ;
 struct ks_wlan_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static
void FUNC_2(struct net_device *VAR_2)
{
 struct ks_wlan_private *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->dev_state < VAR_0)
  return;
 FUNC_0(VAR_3, VAR_1);
}
