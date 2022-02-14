
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {unsigned long s_blocksize; } ;
struct page {int dummy; } ;
struct inode {int i_blkbits; int i_size; struct super_block* i_sb; } ;
struct file {int dummy; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;
typedef int sector_t ;
typedef int pgoff_t ;
typedef int loff_t ;
typedef int handle_t ;
typedef int ext4_lblk_t ;
struct TYPE_2__ {scalar_t__ s_journal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*,int ,char*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct page*,int,int) ;
 int FUNC_5 (struct page*,int,int ) ;
 int FUNC_6 (struct inode*,struct inode*) ;
 int FUNC_7 (struct inode*,struct inode*) ;
 int FUNC_8 (struct inode*,int,struct buffer_head*,int ) ;
 int FUNC_9 (int *,struct inode*,int,unsigned int) ;
 int * FUNC_10 (struct inode*,int ,int) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct super_block*,int*) ;
 int FUNC_13 (int *,struct inode*,struct inode*,int,int,int,int,int*) ;
 int FUNC_14 (struct inode*) ;
 struct inode* FUNC_15 (struct file*) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 int FUNC_17 (struct inode*,int,int,int,int*) ;
 int FUNC_18 (struct inode*,struct inode*,int,int,struct page**) ;
 int FUNC_19 (struct page*,int,int) ;
 struct buffer_head* FUNC_20 (struct page*) ;
 int FUNC_21 (struct page*) ;
 scalar_t__ FUNC_22 (struct page*) ;
 int FUNC_23 (struct page*) ;
 int FUNC_24 (struct page*,int ) ;
 scalar_t__ FUNC_25 (int) ;
 int FUNC_26 (struct page*) ;

