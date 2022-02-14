
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int i_mode; TYPE_1__* i_sb; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;
struct address_space {struct inode* host; } ;
typedef int loff_t ;
typedef int handle_t ;
typedef int ext4_lblk_t ;
typedef int ext4_fsblk_t ;
struct TYPE_2__ {unsigned int s_blocksize; int s_blocksize_bits; } ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct page*) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int FUNC_6 (struct buffer_head*) ;
 scalar_t__ FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct page*,unsigned int,int ) ;
 int FUNC_11 (struct inode*,int,struct buffer_head*,int ) ;
 int FUNC_12 (int *,struct inode*,struct buffer_head*) ;
 int FUNC_13 (int *,struct inode*,int,int) ;
 int FUNC_14 (int *,struct buffer_head*) ;
 scalar_t__ FUNC_15 (struct inode*) ;
 scalar_t__ FUNC_16 (struct inode*) ;
 struct page* FUNC_17 (struct address_space*,int,int ) ;
 int FUNC_18 (struct page*,unsigned int,int ) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (int ,int ,int,struct buffer_head**) ;
 int FUNC_21 (struct address_space*,int ) ;
 int FUNC_22 (struct buffer_head*) ;
 struct buffer_head* FUNC_23 (struct page*) ;
 int FUNC_24 (struct page*) ;
 int FUNC_25 (struct page*) ;
 int FUNC_26 (struct buffer_head*) ;
 int FUNC_27 (struct page*) ;
 int FUNC_28 (struct buffer_head*) ;
 int FUNC_29 (struct page*,unsigned int,int) ;

__attribute__((used)) static int FUNC_30(handle_t *VAR_6,
  struct address_space *VAR_7, loff_t VAR_8, loff_t VAR_9)
{
 ext4_fsblk_t VAR_10 = VAR_8 >> VAR_2;
 unsigned VAR_11 = VAR_8 & (VAR_3-1);
 unsigned VAR_12, VAR_13;
 ext4_lblk_t VAR_14;
 struct inode *VAR_15 = VAR_7->host;
 struct buffer_head *VAR_16;
 struct page *VAR_17;
 int VAR_18 = 0;

 VAR_17 = FUNC_17(VAR_7, VAR_8 >> VAR_2,
       FUNC_21(VAR_7, ~VAR_5));
 if (!VAR_17)
  return -VAR_1;

 VAR_12 = VAR_15->i_sb->s_blocksize;

 VAR_14 = VAR_10 << (VAR_2 - VAR_15->i_sb->s_blocksize_bits);

 if (!FUNC_24(VAR_17))
  FUNC_10(VAR_17, VAR_12, 0);


 VAR_16 = FUNC_23(VAR_17);
 VAR_13 = VAR_12;
 while (VAR_11 >= VAR_13) {
  VAR_16 = VAR_16->b_this_page;
  VAR_14++;
  VAR_13 += VAR_12;
 }
 if (FUNC_7(VAR_16)) {
  FUNC_0(VAR_16, "freed: skip");
  goto unlock;
 }
 if (!FUNC_8(VAR_16)) {
  FUNC_0(VAR_16, "unmapped");
  FUNC_11(VAR_15, VAR_14, VAR_16, 0);

  if (!FUNC_8(VAR_16)) {
   FUNC_0(VAR_16, "still unmapped");
   goto unlock;
  }
 }


 if (FUNC_3(VAR_17))
  FUNC_26(VAR_16);

 if (!FUNC_9(VAR_16)) {
  VAR_18 = -VAR_0;
  FUNC_20(VAR_4, 0, 1, &VAR_16);
  FUNC_28(VAR_16);

  if (!FUNC_9(VAR_16))
   goto unlock;
  if (FUNC_4(VAR_15->i_mode) && FUNC_2(VAR_15)) {

   FUNC_1(!FUNC_19(VAR_15));
   FUNC_5(FUNC_18(
     VAR_17, VAR_12, FUNC_6(VAR_16)));
  }
 }
 if (FUNC_15(VAR_15)) {
  FUNC_0(VAR_16, "get write access");
  VAR_18 = FUNC_14(VAR_6, VAR_16);
  if (VAR_18)
   goto unlock;
 }
 FUNC_29(VAR_17, VAR_11, VAR_9);
 FUNC_0(VAR_16, "zeroed end of block");

 if (FUNC_15(VAR_15)) {
  VAR_18 = FUNC_12(VAR_6, VAR_15, VAR_16);
 } else {
  VAR_18 = 0;
  FUNC_22(VAR_16);
  if (FUNC_16(VAR_15))
   VAR_18 = FUNC_13(VAR_6, VAR_15, VAR_8,
     VAR_9);
 }

unlock:
 FUNC_27(VAR_17);
 FUNC_25(VAR_17);
 return VAR_18;
}
