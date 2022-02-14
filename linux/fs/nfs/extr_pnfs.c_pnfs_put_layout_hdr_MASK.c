
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layout_hdr {int plh_segs; int plh_refcount; struct inode* plh_inode; } ;
struct inode {int i_lock; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pnfs_layout_hdr*) ;
 int FUNC_3 (struct pnfs_layout_hdr*) ;
 int FUNC_4 (struct pnfs_layout_hdr*) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct pnfs_layout_hdr *VAR_0)
{
 struct inode *VAR_1;

 if (!VAR_0)
  return;
 VAR_1 = VAR_0->plh_inode;
 FUNC_4(VAR_0);

 if (FUNC_5(&VAR_0->plh_refcount, &VAR_1->i_lock)) {
  if (!FUNC_1(&VAR_0->plh_segs))
   FUNC_0(1, "NFS: BUG unfreed layout segments.\n");
  FUNC_2(VAR_0);
  FUNC_6(&VAR_1->i_lock);
  FUNC_3(VAR_0);
 }
}
