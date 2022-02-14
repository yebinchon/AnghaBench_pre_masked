
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct nilfs_shadow_map {int frozen_data; } ;
struct inode {int i_blkbits; } ;
struct buffer_head {TYPE_1__* b_page; } ;
struct TYPE_4__ {struct nilfs_shadow_map* mi_shadow; } ;
struct TYPE_3__ {int index; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 struct page* FUNC_2 (int *,int ) ;
 struct buffer_head* FUNC_3 (struct page*,int) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;

struct buffer_head *
FUNC_7(struct inode *VAR_0, struct buffer_head *VAR_1)
{
 struct nilfs_shadow_map *VAR_2 = FUNC_0(VAR_0)->mi_shadow;
 struct buffer_head *VAR_3 = ((void*)0);
 struct page *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(&VAR_2->frozen_data, VAR_1->b_page->index);
 if (VAR_4) {
  if (FUNC_4(VAR_4)) {
   VAR_5 = FUNC_1(VAR_1) >> VAR_0->i_blkbits;
   VAR_3 = FUNC_3(VAR_4, VAR_5);
  }
  FUNC_6(VAR_4);
  FUNC_5(VAR_4);
 }
 return VAR_3;
}
