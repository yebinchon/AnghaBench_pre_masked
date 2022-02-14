
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pnfs_layout_segment {TYPE_1__* pls_layout; } ;
struct inode {int dummy; } ;
struct TYPE_6__ {TYPE_2__* pnfs_curr_ld; } ;
struct TYPE_5__ {int (* free_lseg ) (struct pnfs_layout_segment*) ;} ;
struct TYPE_4__ {struct inode* plh_inode; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct pnfs_layout_segment*) ;

__attribute__((used)) static void FUNC_2(struct pnfs_layout_segment *VAR_0)
{
 if (VAR_0 != ((void*)0)) {
  struct inode *VAR_1 = VAR_0->pls_layout->plh_inode;
  FUNC_0(VAR_1)->pnfs_curr_ld->free_lseg(VAR_0);
 }
}
