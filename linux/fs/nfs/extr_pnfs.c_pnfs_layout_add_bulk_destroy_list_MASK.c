
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnfs_layout_hdr {int plh_bulk_destroy; } ;
struct list_head {int dummy; } ;
struct inode {int i_lock; } ;
struct TYPE_2__ {struct pnfs_layout_hdr* layout; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *,struct list_head*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct pnfs_layout_hdr*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bool
FUNC_6(struct inode *VAR_0,
  struct list_head *VAR_1)
{
 struct pnfs_layout_hdr *VAR_2;
 bool VAR_3 = 0;

 FUNC_4(&VAR_0->i_lock);
 VAR_2 = FUNC_0(VAR_0)->layout;
 if (VAR_2 != ((void*)0) && FUNC_2(&VAR_2->plh_bulk_destroy)) {
  FUNC_3(VAR_2);
  FUNC_1(&VAR_2->plh_bulk_destroy, VAR_1);
  VAR_3 = 1;
 }
 FUNC_5(&VAR_0->i_lock);
 return VAR_3;
}
