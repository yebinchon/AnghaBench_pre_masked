
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_server {int flags; } ;
struct nfs_open_context {int mode; int dentry; } ;
struct nfs_inode {int cache_validity; int open_files; } ;
struct inode {TYPE_1__* i_mapping; } ;
struct TYPE_4__ {scalar_t__ (* have_delegation ) (struct inode*,int ) ;} ;
struct TYPE_3__ {scalar_t__ nrpages; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfs_inode* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 struct nfs_server* FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nfs_server*,struct inode*) ;
 scalar_t__ FUNC_6 (struct inode*,int ) ;

void FUNC_7(struct nfs_open_context *VAR_4, int VAR_5)
{
 struct nfs_inode *VAR_6;
 struct inode *VAR_7;
 struct nfs_server *VAR_8;

 if (!(VAR_4->mode & VAR_1))
  return;
 if (!VAR_5)
  return;
 VAR_7 = FUNC_3(VAR_4->dentry);
 if (FUNC_1(VAR_7)->have_delegation(VAR_7, VAR_0))
  return;
 VAR_6 = FUNC_0(VAR_7);
 if (VAR_7->i_mapping->nrpages == 0)
  return;
 if (VAR_6->cache_validity & VAR_2)
  return;
 if (!FUNC_4(&VAR_6->open_files))
  return;
 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8->flags & VAR_3)
  return;
 FUNC_5(VAR_8, VAR_7);
}
