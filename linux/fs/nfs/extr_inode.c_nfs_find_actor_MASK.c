
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_find_desc {struct nfs_fattr* fattr; struct nfs_fh* fh; } ;
struct nfs_fh {int dummy; } ;
struct nfs_fattr {scalar_t__ fileid; int mode; } ;
struct inode {int i_mode; } ;


 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (int ,struct nfs_fh*) ;

__attribute__((used)) static int
FUNC_5(struct inode *VAR_1, void *VAR_2)
{
 struct nfs_find_desc *VAR_3 = (struct nfs_find_desc *)VAR_2;
 struct nfs_fh *VAR_4 = VAR_3->fh;
 struct nfs_fattr *VAR_5 = VAR_3->fattr;

 if (FUNC_1(VAR_1) != VAR_5->fileid)
  return 0;
 if ((VAR_0 & VAR_1->i_mode) != (VAR_0 & VAR_5->mode))
  return 0;
 if (FUNC_4(FUNC_0(VAR_1), VAR_4))
  return 0;
 if (FUNC_3(VAR_1) || FUNC_2(VAR_1))
  return 0;
 return 1;
}
