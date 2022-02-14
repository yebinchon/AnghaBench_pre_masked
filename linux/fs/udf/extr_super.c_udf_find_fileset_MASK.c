
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct super_block {int dummy; } ;
struct kernel_lb_addr {int logicalBlockNum; int partitionReferenceNum; } ;
struct fileSetDesc {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_2__ {int s_partition; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (struct super_block*,struct fileSetDesc*,struct kernel_lb_addr*) ;
 struct buffer_head* FUNC_4 (struct super_block*,struct kernel_lb_addr*,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_3,
       struct kernel_lb_addr *VAR_4,
       struct kernel_lb_addr *VAR_5)
{
 struct buffer_head *VAR_6 = ((void*)0);
 uint16_t VAR_7;
 int VAR_8;

 if (VAR_4->logicalBlockNum == 0xFFFFFFFF &&
     VAR_4->partitionReferenceNum == 0xFFFF)
  return -VAR_0;

 VAR_6 = FUNC_4(VAR_3, VAR_4, 0, &VAR_7);
 if (!VAR_6)
  return -VAR_1;
 if (VAR_7 != VAR_2) {
  FUNC_1(VAR_6);
  return -VAR_0;
 }

 FUNC_2("Fileset at block=%u, partition=%u\n",
    VAR_4->logicalBlockNum, VAR_4->partitionReferenceNum);

 FUNC_0(VAR_3)->s_partition = VAR_4->partitionReferenceNum;
 VAR_8 = FUNC_3(VAR_3, (struct fileSetDesc *)VAR_6->b_data, VAR_5);
 FUNC_1(VAR_6);
 return VAR_8;
}
