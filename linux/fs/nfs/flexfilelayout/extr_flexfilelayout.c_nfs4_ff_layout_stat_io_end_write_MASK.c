
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_start; } ;
struct nfs4_ff_layout_mirror {int lock; int flags; int write_stat; } ;
typedef enum nfs3_stable_how { ____Placeholder_nfs3_stable_how } nfs3_stable_how ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct rpc_task *VAR_2,
  struct nfs4_ff_layout_mirror *VAR_3,
  __u64 VAR_4,
  __u64 VAR_5,
  enum nfs3_stable_how VAR_6)
{
 if (VAR_6 == VAR_1)
  VAR_4 = VAR_5 = 0;

 FUNC_3(&VAR_3->lock);
 FUNC_1(&VAR_3->write_stat,
   VAR_4, VAR_5, FUNC_0(), VAR_2->tk_start);
 FUNC_2(VAR_0, &VAR_3->flags);
 FUNC_4(&VAR_3->lock);
}
