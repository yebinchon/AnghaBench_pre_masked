
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net {int dummy; } ;
struct TYPE_2__ {int block_opens; int list; } ;
struct lockd_net {int nsm_handles; TYPE_1__ lockd_manager; int grace_period_end; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct lockd_net* FUNC_2 (struct net*,int ) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_2)
{
 struct lockd_net *VAR_3 = FUNC_2(VAR_2, VAR_1);

 FUNC_0(&VAR_3->grace_period_end, VAR_0);
 FUNC_1(&VAR_3->lockd_manager.list);
 VAR_3->lockd_manager.block_opens = 0;
 FUNC_1(&VAR_3->nsm_handles);
 return 0;
}
