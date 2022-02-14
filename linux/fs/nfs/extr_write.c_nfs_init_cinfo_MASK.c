
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_direct_req {int dummy; } ;
struct nfs_commit_info {int dummy; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct nfs_commit_info*,struct nfs_direct_req*) ;
 int FUNC_1 (struct nfs_commit_info*,struct inode*) ;

void FUNC_2(struct nfs_commit_info *VAR_0,
      struct inode *VAR_1,
      struct nfs_direct_req *VAR_2)
{
 if (VAR_2)
  FUNC_0(VAR_0, VAR_2);
 else
  FUNC_1(VAR_0, VAR_1);
}
