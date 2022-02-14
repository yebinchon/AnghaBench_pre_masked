
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_inode_info {unsigned int i_flags; int i_projid; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 struct ext4_inode_info* FUNC_0 (struct inode*) ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, __u32 VAR_3,
          unsigned int VAR_4)
{
 struct ext4_inode_info *VAR_5 = FUNC_0(VAR_2);
 unsigned int VAR_6 = VAR_5->i_flags;

 if (!(VAR_6 & VAR_1) || !(VAR_4 & VAR_1))
  return 0;

 if ((VAR_6 & ~VAR_1) != (VAR_4 & ~VAR_1))
  return -VAR_0;
 if (FUNC_2(VAR_2->i_sb) &&
     FUNC_1(VAR_5->i_projid) != VAR_3)
  return -VAR_0;

 return 0;
}
