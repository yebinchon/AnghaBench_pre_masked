
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int ns_dat; } ;
struct page {int dummy; } ;
struct inode {scalar_t__ i_ino; TYPE_1__* i_sb; } ;
struct buffer_head {void* b_blocknr; int b_end_io; int b_bdev; struct page* b_page; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ sector_t ;
typedef void* __u64 ;
struct TYPE_2__ {int s_bdev; struct the_nilfs* s_fs_info; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct inode* FUNC_1 (struct address_space*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 int VAR_6 ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (int ,void*,scalar_t__*) ;
 struct buffer_head* FUNC_8 (struct inode*,struct address_space*,void*,int ) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (int,int,struct buffer_head*) ;
 int FUNC_12 (struct buffer_head*) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (struct page*) ;

int FUNC_16(struct address_space *VAR_7, __u64 VAR_8,
         sector_t VAR_9, int VAR_10, int VAR_11,
         struct buffer_head **VAR_12, sector_t *VAR_13)
{
 struct buffer_head *VAR_14;
 struct inode *VAR_15 = FUNC_1(VAR_7);
 struct page *VAR_16;
 int VAR_17;

 VAR_14 = FUNC_8(VAR_15, VAR_7, VAR_8, FUNC_0(VAR_0));
 if (FUNC_13(!VAR_14))
  return -VAR_3;

 VAR_17 = -VAR_2;
 VAR_16 = VAR_14->b_page;

 if (FUNC_4(VAR_14) || FUNC_3(VAR_14))
  goto found;

 if (VAR_9 == 0) {
  VAR_9 = VAR_8;
  if (VAR_15->i_ino != VAR_4) {
   struct the_nilfs *VAR_18 = VAR_15->i_sb->s_fs_info;


   VAR_17 = FUNC_7(VAR_18->ns_dat, VAR_8,
        &VAR_9);
   if (FUNC_13(VAR_17)) {
    FUNC_2(VAR_14);
    goto out_locked;
   }
  }
 }

 if (VAR_11 & VAR_5) {
  if (VAR_9 != *VAR_13 + 1 || !FUNC_12(VAR_14)) {
   VAR_17 = -VAR_1;
   FUNC_2(VAR_14);
   goto out_locked;
  }
 } else {
  FUNC_6(VAR_14);
 }
 if (FUNC_4(VAR_14)) {
  FUNC_14(VAR_14);
  VAR_17 = -VAR_2;
  goto found;
 }
 FUNC_10(VAR_14);
 VAR_14->b_bdev = VAR_15->i_sb->s_bdev;
 VAR_14->b_blocknr = VAR_9;
 VAR_14->b_end_io = VAR_6;
 FUNC_5(VAR_14);
 FUNC_11(VAR_10, VAR_11, VAR_14);
 VAR_14->b_blocknr = VAR_8;
 *VAR_13 = VAR_9;
 VAR_17 = 0;
found:
 *VAR_12 = VAR_14;

out_locked:
 FUNC_15(VAR_16);
 FUNC_9(VAR_16);
 return VAR_17;
}
