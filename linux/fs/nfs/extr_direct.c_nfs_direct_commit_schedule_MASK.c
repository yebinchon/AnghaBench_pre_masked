
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_direct_req {int inode; } ;
struct nfs_commit_info {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct nfs_direct_req*) ;
 int FUNC_2 (int ,int *,int ,struct nfs_commit_info*) ;
 int FUNC_3 (struct nfs_commit_info*,struct nfs_direct_req*) ;
 int FUNC_4 (int ,int *,struct nfs_commit_info*) ;

__attribute__((used)) static void FUNC_5(struct nfs_direct_req *VAR_1)
{
 int VAR_2;
 struct nfs_commit_info VAR_3;
 FUNC_0(VAR_0);

 FUNC_3(&VAR_3, VAR_1);
 FUNC_4(VAR_1->inode, &VAR_0, &VAR_3);
 VAR_2 = FUNC_2(VAR_1->inode, &VAR_0, 0, &VAR_3);
 if (VAR_2 < 0)
  FUNC_1(VAR_1);
}
