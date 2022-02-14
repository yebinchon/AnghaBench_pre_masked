
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnfs_layout_hdr {int dummy; } ;
struct TYPE_2__ {int i_lock; } ;
struct nfs_inode {TYPE_1__ vfs_inode; struct pnfs_layout_hdr* layout; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pnfs_layout_hdr*) ;
 int FUNC_4 (struct pnfs_layout_hdr*,int ) ;
 int FUNC_5 (struct pnfs_layout_hdr*,int *) ;
 int FUNC_6 (struct pnfs_layout_hdr*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;

void
FUNC_9(struct nfs_inode *VAR_3)
{
 struct pnfs_layout_hdr *VAR_4;
 FUNC_0(VAR_2);

 FUNC_7(&VAR_3->vfs_inode.i_lock);
 VAR_4 = VAR_3->layout;
 if (VAR_4) {
  FUNC_3(VAR_4);
  FUNC_5(VAR_4, &VAR_2);
  FUNC_4(VAR_4, VAR_0);
  FUNC_4(VAR_4, VAR_1);
  FUNC_8(&VAR_3->vfs_inode.i_lock);
  FUNC_2(&VAR_2);
  FUNC_1(&VAR_3->vfs_inode, 0);
  FUNC_6(VAR_4);
 } else
  FUNC_8(&VAR_3->vfs_inode.i_lock);
}
