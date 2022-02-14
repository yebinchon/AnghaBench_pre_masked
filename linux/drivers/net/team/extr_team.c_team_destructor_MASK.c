
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct team {int pcpu_stats; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct team* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct team *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->pcpu_stats);
}
