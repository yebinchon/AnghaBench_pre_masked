
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct lockd_net {int grace_period_end; int lockd_manager; } ;


 int FUNC_0 (int *) ;
 unsigned long FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (struct net*,int *) ;
 struct lockd_net* FUNC_3 (struct net*,int ) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct net *VAR_1)
{
 unsigned long VAR_2 = FUNC_1();
 struct lockd_net *VAR_3 = FUNC_3(VAR_1, VAR_0);

 FUNC_2(VAR_1, &VAR_3->lockd_manager);
 FUNC_0(&VAR_3->grace_period_end);
 FUNC_4(&VAR_3->grace_period_end, VAR_2);
}
