
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct super_block {int dummy; } ;
struct kernel_lb_addr {int partitionReferenceNum; scalar_t__ logicalBlockNum; } ;
struct inode {scalar_t__ i_generation; } ;
struct dentry {int dummy; } ;
typedef scalar_t__ __u32 ;


 struct dentry* FUNC_0 (struct inode*) ;
 struct dentry* FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 struct dentry* FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (struct super_block*,struct kernel_lb_addr*) ;

__attribute__((used)) static struct dentry *FUNC_6(struct super_block *VAR_1, u32 VAR_2,
     u16 VAR_3, __u32 VAR_4)
{
 struct inode *VAR_5;
 struct kernel_lb_addr VAR_6;

 if (VAR_2 == 0)
  return FUNC_1(-VAR_0);

 VAR_6.logicalBlockNum = VAR_2;
 VAR_6.partitionReferenceNum = VAR_3;
 VAR_5 = FUNC_5(VAR_1, &VAR_6);

 if (FUNC_2(VAR_5))
  return FUNC_0(VAR_5);

 if (VAR_4 && VAR_5->i_generation != VAR_4) {
  FUNC_4(VAR_5);
  return FUNC_1(-VAR_0);
 }
 return FUNC_3(VAR_5);
}
