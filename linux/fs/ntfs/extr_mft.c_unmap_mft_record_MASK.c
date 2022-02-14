
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_4__ {int count; int mrec_lock; int mft_no; struct page* page; } ;
typedef TYPE_1__ ntfs_inode ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(ntfs_inode *VAR_0)
{
 struct page *VAR_1 = VAR_0->page;

 FUNC_0(!VAR_1);

 FUNC_3("Entering for mft_no 0x%lx.", VAR_0->mft_no);

 FUNC_4(VAR_0);
 FUNC_2(&VAR_0->mrec_lock);
 FUNC_1(&VAR_0->count);






 return;
}
