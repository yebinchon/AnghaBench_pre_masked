
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct hp100_private {scalar_t__ lan_type; int hub_status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*,int ) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 struct hp100_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2)
{
 struct hp100_private *VAR_3 = FUNC_4(VAR_2);

 if (VAR_3->lan_type < 0) {
  FUNC_3(VAR_2);
  if ((VAR_3->lan_type = FUNC_1(VAR_2)) < 0) {
   FUNC_5("hp100: %s: no connection found - check wire\n", VAR_2->name);
   FUNC_2(VAR_2);
   return -VAR_0;
  }
  if (VAR_3->lan_type == VAR_1)
   VAR_3->hub_status = FUNC_0(VAR_2, 0);
  FUNC_2(VAR_2);
 }
 return 0;
}
