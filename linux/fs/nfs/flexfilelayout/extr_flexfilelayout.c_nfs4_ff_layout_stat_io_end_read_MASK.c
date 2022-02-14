
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_start; } ;
struct nfs4_ff_layout_mirror {int lock; int flags; int read_stat; } ;
typedef int __u64 ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct rpc_task *VAR_1,
  struct nfs4_ff_layout_mirror *VAR_2,
  __u64 VAR_3,
  __u64 VAR_4)
{
 FUNC_3(&VAR_2->lock);
 FUNC_1(&VAR_2->read_stat,
   VAR_3, VAR_4,
   FUNC_0(), VAR_1->tk_start);
 FUNC_2(VAR_0, &VAR_2->flags);
 FUNC_4(&VAR_2->lock);
}
