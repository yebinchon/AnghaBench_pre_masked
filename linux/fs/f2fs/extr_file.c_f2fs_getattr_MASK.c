
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct path {int dentry; } ;
struct TYPE_3__ {int tv_nsec; int tv_sec; } ;
struct kstat {int attributes; int attributes_mask; int blocks; int size; TYPE_1__ btime; int result_mask; } ;
struct inode {int i_mode; } ;
struct TYPE_4__ {int tv_nsec; int tv_sec; } ;
struct f2fs_inode_info {unsigned int i_flags; TYPE_2__ i_crtime; int i_extra_isize; } ;
struct f2fs_inode {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct f2fs_inode*,int ,int ) ;
 struct f2fs_inode_info* FUNC_1 (struct inode*) ;
 unsigned int VAR_1 ;
 int FUNC_2 (struct inode*) ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (int ) ;
 struct inode* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct inode*,struct kstat*) ;
 int VAR_8 ;

int FUNC_11(const struct path *VAR_9, struct kstat *VAR_10,
   u32 VAR_11, unsigned int VAR_12)
{
 struct inode *VAR_13 = FUNC_5(VAR_9->dentry);
 struct f2fs_inode_info *VAR_14 = FUNC_1(VAR_13);
 struct f2fs_inode *VAR_15;
 unsigned int VAR_16;

 if (FUNC_6(VAR_13) &&
   FUNC_9(FUNC_2(VAR_13)) &&
   FUNC_0(VAR_15, VAR_14->i_extra_isize, VAR_8)) {
  VAR_10->result_mask |= VAR_7;
  VAR_10->btime.tv_sec = VAR_14->i_crtime.tv_sec;
  VAR_10->btime.tv_nsec = VAR_14->i_crtime.tv_nsec;
 }

 VAR_16 = VAR_14->i_flags;
 if (VAR_16 & VAR_0)
  VAR_10->attributes |= VAR_3;
 if (FUNC_3(VAR_13))
  VAR_10->attributes |= VAR_4;
 if (VAR_16 & VAR_1)
  VAR_10->attributes |= VAR_5;
 if (VAR_16 & VAR_2)
  VAR_10->attributes |= VAR_6;

 VAR_10->attributes_mask |= (VAR_3 |
      VAR_4 |
      VAR_5 |
      VAR_6);

 FUNC_10(VAR_13, VAR_10);


 if ((FUNC_4(VAR_13->i_mode) && FUNC_7(VAR_13)) ||
     FUNC_8(VAR_13))
  VAR_10->blocks += (VAR_10->size + 511) >> 9;

 return 0;
}
