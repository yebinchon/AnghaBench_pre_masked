
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layout_hdr {int plh_flags; int plh_lc_cred; struct inode* plh_inode; int plh_bulk_destroy; int plh_return_segs; int plh_segs; int plh_layouts; int plh_refcount; } ;
struct nfs_open_context {int cred; } ;
struct inode {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct pnfs_layout_hdr* FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static struct pnfs_layout_hdr *
FUNC_4(struct inode *VAR_1,
        struct nfs_open_context *VAR_2,
        gfp_t VAR_3)
{
 struct pnfs_layout_hdr *VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_3);
 if (!VAR_4)
  return ((void*)0);
 FUNC_3(&VAR_4->plh_refcount, 1);
 FUNC_0(&VAR_4->plh_layouts);
 FUNC_0(&VAR_4->plh_segs);
 FUNC_0(&VAR_4->plh_return_segs);
 FUNC_0(&VAR_4->plh_bulk_destroy);
 VAR_4->plh_inode = VAR_1;
 VAR_4->plh_lc_cred = FUNC_1(VAR_2->cred);
 VAR_4->plh_flags |= 1 << VAR_0;
 return VAR_4;
}
