
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
typedef int u32 ;
struct super_block {int s_id; } ;
struct qnx6_sb_info {TYPE_1__* inodes; } ;
struct qnx6_inode_info {int di_filelevels; int di_block_ptr; } ;
struct qnx6_inode_entry {int di_filelevels; int di_block_ptr; int di_ctime; int di_atime; int di_mtime; int di_size; int di_gid; int di_uid; int di_mode; } ;
struct page {int dummy; } ;
struct TYPE_9__ {scalar_t__ tv_nsec; void* tv_sec; } ;
struct TYPE_8__ {scalar_t__ tv_nsec; void* tv_sec; } ;
struct TYPE_7__ {scalar_t__ tv_nsec; void* tv_sec; } ;
struct inode {int i_state; int i_size; int i_blocks; scalar_t__ i_mode; TYPE_5__* i_mapping; int * i_op; int * i_fop; TYPE_4__ i_ctime; TYPE_3__ i_atime; TYPE_2__ i_mtime; } ;
struct address_space {int dummy; } ;
typedef int gid_t ;
struct TYPE_10__ {int * a_ops; } ;
struct TYPE_6__ {struct address_space* i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (struct page*) ;
 struct inode* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct qnx6_inode_info* FUNC_3 (struct inode*) ;
 unsigned int VAR_5 ;
 struct qnx6_sb_info* FUNC_4 (struct super_block*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (struct qnx6_sb_info*,int ) ;
 void* FUNC_9 (struct qnx6_sb_info*,int ) ;
 int FUNC_10 (struct qnx6_sb_info*,int ) ;
 int VAR_6 ;
 int FUNC_11 (struct inode*,int ) ;
 int FUNC_12 (struct inode*,int ) ;
 int FUNC_13 (struct inode*) ;
 struct inode* FUNC_14 (struct super_block*,unsigned int) ;
 int FUNC_15 (struct inode*,scalar_t__,int ) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (int *,int *,int) ;
 scalar_t__ FUNC_19 (struct page*) ;
 int VAR_7 ;
 int FUNC_20 (char*,int ,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_21 (struct page*) ;
 struct page* FUNC_22 (struct address_space*,int,int *) ;
 int FUNC_23 (struct inode*) ;

struct inode *FUNC_24(struct super_block *VAR_11, unsigned VAR_12)
{
 struct qnx6_sb_info *VAR_13 = FUNC_4(VAR_11);
 struct qnx6_inode_entry *VAR_14;
 struct inode *VAR_15;
 struct qnx6_inode_info *VAR_16;
 struct address_space *VAR_17;
 struct page *VAR_18;
 u32 VAR_19, VAR_20;

 VAR_15 = FUNC_14(VAR_11, VAR_12);
 if (!VAR_15)
  return FUNC_1(-VAR_1);
 if (!(VAR_15->i_state & VAR_2))
  return VAR_15;

 VAR_16 = FUNC_3(VAR_15);

 VAR_15->i_mode = 0;

 if (VAR_12 == 0) {
  FUNC_20("bad inode number on dev %s: %u is out of range\n",
         VAR_11->s_id, VAR_12);
  FUNC_13(VAR_15);
  return FUNC_1(-VAR_0);
 }
 VAR_19 = (VAR_12 - 1) >> (VAR_4 - VAR_5);
 VAR_20 = (VAR_12 - 1) & (~VAR_3 >> VAR_5);
 VAR_17 = VAR_13->inodes->i_mapping;
 VAR_18 = FUNC_22(VAR_17, VAR_19, ((void*)0));
 if (FUNC_2(VAR_18)) {
  FUNC_20("major problem: unable to read inode from dev %s\n",
         VAR_11->s_id);
  FUNC_13(VAR_15);
  return FUNC_0(VAR_18);
 }
 FUNC_17(VAR_18);
 VAR_14 = ((struct qnx6_inode_entry *)FUNC_19(VAR_18)) + VAR_20;

 VAR_15->i_mode = FUNC_8(VAR_13, VAR_14->di_mode);
 FUNC_12(VAR_15, (uid_t)FUNC_9(VAR_13, VAR_14->di_uid));
 FUNC_11(VAR_15, (gid_t)FUNC_9(VAR_13, VAR_14->di_gid));
 VAR_15->i_size = FUNC_10(VAR_13, VAR_14->di_size);
 VAR_15->i_mtime.tv_sec = FUNC_9(VAR_13, VAR_14->di_mtime);
 VAR_15->i_mtime.tv_nsec = 0;
 VAR_15->i_atime.tv_sec = FUNC_9(VAR_13, VAR_14->di_atime);
 VAR_15->i_atime.tv_nsec = 0;
 VAR_15->i_ctime.tv_sec = FUNC_9(VAR_13, VAR_14->di_ctime);
 VAR_15->i_ctime.tv_nsec = 0;


 VAR_15->i_blocks = (VAR_15->i_size + 511) >> 9;

 FUNC_18(&VAR_16->di_block_ptr, &VAR_14->di_block_ptr,
    sizeof(VAR_14->di_block_ptr));
 VAR_16->di_filelevels = VAR_14->di_filelevels;

 if (FUNC_7(VAR_15->i_mode)) {
  VAR_15->i_fop = &VAR_6;
  VAR_15->i_mapping->a_ops = &VAR_8;
 } else if (FUNC_5(VAR_15->i_mode)) {
  VAR_15->i_op = &VAR_9;
  VAR_15->i_fop = &VAR_10;
  VAR_15->i_mapping->a_ops = &VAR_8;
 } else if (FUNC_6(VAR_15->i_mode)) {
  VAR_15->i_op = &VAR_7;
  FUNC_16(VAR_15);
  VAR_15->i_mapping->a_ops = &VAR_8;
 } else
  FUNC_15(VAR_15, VAR_15->i_mode, 0);
 FUNC_21(VAR_18);
 FUNC_23(VAR_15);
 return VAR_15;
}
