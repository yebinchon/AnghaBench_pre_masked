
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ sync_mode; scalar_t__ nr_to_write; } ;
struct pagevec {struct page** pages; } ;
struct page {scalar_t__ index; struct address_space* mapping; } ;
struct inode {int i_blkbits; } ;
struct gfs2_sbd {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ pgoff_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct page*,struct writeback_control*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct gfs2_sbd*,unsigned int,unsigned int) ;
 int FUNC_7 (struct gfs2_sbd*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct writeback_control*,int ) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;

__attribute__((used)) static int FUNC_14(struct address_space *VAR_3,
        struct writeback_control *VAR_4,
        struct pagevec *VAR_5,
        int VAR_6,
        pgoff_t *VAR_7)
{
 struct inode *VAR_8 = VAR_3->host;
 struct gfs2_sbd *VAR_9 = FUNC_1(VAR_8);
 unsigned VAR_10 = VAR_6 * (VAR_1 >> VAR_8->i_blkbits);
 int VAR_11;
 int VAR_12;

 VAR_12 = FUNC_6(VAR_9, VAR_10, VAR_10);
 if (VAR_12 < 0)
  return VAR_12;

 for(VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  struct page *VAR_13 = VAR_5->pages[VAR_11];

  *VAR_7 = VAR_13->index;

  FUNC_9(VAR_13);

  if (FUNC_11(VAR_13->mapping != VAR_3)) {
continue_unlock:
   FUNC_12(VAR_13);
   continue;
  }

  if (!FUNC_2(VAR_13)) {

   goto continue_unlock;
  }

  if (FUNC_3(VAR_13)) {
   if (VAR_4->sync_mode != VAR_2)
    FUNC_13(VAR_13);
   else
    goto continue_unlock;
  }

  FUNC_0(FUNC_3(VAR_13));
  if (!FUNC_5(VAR_13))
   goto continue_unlock;

  FUNC_10(VAR_4, FUNC_8(VAR_8));

  VAR_12 = FUNC_4(VAR_13, VAR_4);
  if (FUNC_11(VAR_12)) {
   if (VAR_12 == VAR_0) {
    FUNC_12(VAR_13);
    VAR_12 = 0;
   } else {
    *VAR_7 = VAR_13->index + 1;
    VAR_12 = 1;
    break;
   }
  }







  if (--VAR_4->nr_to_write <= 0 && VAR_4->sync_mode == VAR_2) {
   VAR_12 = 1;
   break;
  }

 }
 FUNC_7(VAR_9);
 return VAR_12;
}
