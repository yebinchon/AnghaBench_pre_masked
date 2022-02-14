
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slip {scalar_t__ mode; int mtu; } ;
struct net_device {int watchdog_timeo; scalar_t__ type; int mtu; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct slip* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2)
{
 struct slip *VAR_3 = FUNC_0(VAR_2);





 VAR_2->mtu = VAR_3->mtu;
 VAR_2->type = VAR_0 + VAR_3->mode;



 return 0;
}
