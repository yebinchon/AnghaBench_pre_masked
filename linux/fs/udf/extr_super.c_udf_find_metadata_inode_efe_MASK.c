
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct super_block {int dummy; } ;
struct kernel_lb_addr {void* partitionReferenceNum; void* logicalBlockNum; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {scalar_t__ i_alloc_type; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct super_block*,struct kernel_lb_addr*) ;
 int FUNC_5 (struct super_block*,char*) ;

struct inode *FUNC_6(struct super_block *VAR_2,
     u32 VAR_3, u32 VAR_4)
{
 struct kernel_lb_addr VAR_5;
 struct inode *VAR_6;

 VAR_5.logicalBlockNum = VAR_3;
 VAR_5.partitionReferenceNum = VAR_4;

 VAR_6 = FUNC_4(VAR_2, &VAR_5);

 if (FUNC_1(VAR_6)) {
  FUNC_5(VAR_2, "metadata inode efe not found\n");
  return VAR_6;
 }
 if (FUNC_2(VAR_6)->i_alloc_type != VAR_1) {
  FUNC_5(VAR_2, "metadata inode efe does not have short allocation descriptors!\n");
  FUNC_3(VAR_6);
  return FUNC_0(-VAR_0);
 }

 return VAR_6;
}
