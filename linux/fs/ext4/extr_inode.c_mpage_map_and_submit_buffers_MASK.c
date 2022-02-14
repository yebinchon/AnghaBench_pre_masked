
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pagevec {struct page** pages; } ;
struct page {int dummy; } ;
struct TYPE_6__ {int m_lblk; int m_len; scalar_t__ m_flags; int m_pblk; } ;
struct TYPE_5__ {TYPE_1__* io_end; } ;
struct mpage_da_data {TYPE_3__ map; TYPE_2__ io_submit; struct inode* inode; } ;
struct inode {int i_blkbits; int i_mapping; } ;
struct buffer_head {scalar_t__ b_blocknr; struct buffer_head* b_this_page; } ;
typedef int sector_t ;
typedef int pgoff_t ;
typedef int ext4_lblk_t ;
struct TYPE_4__ {int size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct mpage_da_data*,struct buffer_head*,struct buffer_head*,int) ;
 int FUNC_4 (struct mpage_da_data*,struct page*) ;
 struct buffer_head* FUNC_5 (struct page*) ;
 int FUNC_6 (struct pagevec*) ;
 int FUNC_7 (struct pagevec*,int ,int*,int) ;
 int FUNC_8 (struct pagevec*) ;

__attribute__((used)) static int FUNC_9(struct mpage_da_data *VAR_2)
{
 struct pagevec VAR_3;
 int VAR_4, VAR_5;
 struct inode *VAR_6 = VAR_2->inode;
 struct buffer_head *VAR_7, *VAR_8;
 int VAR_9 = VAR_0 - VAR_6->i_blkbits;
 pgoff_t VAR_10, VAR_11;
 ext4_lblk_t VAR_12;
 sector_t VAR_13;
 int VAR_14;

 VAR_10 = VAR_2->map.m_lblk >> VAR_9;
 VAR_11 = (VAR_2->map.m_lblk + VAR_2->map.m_len - 1) >> VAR_9;
 VAR_12 = VAR_10 << VAR_9;
 VAR_13 = VAR_2->map.m_pblk;

 FUNC_6(&VAR_3);
 while (VAR_10 <= VAR_11) {
  VAR_4 = FUNC_7(&VAR_3, VAR_6->i_mapping,
      &VAR_10, VAR_11);
  if (VAR_4 == 0)
   break;
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
   struct page *VAR_15 = VAR_3.pages[VAR_5];

   VAR_8 = VAR_7 = FUNC_5(VAR_15);
   do {
    if (VAR_12 < VAR_2->map.m_lblk)
     continue;
    if (VAR_12 >= VAR_2->map.m_lblk + VAR_2->map.m_len) {




     VAR_2->map.m_len = 0;
     VAR_2->map.m_flags = 0;







     VAR_14 = FUNC_3(VAR_2, VAR_7,
              VAR_8, VAR_12);
     FUNC_8(&VAR_3);
     if (VAR_14 > 0)
      VAR_14 = 0;
     return VAR_14;
    }
    if (FUNC_0(VAR_8)) {
     FUNC_1(VAR_8);
     VAR_8->b_blocknr = VAR_13++;
    }
    FUNC_2(VAR_8);
   } while (VAR_12++, (VAR_8 = VAR_8->b_this_page) != VAR_7);






   VAR_2->io_submit.io_end->size += VAR_1;

   VAR_14 = FUNC_4(VAR_2, VAR_15);
   if (VAR_14 < 0) {
    FUNC_8(&VAR_3);
    return VAR_14;
   }
  }
  FUNC_8(&VAR_3);
 }

 VAR_2->map.m_len = 0;
 VAR_2->map.m_flags = 0;
 return 0;
}
