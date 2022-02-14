
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layoutdriver_type {void (* free_layout_hdr ) (struct pnfs_layout_hdr*) ;} ;
struct pnfs_layout_hdr {int plh_lc_cred; int plh_layouts; int plh_inode; } ;
struct nfs_server {struct nfs_client* nfs_client; struct pnfs_layoutdriver_type* pnfs_curr_ld; } ;
struct nfs_client {int cl_lock; } ;


 struct nfs_server* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 void FUNC_6 (struct pnfs_layout_hdr*) ;

__attribute__((used)) static void
FUNC_7(struct pnfs_layout_hdr *VAR_0)
{
 struct nfs_server *VAR_1 = FUNC_0(VAR_0->plh_inode);
 struct pnfs_layoutdriver_type *VAR_2 = VAR_1->pnfs_curr_ld;

 if (!FUNC_2(&VAR_0->plh_layouts)) {
  struct nfs_client *VAR_3 = VAR_1->nfs_client;

  FUNC_4(&VAR_3->cl_lock);
  FUNC_1(&VAR_0->plh_layouts);
  FUNC_5(&VAR_3->cl_lock);
 }
 FUNC_3(VAR_0->plh_lc_cred);
 return VAR_2->free_layout_hdr(VAR_0);
}
