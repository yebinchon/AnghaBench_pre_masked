
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct lockd_net {int lockd_manager; int grace_period_end; } ;


 int FUNC_0 (int *) ;
 struct net VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct lockd_net* FUNC_2 (struct net*,int ) ;
 int FUNC_3 () ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct net*) ;

__attribute__((used)) static void FUNC_5(void)
{
 if (VAR_2) {
  struct net *VAR_3 = &VAR_0;
  struct lockd_net *VAR_4 = FUNC_2(VAR_3, VAR_1);

  FUNC_0(&VAR_4->grace_period_end);
  FUNC_1(&VAR_4->lockd_manager);
  FUNC_3();
  FUNC_4(VAR_3);
 }
}
