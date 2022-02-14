
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_coalesce_info {scalar_t__ speed; } ;
struct rtl8169_private {scalar_t__ mac_version; TYPE_1__* phydev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ speed; } ;


 int VAR_0 ;
 struct rtl_coalesce_info const* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 struct rtl8169_private* FUNC_1 (struct net_device*) ;
 struct rtl_coalesce_info* VAR_2 ;
 struct rtl_coalesce_info* VAR_3 ;

__attribute__((used)) static const struct rtl_coalesce_info *FUNC_2(struct net_device *VAR_4)
{
 struct rtl8169_private *VAR_5 = FUNC_1(VAR_4);
 const struct rtl_coalesce_info *VAR_6;

 if (VAR_5->mac_version <= VAR_1)
  VAR_6 = VAR_3;
 else
  VAR_6 = VAR_2;

 for (; VAR_6->speed; VAR_6++) {
  if (VAR_5->phydev->speed == VAR_6->speed)
   return VAR_6;
 }

 return FUNC_0(-VAR_0);
}
