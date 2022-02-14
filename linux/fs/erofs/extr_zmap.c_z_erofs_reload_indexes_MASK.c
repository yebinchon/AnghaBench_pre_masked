
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct z_erofs_maprecorder {int * kaddr; struct erofs_map_blocks* map; TYPE_1__* inode; } ;
struct super_block {int dummy; } ;
struct page {int index; } ;
struct erofs_map_blocks {struct page* mpage; } ;
typedef int erofs_blk_t ;
struct TYPE_2__ {struct super_block* i_sb; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (struct super_block* const,int ) ;
 void* FUNC_3 (struct page*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;

__attribute__((used)) static int FUNC_7(struct z_erofs_maprecorder *VAR_0,
      erofs_blk_t VAR_1)
{
 struct super_block *const VAR_2 = VAR_0->inode->i_sb;
 struct erofs_map_blocks *const VAR_3 = VAR_0->map;
 struct page *VAR_4 = VAR_3->mpage;

 if (VAR_4) {
  if (VAR_4->index == VAR_1) {
   if (!VAR_0->kaddr)
    VAR_0->kaddr = FUNC_3(VAR_4);
   return 0;
  }

  if (VAR_0->kaddr) {
   FUNC_4(VAR_0->kaddr);
   VAR_0->kaddr = ((void*)0);
  }
  FUNC_5(VAR_4);
 }

 VAR_4 = FUNC_2(VAR_2, VAR_1);
 if (FUNC_0(VAR_4)) {
  VAR_3->mpage = ((void*)0);
  return FUNC_1(VAR_4);
 }
 VAR_0->kaddr = FUNC_3(VAR_4);
 FUNC_6(VAR_4);
 VAR_3->mpage = VAR_4;
 return 0;
}
