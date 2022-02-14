
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {struct nfs_client* nfs_client; } ;
struct nfs_inode {int dummy; } ;
struct nfs_delegation {int dummy; } ;
struct nfs_client {int cl_lock; } ;


 struct nfs_delegation* FUNC_0 (struct nfs_inode*,struct nfs_delegation*,struct nfs_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct nfs_delegation *FUNC_3(struct nfs_inode *VAR_0,
  struct nfs_delegation *VAR_1,
  struct nfs_server *VAR_2)
{
 struct nfs_client *VAR_3 = VAR_2->nfs_client;

 FUNC_1(&VAR_3->cl_lock);
 VAR_1 = FUNC_0(VAR_0, VAR_1, VAR_3);
 FUNC_2(&VAR_3->cl_lock);
 return VAR_1;
}
