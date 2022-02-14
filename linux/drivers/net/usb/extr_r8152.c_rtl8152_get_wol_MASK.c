
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8152 {int intf; int control; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; scalar_t__ supported; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct r8152*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct r8152* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct r8152*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_1, struct ethtool_wolinfo *VAR_2)
{
 struct r8152 *VAR_3 = FUNC_3(VAR_1);

 if (FUNC_5(VAR_3->intf) < 0)
  return;

 if (!FUNC_4(VAR_3)) {
  VAR_2->supported = 0;
  VAR_2->wolopts = 0;
 } else {
  FUNC_1(&VAR_3->control);
  VAR_2->supported = VAR_0;
  VAR_2->wolopts = FUNC_0(VAR_3);
  FUNC_2(&VAR_3->control);
 }

 FUNC_6(VAR_3->intf);
}
