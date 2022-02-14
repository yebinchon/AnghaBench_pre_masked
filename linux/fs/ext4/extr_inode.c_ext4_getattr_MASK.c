
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct path {int dentry; } ;
struct TYPE_3__ {int tv_nsec; int tv_sec; } ;
struct kstat {int attributes; int attributes_mask; TYPE_1__ btime; int result_mask; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int tv_nsec; int tv_sec; } ;
struct ext4_inode_info {unsigned int i_flags; TYPE_2__ i_crtime; } ;
struct ext4_inode {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (struct ext4_inode*,struct ext4_inode_info*,int ) ;
 unsigned int VAR_3 ;
 struct ext4_inode_info* FUNC_1 (struct inode*) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct inode* FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,struct kstat*) ;
 int VAR_12 ;

int FUNC_4(const struct path *VAR_13, struct kstat *VAR_14,
   u32 VAR_15, unsigned int VAR_16)
{
 struct inode *VAR_17 = FUNC_2(VAR_13->dentry);
 struct ext4_inode *VAR_18;
 struct ext4_inode_info *VAR_19 = FUNC_1(VAR_17);
 unsigned int VAR_20;

 if (FUNC_0(VAR_18, VAR_19, VAR_12)) {
  VAR_14->result_mask |= VAR_11;
  VAR_14->btime.tv_sec = VAR_19->i_crtime.tv_sec;
  VAR_14->btime.tv_nsec = VAR_19->i_crtime.tv_nsec;
 }

 VAR_20 = VAR_19->i_flags & VAR_3;
 if (VAR_20 & VAR_0)
  VAR_14->attributes |= VAR_6;
 if (VAR_20 & VAR_1)
  VAR_14->attributes |= VAR_7;
 if (VAR_20 & VAR_2)
  VAR_14->attributes |= VAR_8;
 if (VAR_20 & VAR_4)
  VAR_14->attributes |= VAR_9;
 if (VAR_20 & VAR_5)
  VAR_14->attributes |= VAR_10;

 VAR_14->attributes_mask |= (VAR_6 |
      VAR_7 |
      VAR_8 |
      VAR_9 |
      VAR_10);

 FUNC_3(VAR_17, VAR_14);
 return 0;
}
