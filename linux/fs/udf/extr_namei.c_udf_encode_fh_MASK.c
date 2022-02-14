
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kernel_lb_addr {scalar_t__ partitionReferenceNum; int logicalBlockNum; } ;
struct inode {int i_generation; } ;
struct TYPE_3__ {int parent_generation; scalar_t__ parent_partref; int parent_block; int generation; scalar_t__ partref; int block; } ;
struct fid {TYPE_1__ udf; } ;
typedef int __u32 ;
struct TYPE_4__ {struct kernel_lb_addr i_location; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct inode*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_3, __u32 *VAR_4, int *VAR_5,
    struct inode *VAR_6)
{
 int VAR_7 = *VAR_5;
 struct kernel_lb_addr VAR_8 = FUNC_0(VAR_3)->i_location;
 struct fid *VAR_9 = (struct fid *)VAR_4;
 int VAR_10 = VAR_1;

 if (VAR_6 && (VAR_7 < 5)) {
  *VAR_5 = 5;
  return VAR_0;
 } else if (VAR_7 < 3) {
  *VAR_5 = 3;
  return VAR_0;
 }

 *VAR_5 = 3;
 VAR_9->udf.block = VAR_8.logicalBlockNum;
 VAR_9->udf.partref = VAR_8.partitionReferenceNum;
 VAR_9->udf.parent_partref = 0;
 VAR_9->udf.generation = VAR_3->i_generation;

 if (VAR_6) {
  VAR_8 = FUNC_0(VAR_6)->i_location;
  VAR_9->udf.parent_block = VAR_8.logicalBlockNum;
  VAR_9->udf.parent_partref = VAR_8.partitionReferenceNum;
  VAR_9->udf.parent_generation = VAR_3->i_generation;
  *VAR_5 = 5;
  VAR_10 = VAR_2;
 }

 return VAR_10;
}
