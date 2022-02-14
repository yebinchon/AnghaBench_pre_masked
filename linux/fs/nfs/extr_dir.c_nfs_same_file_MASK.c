
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_inode {scalar_t__ fileid; int fh; } ;
struct nfs_entry {TYPE_2__* fh; TYPE_1__* fattr; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {scalar_t__ size; } ;
struct TYPE_3__ {scalar_t__ fileid; } ;


 struct nfs_inode* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *) ;

__attribute__((used)) static
int FUNC_6(struct dentry *VAR_0, struct nfs_entry *VAR_1)
{
 struct inode *VAR_2;
 struct nfs_inode *VAR_3;

 if (FUNC_3(VAR_0))
  return 0;

 VAR_2 = FUNC_2(VAR_0);
 if (FUNC_4(VAR_2) || FUNC_1(VAR_2))
  return 0;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_1->fattr->fileid != VAR_3->fileid)
  return 0;
 if (VAR_1->fh->size && FUNC_5(VAR_1->fh, &VAR_3->fh) != 0)
  return 0;
 return 1;
}
