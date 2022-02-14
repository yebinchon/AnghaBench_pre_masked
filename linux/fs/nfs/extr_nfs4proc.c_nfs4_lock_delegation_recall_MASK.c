
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int dummy; } ;
struct nfs4_state {int inode; } ;
struct file_lock {int dummy; } ;
typedef int nfs4_stateid ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfs_server* FUNC_0 (int ) ;
 int FUNC_1 (struct nfs4_state*,int ,struct file_lock*,int ) ;
 int FUNC_2 (struct nfs_server*,struct nfs4_state*,int const*,struct file_lock*,int) ;
 int FUNC_3 (struct nfs4_state*,struct file_lock*) ;

int FUNC_4(struct file_lock *VAR_2, struct nfs4_state *VAR_3, const nfs4_stateid *VAR_4)
{
 struct nfs_server *VAR_5 = FUNC_0(VAR_3->inode);
 int VAR_6;

 VAR_6 = FUNC_3(VAR_3, VAR_2);
 if (VAR_6 != 0)
  return VAR_6;
 VAR_6 = FUNC_1(VAR_3, VAR_0, VAR_2, VAR_1);
 return FUNC_2(VAR_5, VAR_3, VAR_4, VAR_2, VAR_6);
}
