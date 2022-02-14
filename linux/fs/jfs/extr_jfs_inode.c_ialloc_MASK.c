
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct super_block {int dummy; } ;
struct jfs_inode_info {int mode2; scalar_t__ xtlid; scalar_t__ atltail; scalar_t__ atlhead; scalar_t__ blid; scalar_t__ bxflag; scalar_t__ btindex; scalar_t__ btorder; scalar_t__ acltype; scalar_t__ next_index; int ea; int acl; scalar_t__ cflag; int otime; int saved_gid; int saved_uid; } ;
struct TYPE_3__ {int tv_sec; } ;
struct inode {int i_mode; int i_flags; scalar_t__ i_generation; TYPE_1__ i_ctime; TYPE_1__ i_atime; TYPE_1__ i_mtime; scalar_t__ i_blocks; int i_gid; int i_uid; struct super_block* i_sb; } ;
typedef int dxd_t ;
struct TYPE_4__ {int gengen; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct jfs_inode_info* FUNC_1 (struct inode*) ;
 TYPE_2__* FUNC_2 (struct super_block*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_9 ;
 int FUNC_5 (struct inode*) ;
 TYPE_1__ FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,scalar_t__,struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*,struct inode*,int ) ;
 scalar_t__ FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (char*,struct inode*) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (int *,int ,int) ;
 struct inode* FUNC_19 (struct super_block*) ;

struct inode *FUNC_20(struct inode *VAR_10, umode_t VAR_11)
{
 struct super_block *VAR_12 = VAR_10->i_sb;
 struct inode *VAR_13;
 struct jfs_inode_info *VAR_14;
 int VAR_15;

 VAR_13 = FUNC_19(VAR_12);
 if (!VAR_13) {
  FUNC_17("ialloc: new_inode returned NULL!");
  return FUNC_0(-VAR_1);
 }

 VAR_14 = FUNC_1(VAR_13);

 VAR_15 = FUNC_7(VAR_10, FUNC_3(VAR_11), VAR_13);
 if (VAR_15) {
  FUNC_17("ialloc: diAlloc returned %d!", VAR_15);
  goto fail_put;
 }

 if (FUNC_13(VAR_13) < 0) {
  VAR_15 = -VAR_0;
  goto fail_put;
 }

 FUNC_12(VAR_13, VAR_10, VAR_11);




 VAR_14->saved_uid = VAR_13->i_uid;
 VAR_14->saved_gid = VAR_13->i_gid;




 VAR_15 = FUNC_11(VAR_13);
 if (VAR_15)
  goto fail_drop;
 VAR_15 = FUNC_9(VAR_13);
 if (VAR_15)
  goto fail_drop;


 VAR_14->mode2 = FUNC_1(VAR_10)->mode2 & VAR_7;

 if (FUNC_3(VAR_11)) {
  VAR_14->mode2 |= VAR_2;
  VAR_14->mode2 &= ~VAR_6;
 }
 else {
  VAR_14->mode2 |= VAR_3 | VAR_4;
  if (FUNC_4(VAR_11))
   VAR_14->mode2 &= ~(VAR_8|VAR_5);
 }
 VAR_14->mode2 |= VAR_13->i_mode;

 VAR_13->i_blocks = 0;
 VAR_13->i_mtime = VAR_13->i_atime = VAR_13->i_ctime = FUNC_6(VAR_13);
 VAR_14->otime = VAR_13->i_ctime.tv_sec;
 VAR_13->i_generation = FUNC_2(VAR_12)->gengen++;

 VAR_14->cflag = 0;


 FUNC_18(&VAR_14->acl, 0, sizeof(dxd_t));
 FUNC_18(&VAR_14->ea, 0, sizeof(dxd_t));
 VAR_14->next_index = 0;
 VAR_14->acltype = 0;
 VAR_14->btorder = 0;
 VAR_14->btindex = 0;
 VAR_14->bxflag = 0;
 VAR_14->blid = 0;
 VAR_14->atlhead = 0;
 VAR_14->atltail = 0;
 VAR_14->xtlid = 0;
 FUNC_16(VAR_13);

 FUNC_15("ialloc returns inode = 0x%p", VAR_13);

 return VAR_13;

fail_drop:
 FUNC_10(VAR_13);
 VAR_13->i_flags |= VAR_9;
 FUNC_5(VAR_13);
 FUNC_8(VAR_13);
 return FUNC_0(VAR_15);

fail_put:
 FUNC_14(VAR_13);
 return FUNC_0(VAR_15);
}
