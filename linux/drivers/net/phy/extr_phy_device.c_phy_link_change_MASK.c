
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int (* adjust_link ) (struct net_device*) ;struct net_device* attached_dev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct phy_device *VAR_0, bool VAR_1, bool VAR_2)
{
 struct net_device *VAR_3 = VAR_0->attached_dev;

 if (VAR_2) {
  if (VAR_1)
   FUNC_1(VAR_3);
  else
   FUNC_0(VAR_3);
 }
 VAR_0->adjust_link(VAR_3);
}
