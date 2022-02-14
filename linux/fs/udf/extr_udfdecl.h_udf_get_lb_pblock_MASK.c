
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct super_block {int dummy; } ;
struct kernel_lb_addr {int partitionReferenceNum; int logicalBlockNum; } ;


 int FUNC_0 (struct super_block*,int ,int ,int ) ;

__attribute__((used)) static inline uint32_t
FUNC_1(struct super_block *VAR_0, struct kernel_lb_addr *VAR_1,
    uint32_t VAR_2)
{
 return FUNC_0(VAR_0, VAR_1->logicalBlockNum,
   VAR_1->partitionReferenceNum, VAR_2);
}
