
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct team {int user_carrier_enabled; } ;
struct net_device {int dummy; } ;


 struct team* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, bool VAR_1)
{
 struct team *VAR_2 = FUNC_0(VAR_0);

 VAR_2->user_carrier_enabled = 1;

 if (VAR_1)
  FUNC_2(VAR_0);
 else
  FUNC_1(VAR_0);
 return 0;
}
