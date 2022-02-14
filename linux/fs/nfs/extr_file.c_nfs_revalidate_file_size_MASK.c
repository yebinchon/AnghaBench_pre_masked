
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int dummy; } ;
struct inode {int dummy; } ;
struct file {int f_flags; } ;


 int VAR_0 ;
 struct nfs_server* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (struct nfs_server*,struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{
 struct nfs_server *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3->f_flags & VAR_1)
  goto force_reval;
 if (FUNC_2(VAR_2, VAR_0))
  goto force_reval;
 return 0;
force_reval:
 return FUNC_1(VAR_4, VAR_2);
}
