
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_commit_info {TYPE_1__* mds; } ;
struct nfs_commit_data {int context; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int rpcs_out; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct list_head*) ;
 int FUNC_3 (struct nfs_commit_data*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool
FUNC_5(struct list_head *VAR_0,
       struct nfs_commit_data *VAR_1,
       struct nfs_commit_info *VAR_2)
{
 if (FUNC_2(VAR_0)) {
  if (FUNC_1(&VAR_2->mds->rpcs_out))
   FUNC_4(&VAR_2->mds->rpcs_out);



  FUNC_0(VAR_1->context);
  FUNC_3(VAR_1);
  return 1;
 }

 return 0;
}
