
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int dummy; } ;
struct nfs4_state {int flags; int inode; } ;
struct nfs4_exception {scalar_t__ retry; int inode; } ;
struct file_lock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nfs_server* FUNC_0 (int ) ;
 int FUNC_1 (struct nfs4_state*,int ,struct file_lock*,int ) ;
 int FUNC_2 (struct nfs_server*,int,struct nfs4_exception*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct nfs4_state *VAR_4, struct file_lock *VAR_5)
{
 struct nfs_server *VAR_6 = FUNC_0(VAR_4->inode);
 struct nfs4_exception VAR_7 = {
  .inode = VAR_4->inode,
 };
 int VAR_8;

 do {

  if (FUNC_3(VAR_2, &VAR_4->flags) != 0)
   return 0;
  VAR_8 = FUNC_1(VAR_4, VAR_0, VAR_5, VAR_3);
  if (VAR_8 != -VAR_1)
   break;
  FUNC_2(VAR_6, VAR_8, &VAR_7);
 } while (VAR_7.retry);
 return VAR_8;
}
