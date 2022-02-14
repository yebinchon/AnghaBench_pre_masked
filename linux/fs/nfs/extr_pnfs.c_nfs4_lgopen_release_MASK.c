
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pnfs_layout_hdr {int dummy; } ;
struct TYPE_3__ {struct inode* inode; } ;
struct nfs4_layoutget {TYPE_1__ args; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {struct pnfs_layout_hdr* layout; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct pnfs_layout_hdr*) ;
 int FUNC_2 (struct pnfs_layout_hdr*) ;
 int FUNC_3 (struct nfs4_layoutget*) ;

void FUNC_4(struct nfs4_layoutget *VAR_0)
{
 if (VAR_0 != ((void*)0)) {
  struct inode *VAR_1 = VAR_0->args.inode;
  if (VAR_1) {
   struct pnfs_layout_hdr *VAR_2 = FUNC_0(VAR_1)->layout;
   FUNC_2(VAR_2);
   FUNC_1(VAR_2);
  }
  FUNC_3(VAR_0);
 }
}
