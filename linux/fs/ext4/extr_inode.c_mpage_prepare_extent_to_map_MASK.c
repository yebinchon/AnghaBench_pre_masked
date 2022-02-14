
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xa_mark_t ;
struct pagevec {struct page** pages; } ;
struct page {scalar_t__ index; struct address_space* mapping; } ;
struct TYPE_6__ {scalar_t__ m_len; } ;
struct mpage_da_data {scalar_t__ first_page; scalar_t__ last_page; scalar_t__ next_page; TYPE_3__ map; TYPE_2__* wbc; TYPE_1__* inode; } ;
struct buffer_head {int dummy; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ pgoff_t ;
typedef int ext4_lblk_t ;
struct TYPE_5__ {long nr_to_write; scalar_t__ sync_mode; scalar_t__ tagged_writepages; } ;
struct TYPE_4__ {int i_blkbits; struct address_space* i_mapping; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct mpage_da_data*,struct buffer_head*,struct buffer_head*,int) ;
 struct buffer_head* FUNC_6 (struct page*) ;
 int FUNC_7 (struct pagevec*) ;
 unsigned int FUNC_8 (struct pagevec*,struct address_space*,scalar_t__*,scalar_t__,int ) ;
 int FUNC_9 (struct pagevec*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;

__attribute__((used)) static int FUNC_13(struct mpage_da_data *VAR_5)
{
 struct address_space *VAR_6 = VAR_5->inode->i_mapping;
 struct pagevec VAR_7;
 unsigned int VAR_8;
 long VAR_9 = VAR_5->wbc->nr_to_write;
 pgoff_t VAR_10 = VAR_5->first_page;
 pgoff_t VAR_11 = VAR_5->last_page;
 xa_mark_t VAR_12;
 int VAR_13, VAR_14 = 0;
 int VAR_15 = VAR_5->inode->i_blkbits;
 ext4_lblk_t VAR_16;
 struct buffer_head *VAR_17;

 if (VAR_5->wbc->sync_mode == VAR_3 || VAR_5->wbc->tagged_writepages)
  VAR_12 = VAR_1;
 else
  VAR_12 = VAR_0;

 FUNC_7(&VAR_7);
 VAR_5->map.m_len = 0;
 VAR_5->next_page = VAR_10;
 while (VAR_10 <= VAR_11) {
  VAR_8 = FUNC_8(&VAR_7, VAR_6, &VAR_10, VAR_11,
    VAR_12);
  if (VAR_8 == 0)
   goto out;

  for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
   struct page *VAR_18 = VAR_7.pages[VAR_13];
   if (VAR_5->wbc->sync_mode == VAR_4 && VAR_9 <= 0)
    goto out;


   if (VAR_5->map.m_len > 0 && VAR_5->next_page != VAR_18->index)
    goto out;

   FUNC_4(VAR_18);







   if (!FUNC_1(VAR_18) ||
       (FUNC_2(VAR_18) &&
        (VAR_5->wbc->sync_mode == VAR_4)) ||
       FUNC_10(VAR_18->mapping != VAR_6)) {
    FUNC_11(VAR_18);
    continue;
   }

   FUNC_12(VAR_18);
   FUNC_0(FUNC_2(VAR_18));

   if (VAR_5->map.m_len == 0)
    VAR_5->first_page = VAR_18->index;
   VAR_5->next_page = VAR_18->index + 1;

   VAR_16 = ((ext4_lblk_t)VAR_18->index) <<
    (VAR_2 - VAR_15);
   VAR_17 = FUNC_6(VAR_18);
   VAR_14 = FUNC_5(VAR_5, VAR_17, VAR_17, VAR_16);
   if (VAR_14 <= 0)
    goto out;
   VAR_14 = 0;
   VAR_9--;
  }
  FUNC_9(&VAR_7);
  FUNC_3();
 }
 return 0;
out:
 FUNC_9(&VAR_7);
 return VAR_14;
}
