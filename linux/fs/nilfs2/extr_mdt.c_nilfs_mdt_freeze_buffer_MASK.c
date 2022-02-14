
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct nilfs_shadow_map {int frozen_buffers; int frozen_data; } ;
struct inode {int i_blkbits; } ;
struct buffer_head {int b_assoc_buffers; TYPE_1__* b_page; } ;
struct TYPE_4__ {struct nilfs_shadow_map* mi_shadow; } ;
struct TYPE_3__ {int index; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct page*,int,int ) ;
 struct page* FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (struct buffer_head*,struct buffer_head*) ;
 struct buffer_head* FUNC_9 (struct page*,int) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct buffer_head*) ;
 int FUNC_13 (struct page*) ;

int FUNC_14(struct inode *VAR_1, struct buffer_head *VAR_2)
{
 struct nilfs_shadow_map *VAR_3 = FUNC_0(VAR_1)->mi_shadow;
 struct buffer_head *VAR_4;
 struct page *VAR_5;
 int VAR_6 = VAR_1->i_blkbits;

 VAR_5 = FUNC_5(&VAR_3->frozen_data, VAR_2->b_page->index);
 if (!VAR_5)
  return -VAR_0;

 if (!FUNC_10(VAR_5))
  FUNC_4(VAR_5, 1 << VAR_6, 0);

 VAR_4 = FUNC_9(VAR_5, FUNC_1(VAR_2) >> VAR_6);

 if (!FUNC_3(VAR_4))
  FUNC_8(VAR_4, VAR_2);
 if (FUNC_7(&VAR_4->b_assoc_buffers)) {
  FUNC_6(&VAR_4->b_assoc_buffers,
         &VAR_3->frozen_buffers);
  FUNC_12(VAR_2);
 } else {
  FUNC_2(VAR_4);
 }

 FUNC_13(VAR_5);
 FUNC_11(VAR_5);
 return 0;
}
