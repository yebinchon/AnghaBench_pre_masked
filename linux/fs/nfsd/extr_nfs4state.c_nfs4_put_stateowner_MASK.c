
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs4_stateowner {TYPE_1__* so_ops; int so_count; struct nfs4_client* so_client; } ;
struct nfs4_client {int cl_lock; } ;
struct TYPE_2__ {int (* so_unhash ) (struct nfs4_stateowner*) ;} ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nfs4_stateowner*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nfs4_stateowner*) ;

__attribute__((used)) static void FUNC_5(struct nfs4_stateowner *VAR_0)
{
 struct nfs4_client *VAR_1 = VAR_0->so_client;

 FUNC_1(&VAR_1->cl_lock);

 if (!FUNC_0(&VAR_0->so_count, &VAR_1->cl_lock))
  return;
 VAR_0->so_ops->so_unhash(VAR_0);
 FUNC_3(&VAR_1->cl_lock);
 FUNC_2(VAR_0);
}
