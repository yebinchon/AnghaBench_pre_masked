
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ag71xx {int restart_work; } ;


 struct ag71xx* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ag71xx*,int ,struct net_device*,char*) ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct ag71xx *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2, VAR_0, VAR_1, "tx timeout\n");

 FUNC_2(&VAR_2->restart_work, 1);
}
