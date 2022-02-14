
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uid_t ;
struct super_block {int s_id; } ;
struct TYPE_8__ {int tv_sec; } ;
struct TYPE_7__ {int tv_sec; } ;
struct TYPE_6__ {int tv_sec; } ;
struct inode {int i_size; int i_blocks; int i_generation; int i_rdev; int i_mode; TYPE_3__ i_mtime; TYPE_2__ i_ctime; TYPE_1__ i_atime; int i_nlink; scalar_t__ i_ino; struct super_block* i_sb; } ;
struct ext2_inode_info {int i_state; int i_dtime; int i_flags; int i_faddr; int i_file_acl; int i_dir_acl; void** i_data; int i_frag_size; int i_frag_no; } ;
struct ext2_inode {void** i_block; void* i_generation; void* i_size_high; void* i_dir_acl; void* i_file_acl; int i_fsize; int i_frag; void* i_faddr; void* i_flags; void* i_dtime; void* i_blocks; void* i_mtime; void* i_ctime; void* i_atime; void* i_size; void* i_links_count; void* i_gid_high; void* i_uid_high; void* i_gid_low; void* i_uid_low; void* i_mode; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ ino_t ;
typedef int gid_t ;
struct TYPE_10__ {TYPE_4__* s_es; int s_lock; int s_inode_size; } ;
struct TYPE_9__ {void* s_rev_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct super_block*,int ) ;
 struct ext2_inode_info* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 TYPE_5__* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct ext2_inode*) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct buffer_head*) ;
 scalar_t__ FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct buffer_head*) ;
 void* FUNC_11 (int ) ;
 void* FUNC_12 (int) ;
 struct ext2_inode* FUNC_13 (struct super_block*,scalar_t__,struct buffer_head**) ;
 int FUNC_14 (struct super_block*,TYPE_4__*,int) ;
 int FUNC_15 (struct super_block*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (struct inode*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct buffer_head*) ;
 int FUNC_23 (struct ext2_inode*,int ,int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 scalar_t__ FUNC_26 (int ) ;
 int FUNC_27 (char*,int ,unsigned long) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (struct buffer_head*) ;
 int FUNC_31 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_32(struct inode *VAR_6, int VAR_7)
{
 struct ext2_inode_info *VAR_8 = FUNC_1(VAR_6);
 struct super_block *VAR_9 = VAR_6->i_sb;
 ino_t VAR_10 = VAR_6->i_ino;
 uid_t VAR_11 = FUNC_20(VAR_6);
 gid_t VAR_12 = FUNC_19(VAR_6);
 struct buffer_head * VAR_13;
 struct ext2_inode * VAR_14 = FUNC_13(VAR_9, VAR_10, &VAR_13);
 int VAR_15;
 int VAR_16 = 0;

 if (FUNC_4(VAR_14))
   return -VAR_0;



 if (VAR_8->i_state & VAR_4)
  FUNC_23(VAR_14, 0, FUNC_2(VAR_9)->s_inode_size);

 VAR_14->i_mode = FUNC_11(VAR_6->i_mode);
 if (!(FUNC_31(VAR_9, VAR_5))) {
  VAR_14->i_uid_low = FUNC_11(FUNC_21(VAR_11));
  VAR_14->i_gid_low = FUNC_11(FUNC_21(VAR_12));




  if (!VAR_8->i_dtime) {
   VAR_14->i_uid_high = FUNC_11(FUNC_18(VAR_11));
   VAR_14->i_gid_high = FUNC_11(FUNC_18(VAR_12));
  } else {
   VAR_14->i_uid_high = 0;
   VAR_14->i_gid_high = 0;
  }
 } else {
  VAR_14->i_uid_low = FUNC_11(FUNC_17(VAR_11));
  VAR_14->i_gid_low = FUNC_11(FUNC_16(VAR_12));
  VAR_14->i_uid_high = 0;
  VAR_14->i_gid_high = 0;
 }
 VAR_14->i_links_count = FUNC_11(VAR_6->i_nlink);
 VAR_14->i_size = FUNC_12(VAR_6->i_size);
 VAR_14->i_atime = FUNC_12(VAR_6->i_atime.tv_sec);
 VAR_14->i_ctime = FUNC_12(VAR_6->i_ctime.tv_sec);
 VAR_14->i_mtime = FUNC_12(VAR_6->i_mtime.tv_sec);

 VAR_14->i_blocks = FUNC_12(VAR_6->i_blocks);
 VAR_14->i_dtime = FUNC_12(VAR_8->i_dtime);
 VAR_14->i_flags = FUNC_12(VAR_8->i_flags);
 VAR_14->i_faddr = FUNC_12(VAR_8->i_faddr);
 VAR_14->i_frag = VAR_8->i_frag_no;
 VAR_14->i_fsize = VAR_8->i_frag_size;
 VAR_14->i_file_acl = FUNC_12(VAR_8->i_file_acl);
 if (!FUNC_7(VAR_6->i_mode))
  VAR_14->i_dir_acl = FUNC_12(VAR_8->i_dir_acl);
 else {
  VAR_14->i_size_high = FUNC_12(VAR_6->i_size >> 32);
  if (VAR_6->i_size > 0x7fffffffULL) {
   if (!FUNC_0(VAR_9,
     VAR_1) ||
       FUNC_2(VAR_9)->s_es->s_rev_level ==
     FUNC_12(VAR_2)) {



    FUNC_28(&FUNC_2(VAR_9)->s_lock);
    FUNC_15(VAR_9);
    FUNC_3(VAR_9,
     VAR_1);
    FUNC_29(&FUNC_2(VAR_9)->s_lock);
    FUNC_14(VAR_9, FUNC_2(VAR_9)->s_es, 1);
   }
  }
 }

 VAR_14->i_generation = FUNC_12(VAR_6->i_generation);
 if (FUNC_6(VAR_6->i_mode) || FUNC_5(VAR_6->i_mode)) {
  if (FUNC_26(VAR_6->i_rdev)) {
   VAR_14->i_block[0] =
    FUNC_12(FUNC_25(VAR_6->i_rdev));
   VAR_14->i_block[1] = 0;
  } else {
   VAR_14->i_block[0] = 0;
   VAR_14->i_block[1] =
    FUNC_12(FUNC_24(VAR_6->i_rdev));
   VAR_14->i_block[2] = 0;
  }
 } else for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++)
  VAR_14->i_block[VAR_15] = VAR_8->i_data[VAR_15];
 FUNC_22(VAR_13);
 if (VAR_7) {
  FUNC_30(VAR_13);
  if (FUNC_9(VAR_13) && !FUNC_10(VAR_13)) {
   FUNC_27 ("IO error syncing ext2 inode [%s:%08lx]\n",
    VAR_9->s_id, (unsigned long) VAR_10);
   VAR_16 = -VAR_0;
  }
 }
 VAR_8->i_state &= ~VAR_4;
 FUNC_8 (VAR_13);
 return VAR_16;
}
