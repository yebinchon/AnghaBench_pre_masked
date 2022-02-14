
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uid_t ;
struct super_block {int dummy; } ;
struct TYPE_8__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_7__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_6__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct inode {int i_state; int i_mode; int i_size; scalar_t__ i_nlink; char* i_link; int * i_op; TYPE_1__* i_mapping; int i_sb; int * i_fop; void* i_generation; void* i_blocks; TYPE_4__ i_ctime; TYPE_3__ i_mtime; TYPE_2__ i_atime; } ;
struct ext2_inode_info {unsigned long i_block_group; scalar_t__* i_data; scalar_t__ i_dir_start_lookup; scalar_t__ i_state; void* i_dtime; void* i_dir_acl; void* i_file_acl; int i_frag_size; int i_frag_no; void* i_faddr; void* i_flags; int * i_block_alloc_info; } ;
struct ext2_inode {scalar_t__* i_block; scalar_t__ i_generation; scalar_t__ i_dir_acl; scalar_t__ i_size_high; scalar_t__ i_file_acl; int i_fsize; int i_frag; scalar_t__ i_faddr; scalar_t__ i_flags; scalar_t__ i_blocks; scalar_t__ i_dtime; scalar_t__ i_mtime; scalar_t__ i_ctime; scalar_t__ i_atime; scalar_t__ i_size; int i_links_count; int i_gid_high; int i_uid_high; int i_gid_low; int i_uid_low; int i_mode; } ;
struct buffer_head {int dummy; } ;
typedef int gid_t ;
typedef int __u64 ;
struct TYPE_5__ {int * a_ops; } ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 struct inode* FUNC_0 (long) ;
 long VAR_3 ;
 struct ext2_inode_info* FUNC_1 (struct inode*) ;
 unsigned long FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (struct super_block*) ;
 scalar_t__ FUNC_4 (struct ext2_inode*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 long FUNC_5 (struct ext2_inode*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct buffer_head*) ;
 int VAR_8 ;
 int FUNC_10 (int ,void*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (struct super_block*,char*,char*,void*) ;
 int VAR_11 ;
 struct ext2_inode* FUNC_12 (int ,unsigned long,struct buffer_head**) ;
 scalar_t__ FUNC_13 (struct inode*) ;
 int VAR_12 ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_16 (struct inode*,int) ;
 scalar_t__ FUNC_17 (struct inode*) ;
 int FUNC_18 (struct inode*,int) ;
 int FUNC_19 (struct inode*) ;
 struct inode* FUNC_20 (struct super_block*,unsigned long) ;
 int FUNC_21 (struct inode*,scalar_t__,int ) ;
 int FUNC_22 (struct inode*) ;
 int FUNC_23 (int ) ;
 void* FUNC_24 (scalar_t__) ;
 int FUNC_25 (scalar_t__*,int,int) ;
 int FUNC_26 (void*) ;
 int FUNC_27 (void*) ;
 int FUNC_28 (struct inode*,int) ;
 scalar_t__ FUNC_29 (int ,int ) ;
 int FUNC_30 (struct inode*) ;

struct inode *FUNC_31 (struct super_block *VAR_15, unsigned long VAR_16)
{
 struct ext2_inode_info *VAR_17;
 struct buffer_head * VAR_18 = ((void*)0);
 struct ext2_inode *VAR_19;
 struct inode *VAR_20;
 long VAR_21 = -VAR_1;
 int VAR_22;
 uid_t VAR_23;
 gid_t VAR_24;

 VAR_20 = FUNC_20(VAR_15, VAR_16);
 if (!VAR_20)
  return FUNC_0(-VAR_2);
 if (!(VAR_20->i_state & VAR_5))
  return VAR_20;

 VAR_17 = FUNC_1(VAR_20);
 VAR_17->i_block_alloc_info = ((void*)0);

 VAR_19 = FUNC_12(VAR_20->i_sb, VAR_16, &VAR_18);
 if (FUNC_4(VAR_19)) {
  VAR_21 = FUNC_5(VAR_19);
   goto bad_inode;
 }

 VAR_20->i_mode = FUNC_23(VAR_19->i_mode);
 VAR_23 = (uid_t)FUNC_23(VAR_19->i_uid_low);
 VAR_24 = (gid_t)FUNC_23(VAR_19->i_gid_low);
 if (!(FUNC_29 (VAR_20->i_sb, VAR_7))) {
  VAR_23 |= FUNC_23(VAR_19->i_uid_high) << 16;
  VAR_24 |= FUNC_23(VAR_19->i_gid_high) << 16;
 }
 FUNC_18(VAR_20, VAR_23);
 FUNC_16(VAR_20, VAR_24);
 FUNC_28(VAR_20, FUNC_23(VAR_19->i_links_count));
 VAR_20->i_size = FUNC_24(VAR_19->i_size);
 VAR_20->i_atime.tv_sec = (signed)FUNC_24(VAR_19->i_atime);
 VAR_20->i_ctime.tv_sec = (signed)FUNC_24(VAR_19->i_ctime);
 VAR_20->i_mtime.tv_sec = (signed)FUNC_24(VAR_19->i_mtime);
 VAR_20->i_atime.tv_nsec = VAR_20->i_mtime.tv_nsec = VAR_20->i_ctime.tv_nsec = 0;
 VAR_17->i_dtime = FUNC_24(VAR_19->i_dtime);





 if (VAR_20->i_nlink == 0 && (VAR_20->i_mode == 0 || VAR_17->i_dtime)) {

  VAR_21 = -VAR_3;
  goto bad_inode;
 }
 VAR_20->i_blocks = FUNC_24(VAR_19->i_blocks);
 VAR_17->i_flags = FUNC_24(VAR_19->i_flags);
 FUNC_15(VAR_20);
 VAR_17->i_faddr = FUNC_24(VAR_19->i_faddr);
 VAR_17->i_frag_no = VAR_19->i_frag;
 VAR_17->i_frag_size = VAR_19->i_fsize;
 VAR_17->i_file_acl = FUNC_24(VAR_19->i_file_acl);
 VAR_17->i_dir_acl = 0;

 if (VAR_17->i_file_acl &&
     !FUNC_10(FUNC_3(VAR_15), VAR_17->i_file_acl, 1)) {
  FUNC_11(VAR_15, "ext2_iget", "bad extended attribute block %u",
      VAR_17->i_file_acl);
  VAR_21 = -VAR_0;
  goto bad_inode;
 }

 if (FUNC_8(VAR_20->i_mode))
  VAR_20->i_size |= ((__u64)FUNC_24(VAR_19->i_size_high)) << 32;
 else
  VAR_17->i_dir_acl = FUNC_24(VAR_19->i_dir_acl);
 if (FUNC_17(VAR_20) < 0) {
  VAR_21 = -VAR_0;
  goto bad_inode;
 }
 VAR_17->i_dtime = 0;
 VAR_20->i_generation = FUNC_24(VAR_19->i_generation);
 VAR_17->i_state = 0;
 VAR_17->i_block_group = (VAR_16 - 1) / FUNC_2(VAR_20->i_sb);
 VAR_17->i_dir_start_lookup = 0;





 for (VAR_22 = 0; VAR_22 < VAR_4; VAR_22++)
  VAR_17->i_data[VAR_22] = VAR_19->i_block[VAR_22];

 if (FUNC_8(VAR_20->i_mode)) {
  FUNC_14(VAR_20);
 } else if (FUNC_6(VAR_20->i_mode)) {
  VAR_20->i_op = &VAR_9;
  VAR_20->i_fop = &VAR_10;
  if (FUNC_29(VAR_20->i_sb, VAR_6))
   VAR_20->i_mapping->a_ops = &VAR_12;
  else
   VAR_20->i_mapping->a_ops = &VAR_8;
 } else if (FUNC_7(VAR_20->i_mode)) {
  if (FUNC_13(VAR_20)) {
   VAR_20->i_link = (char *)VAR_17->i_data;
   VAR_20->i_op = &VAR_11;
   FUNC_25(VAR_17->i_data, VAR_20->i_size,
    sizeof(VAR_17->i_data) - 1);
  } else {
   VAR_20->i_op = &VAR_14;
   FUNC_22(VAR_20);
   if (FUNC_29(VAR_20->i_sb, VAR_6))
    VAR_20->i_mapping->a_ops = &VAR_12;
   else
    VAR_20->i_mapping->a_ops = &VAR_8;
  }
 } else {
  VAR_20->i_op = &VAR_13;
  if (VAR_19->i_block[0])
   FUNC_21(VAR_20, VAR_20->i_mode,
      FUNC_27(FUNC_24(VAR_19->i_block[0])));
  else
   FUNC_21(VAR_20, VAR_20->i_mode,
      FUNC_26(FUNC_24(VAR_19->i_block[1])));
 }
 FUNC_9 (VAR_18);
 FUNC_30(VAR_20);
 return VAR_20;

bad_inode:
 FUNC_9(VAR_18);
 FUNC_19(VAR_20);
 return FUNC_0(VAR_21);
}
