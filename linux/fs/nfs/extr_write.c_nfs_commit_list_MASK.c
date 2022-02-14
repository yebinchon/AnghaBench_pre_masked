
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_commit_info {TYPE_1__* mds; } ;
struct nfs_commit_data {int mds_ops; } ;
struct list_head {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int rpcs_out; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct list_head*) ;
 struct nfs_commit_data* FUNC_4 (int) ;
 int FUNC_5 (struct nfs_commit_data*,struct list_head*,int *,struct nfs_commit_info*) ;
 int FUNC_6 (int ,struct nfs_commit_data*,int ,int ,int,int ) ;

__attribute__((used)) static int
FUNC_7(struct inode *VAR_0, struct list_head *VAR_1, int VAR_2,
  struct nfs_commit_info *VAR_3)
{
 struct nfs_commit_data *VAR_4;


 if (FUNC_3(VAR_1))
  return 0;

 VAR_4 = FUNC_4(1);


 FUNC_5(VAR_4, VAR_1, ((void*)0), VAR_3);
 FUNC_2(&VAR_3->mds->rpcs_out);
 return FUNC_6(FUNC_0(VAR_0), VAR_4, FUNC_1(VAR_0),
       VAR_4->mds_ops, VAR_2, 0);
}
