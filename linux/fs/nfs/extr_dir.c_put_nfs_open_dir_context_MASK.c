
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_dir_context {int cred; int list; } ;
struct inode {int i_lock; } ;


 int FUNC_0 (struct nfs_open_dir_context*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_0, struct nfs_open_dir_context *VAR_1)
{
 FUNC_3(&VAR_0->i_lock);
 FUNC_1(&VAR_1->list);
 FUNC_4(&VAR_0->i_lock);
 FUNC_2(VAR_1->cred);
 FUNC_0(VAR_1);
}
