
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct path {int dentry; } ;
struct kstat {int attributes; int attributes_mask; } ;
struct inode {int dummy; } ;
struct ext2_inode_info {unsigned int i_flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct ext2_inode_info* FUNC_0 (struct inode*) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct inode* FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,struct kstat*) ;

int FUNC_3(const struct path *VAR_10, struct kstat *VAR_11,
  u32 VAR_12, unsigned int VAR_13)
{
 struct inode *VAR_14 = FUNC_1(VAR_10->dentry);
 struct ext2_inode_info *VAR_15 = FUNC_0(VAR_14);
 unsigned int VAR_16;

 VAR_16 = VAR_15->i_flags & VAR_2;
 if (VAR_16 & VAR_0)
  VAR_11->attributes |= VAR_5;
 if (VAR_16 & VAR_1)
  VAR_11->attributes |= VAR_6;
 if (VAR_16 & VAR_3)
  VAR_11->attributes |= VAR_8;
 if (VAR_16 & VAR_4)
  VAR_11->attributes |= VAR_9;
 VAR_11->attributes_mask |= (VAR_5 |
   VAR_6 |
   VAR_7 |
   VAR_8 |
   VAR_9);

 FUNC_2(VAR_14, VAR_11);
 return 0;
}
