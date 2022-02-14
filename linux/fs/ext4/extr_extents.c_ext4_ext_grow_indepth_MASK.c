
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct ext4_super_block {int s_first_data_block; } ;
struct ext4_extent_header {scalar_t__ eh_depth; void* eh_max; void* eh_entries; int eh_magic; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_13__ {int i_data; } ;
struct TYPE_12__ {struct ext4_super_block* s_es; } ;
struct TYPE_11__ {int ee_block; } ;
struct TYPE_10__ {int ei_block; } ;
struct TYPE_9__ {scalar_t__ s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__* FUNC_0 (struct inode*) ;
 unsigned int VAR_2 ;
 TYPE_6__* FUNC_1 (TYPE_1__*) ;
 TYPE_5__* FUNC_2 (struct ext4_extent_header*) ;
 TYPE_2__* FUNC_3 (struct ext4_extent_header*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct buffer_head*) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (struct inode*,int ) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (struct inode*,struct ext4_extent_header*) ;
 int FUNC_10 (int *,struct inode*,struct buffer_head*) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_13 (struct inode*) ;
 int FUNC_14 (int *,struct buffer_head*) ;
 int FUNC_15 (int *,struct inode*) ;
 scalar_t__ FUNC_16 (int *,struct inode*,scalar_t__,unsigned int,int *,int*) ;
 struct ext4_extent_header* FUNC_17 (struct buffer_head*) ;
 int FUNC_18 (char*,int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_19 (struct inode*) ;
 struct ext4_extent_header* FUNC_20 (struct inode*) ;
 int FUNC_21 (scalar_t__*,int) ;
 int FUNC_22 (void*) ;
 scalar_t__ FUNC_23 (int ) ;
 int FUNC_24 (struct buffer_head*) ;
 int FUNC_25 (scalar_t__,int ,size_t) ;
 int FUNC_26 (scalar_t__,int ,scalar_t__) ;
 struct buffer_head* FUNC_27 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_28 (struct buffer_head*) ;
 scalar_t__ FUNC_29 (int) ;
 int FUNC_30 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_31(handle_t *VAR_5, struct inode *VAR_6,
     unsigned int VAR_7)
{
 struct ext4_extent_header *VAR_8;
 struct buffer_head *VAR_9;
 ext4_fsblk_t VAR_10, VAR_11 = 0;
 struct ext4_super_block *VAR_12 = FUNC_1(VAR_6->i_sb)->s_es;
 int VAR_13 = 0;
 size_t VAR_14 = 0;


 if (FUNC_19(VAR_6))
  VAR_11 = FUNC_11(FUNC_3(FUNC_20(VAR_6)));
 if (VAR_11 > FUNC_23(VAR_12->s_first_data_block)) {
  VAR_7 |= VAR_2;
  VAR_11--;
 } else
  VAR_11 = FUNC_13(VAR_6);
 VAR_10 = FUNC_16(VAR_5, VAR_6, VAR_11, VAR_7,
     ((void*)0), &VAR_13);
 if (VAR_10 == 0)
  return VAR_13;

 VAR_9 = FUNC_27(VAR_6->i_sb, VAR_10, VAR_4 | VAR_3);
 if (FUNC_29(!VAR_9))
  return -VAR_0;
 FUNC_24(VAR_9);

 VAR_13 = FUNC_14(VAR_5, VAR_9);
 if (VAR_13) {
  FUNC_30(VAR_9);
  goto out;
 }

 VAR_14 = sizeof(FUNC_0(VAR_6)->i_data);

 FUNC_25(VAR_9->b_data, FUNC_0(VAR_6)->i_data, VAR_14);

 FUNC_26(VAR_9->b_data + VAR_14, 0, VAR_6->i_sb->s_blocksize - VAR_14);


 VAR_8 = FUNC_17(VAR_9);


 if (FUNC_19(VAR_6))
  VAR_8->eh_max = FUNC_5(FUNC_7(VAR_6, 0));
 else
  VAR_8->eh_max = FUNC_5(FUNC_6(VAR_6, 0));
 VAR_8->eh_magic = VAR_1;
 FUNC_9(VAR_6, VAR_8);
 FUNC_28(VAR_9);
 FUNC_30(VAR_9);

 VAR_13 = FUNC_10(VAR_5, VAR_6, VAR_9);
 if (VAR_13)
  goto out;


 VAR_8 = FUNC_20(VAR_6);
 VAR_8->eh_entries = FUNC_5(1);
 FUNC_12(FUNC_3(VAR_8), VAR_10);
 if (VAR_8->eh_depth == 0) {

  VAR_8->eh_max = FUNC_5(FUNC_8(VAR_6, 0));
  FUNC_3(VAR_8)->ei_block =
   FUNC_2(VAR_8)->ee_block;
 }
 FUNC_18("new root: num %d(%d), lblock %d, ptr %llu\n",
    FUNC_22(VAR_8->eh_entries), FUNC_22(VAR_8->eh_max),
    FUNC_23(FUNC_3(VAR_8)->ei_block),
    FUNC_11(FUNC_3(VAR_8)));

 FUNC_21(&VAR_8->eh_depth, 1);
 FUNC_15(VAR_5, VAR_6);
out:
 FUNC_4(VAR_9);

 return VAR_13;
}
