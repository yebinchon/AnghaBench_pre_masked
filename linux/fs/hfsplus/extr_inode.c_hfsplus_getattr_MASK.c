
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct path {int dentry; } ;
struct kstat {int attributes; int attributes_mask; } ;
struct inode {int i_flags; } ;
struct hfsplus_inode_info {int userflags; } ;


 int VAR_0 ;
 struct hfsplus_inode_info* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct inode* FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,struct kstat*) ;

int FUNC_3(const struct path *VAR_6, struct kstat *VAR_7,
      u32 VAR_8, unsigned int VAR_9)
{
 struct inode *VAR_10 = FUNC_1(VAR_6->dentry);
 struct hfsplus_inode_info *VAR_11 = FUNC_0(VAR_10);

 if (VAR_10->i_flags & VAR_4)
  VAR_7->attributes |= VAR_1;
 if (VAR_10->i_flags & VAR_5)
  VAR_7->attributes |= VAR_2;
 if (VAR_11->userflags & VAR_0)
  VAR_7->attributes |= VAR_3;

 VAR_7->attributes_mask |= VAR_1 | VAR_2 |
     VAR_3;

 FUNC_2(VAR_10, VAR_7);
 return 0;
}