__attribute__((used)) static int
FUNC_27(struct file *VAR_6, struct inode *VAR_7,
       pgoff_t VAR_8, pgoff_t VAR_9,
       int VAR_10,
       int VAR_11, int VAR_12, int *VAR_13)
{
 struct inode *VAR_14 = FUNC_15(VAR_6);
 struct page *VAR_15[2] = {((void*)0), ((void*)0)};
 handle_t *VAR_16;
 ext4_lblk_t VAR_17, VAR_18;
 unsigned long VAR_19 = VAR_14->i_sb->s_blocksize;
 unsigned int VAR_20, VAR_21, VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26 = 0;
 int VAR_27 = 0;
 int VAR_28 = VAR_10 << VAR_14->i_blkbits;
 int VAR_29 = VAR_5 >> VAR_14->i_blkbits;
 struct super_block *VAR_30 = VAR_14->i_sb;
 struct buffer_head *VAR_31 = ((void*)0);





again:
 *VAR_13 = 0;
 VAR_25 = FUNC_14(VAR_14) * 2;
 VAR_16 = FUNC_10(VAR_14, VAR_3, VAR_25);
 if (FUNC_2(VAR_16)) {
  *VAR_13 = FUNC_3(VAR_16);
  return 0;
 }

 VAR_17 = VAR_8 * VAR_29 +
  VAR_10;

 VAR_18 = VAR_9 * VAR_29 +
  VAR_10;


 if ((VAR_17 + VAR_11 - 1) ==
     ((VAR_14->i_size - 1) >> VAR_14->i_blkbits)) {

  VAR_20 = VAR_14->i_size & (VAR_19 - 1);




  if (VAR_20 == 0)
   VAR_20 = VAR_19;

  VAR_21 = VAR_20 +
   ((VAR_11 - 1) << VAR_14->i_blkbits);
 } else
  VAR_21 = VAR_11 << VAR_14->i_blkbits;

 VAR_22 = VAR_21;

 *VAR_13 = FUNC_18(VAR_14, VAR_7, VAR_8,
         VAR_9, VAR_15);
 if (FUNC_25(*VAR_13 < 0))
  goto stop_journal;







 if (VAR_12) {
  FUNC_6(VAR_14, VAR_7);


  VAR_12 = FUNC_17(VAR_14, VAR_17,
      VAR_11, 1, VAR_13);
  if (*VAR_13)
   goto drop_data_sem;

  VAR_12 &= FUNC_17(VAR_7, VAR_18,
       VAR_11, 1, VAR_13);
  if (*VAR_13)
   goto drop_data_sem;

  if (!VAR_12) {
   FUNC_7(VAR_14, VAR_7);
   goto data_copy;
  }
  if ((FUNC_22(VAR_15[0]) &&
       !FUNC_24(VAR_15[0], 0)) ||
      (FUNC_22(VAR_15[1]) &&
       !FUNC_24(VAR_15[1], 0))) {
   *VAR_13 = -VAR_0;
   goto drop_data_sem;
  }
  VAR_27 = FUNC_13(VAR_16, VAR_14,
         VAR_7, VAR_17,
         VAR_18,
         VAR_11, 1, VAR_13);
 drop_data_sem:
  FUNC_7(VAR_14, VAR_7);
  goto unlock_pages;
 }
data_copy:
 *VAR_13 = FUNC_19(VAR_15[0], VAR_28, VAR_28 + VAR_22);
 if (*VAR_13)
  goto unlock_pages;



 if ((FUNC_22(VAR_15[0]) && !FUNC_24(VAR_15[0], 0)) ||
     (FUNC_22(VAR_15[1]) && !FUNC_24(VAR_15[1], 0))) {
  *VAR_13 = -VAR_0;
  goto unlock_pages;
 }
 FUNC_6(VAR_14, VAR_7);
 VAR_27 = FUNC_13(VAR_16, VAR_14, VAR_7,
            VAR_17, VAR_18,
        VAR_11, 1, VAR_13);
 FUNC_7(VAR_14, VAR_7);
 if (*VAR_13) {
  if (VAR_27) {
   VAR_11 = VAR_27;
   VAR_22 =
    VAR_11 << VAR_14->i_blkbits;
  } else
   goto unlock_pages;
 }


 if (!FUNC_21(VAR_15[0]))
  FUNC_5(VAR_15[0], 1 << VAR_14->i_blkbits, 0);
 VAR_31 = FUNC_20(VAR_15[0]);
 for (VAR_23 = 0; VAR_23 < VAR_10; VAR_23++)
  VAR_31 = VAR_31->b_this_page;
 for (VAR_23 = 0; VAR_23 < VAR_11; VAR_23++) {
  *VAR_13 = FUNC_8(VAR_14, VAR_17 + VAR_23, VAR_31, 0);
  if (*VAR_13 < 0)
   break;
  VAR_31 = VAR_31->b_this_page;
 }
 if (!*VAR_13)
  *VAR_13 = FUNC_4(VAR_15[0], VAR_28, VAR_28 + VAR_22);

 if (FUNC_25(*VAR_13 < 0))
  goto repair_branches;



 *VAR_13 = FUNC_9(VAR_16, VAR_14,
   (loff_t)VAR_8 << VAR_4, VAR_22);

unlock_pages:
 FUNC_26(VAR_15[0]);
 FUNC_23(VAR_15[0]);
 FUNC_26(VAR_15[1]);
 FUNC_23(VAR_15[1]);
stop_journal:
 FUNC_11(VAR_16);
 if (*VAR_13 == -VAR_2 &&
     FUNC_12(VAR_30, &VAR_26))
  goto again;


 if (*VAR_13 == -VAR_0 && VAR_26++ < 4 && FUNC_1(VAR_30)->s_journal &&
     FUNC_16(FUNC_1(VAR_30)->s_journal))
  goto again;
 return VAR_27;

repair_branches:





 FUNC_6(VAR_14, VAR_7);
 VAR_27 = FUNC_13(VAR_16, VAR_7, VAR_14,
            VAR_17, VAR_18,
        VAR_11, 0, &VAR_24);
 FUNC_7(VAR_14, VAR_7);
 if (VAR_27 != VAR_11) {
  FUNC_0(VAR_14, (sector_t)(VAR_17),
           "Unable to copy data block,"
           " data will be lost.");
  *VAR_13 = -VAR_1;
 }
 VAR_27 = 0;
 goto unlock_pages;
}
