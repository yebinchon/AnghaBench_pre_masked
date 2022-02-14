
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsdfs_client {int cl_release; int cl_ref; } ;
struct inode {struct nfsdfs_client* i_private; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct inode *VAR_0)
{
 struct nfsdfs_client *VAR_1 = VAR_0->i_private;

 VAR_0->i_private = ((void*)0);
 FUNC_0(&VAR_1->cl_ref, VAR_1->cl_release);
}
