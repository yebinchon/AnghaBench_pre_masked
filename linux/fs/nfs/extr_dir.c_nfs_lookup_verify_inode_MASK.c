
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int caps; int flags; } ;
struct inode {int i_mode; scalar_t__ i_nlink; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct nfs_server* FUNC_1 (struct inode*) ;

 int VAR_7 ;

 int FUNC_2 (struct nfs_server*,struct inode*) ;

__attribute__((used)) static
int FUNC_3(struct inode *VAR_8, unsigned int VAR_9)
{
 struct nfs_server *VAR_10 = FUNC_1(VAR_8);
 int VAR_11;

 if (FUNC_0(VAR_8))
  return 0;

 if (VAR_9 & VAR_2) {
  switch (VAR_8->i_mode & VAR_7) {
  case 128:

   if (VAR_10->caps & VAR_5)
    goto out;

  case 129:
   if (VAR_10->flags & VAR_6)
    break;

   goto out_force;
  }
 }


 if (VAR_9 & VAR_4)
  goto out_force;
out:
 return (VAR_8->i_nlink == 0) ? -VAR_1 : 0;
out_force:
 if (VAR_9 & VAR_3)
  return -VAR_0;
 VAR_11 = FUNC_2(VAR_10, VAR_8);
 if (VAR_11 != 0)
  return VAR_11;
 goto out;
}
