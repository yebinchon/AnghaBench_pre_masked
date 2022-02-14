
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnfs_layoutdriver_type {int (* add_lseg ) (struct pnfs_layout_hdr*,struct pnfs_layout_segment*,struct list_head*) ;} ;
struct pnfs_layout_segment {int dummy; } ;
struct pnfs_layout_hdr {struct inode* plh_inode; } ;
struct list_head {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct pnfs_layoutdriver_type* pnfs_curr_ld; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct pnfs_layout_hdr*,struct pnfs_layout_segment*,int ,int ,struct list_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct pnfs_layout_hdr*,struct pnfs_layout_segment*,struct list_head*) ;

__attribute__((used)) static void
FUNC_3(struct pnfs_layout_hdr *VAR_2,
     struct pnfs_layout_segment *VAR_3,
     struct list_head *VAR_4)
{
 struct inode *VAR_5 = VAR_2->plh_inode;
 struct pnfs_layoutdriver_type *VAR_6 = FUNC_0(VAR_5)->pnfs_curr_ld;

 if (VAR_6->add_lseg != ((void*)0))
  VAR_6->add_lseg(VAR_2, VAR_3, VAR_4);
 else
  FUNC_1(VAR_2, VAR_3,
    VAR_1,
    VAR_0,
    VAR_4);
}
