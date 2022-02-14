
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pagevec {scalar_t__ nr; struct page** pages; } ;
struct page {int index; } ;
struct inode {unsigned int i_blkbits; TYPE_1__* i_mapping; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;
typedef unsigned int sector_t ;
typedef int pgoff_t ;
struct TYPE_2__ {scalar_t__ nrpages; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (struct buffer_head*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int ,struct page**) ;
 int FUNC_3 (struct page*) ;
 struct buffer_head* FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 unsigned int FUNC_6 (struct pagevec*) ;
 int FUNC_7 (struct pagevec*) ;
 int FUNC_8 (struct pagevec*) ;
 int FUNC_9 (struct page*) ;

unsigned long FUNC_10(struct inode *VAR_2,
         sector_t VAR_3,
         sector_t *VAR_4)
{
 unsigned int VAR_5;
 pgoff_t VAR_6;
 unsigned int VAR_7;
 unsigned long VAR_8 = 0;
 sector_t VAR_9;
 struct pagevec VAR_10;
 struct page *VAR_11;

 if (VAR_2->i_mapping->nrpages == 0)
  return 0;

 VAR_6 = VAR_3 >> (VAR_1 - VAR_2->i_blkbits);
 VAR_7 = 1U << (VAR_1 - VAR_2->i_blkbits);

 FUNC_7(&VAR_10);

repeat:
 VAR_10.nr = FUNC_2(VAR_2->i_mapping, VAR_6, VAR_0,
     VAR_10.pages);
 if (VAR_10.nr == 0)
  return VAR_8;

 if (VAR_8 > 0 && VAR_10.pages[0]->index > VAR_6)
  goto out;

 VAR_9 = VAR_10.pages[0]->index << (VAR_1 - VAR_2->i_blkbits);
 VAR_5 = 0;
 do {
  VAR_11 = VAR_10.pages[VAR_5];

  FUNC_3(VAR_11);
  if (FUNC_5(VAR_11)) {
   struct buffer_head *VAR_12, *VAR_13;

   VAR_12 = VAR_13 = FUNC_4(VAR_11);
   do {
    if (VAR_9 < VAR_3)
     continue;
    if (FUNC_0(VAR_12)) {
     if (VAR_8 == 0)
      *VAR_4 = VAR_9;
     VAR_8++;
    } else if (VAR_8 > 0) {
     goto out_locked;
    }
   } while (++VAR_9, VAR_12 = VAR_12->b_this_page, VAR_12 != VAR_13);
  } else {
   if (VAR_8 > 0)
    goto out_locked;

   VAR_9 += VAR_7;
  }
  FUNC_9(VAR_11);

 } while (++VAR_5 < FUNC_6(&VAR_10));

 VAR_6 = VAR_11->index + 1;
 FUNC_8(&VAR_10);
 FUNC_1();
 goto repeat;

out_locked:
 FUNC_9(VAR_11);
out:
 FUNC_8(&VAR_10);
 return VAR_8;
}
