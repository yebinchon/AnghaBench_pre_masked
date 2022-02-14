
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gem {int link_timer; int dev; int want_autoneg; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct gem*,int *) ;
 struct gem* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1)
{
 struct gem *VAR_2 = FUNC_2(VAR_1);

 if (!VAR_2->want_autoneg)
  return -VAR_0;


 if (FUNC_3(VAR_2->dev)) {
  FUNC_0(&VAR_2->link_timer);
  FUNC_1(VAR_2, ((void*)0));
 }

 return 0;
}
