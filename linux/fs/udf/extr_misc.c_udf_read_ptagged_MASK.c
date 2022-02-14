
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct super_block {int dummy; } ;
struct kernel_lb_addr {scalar_t__ logicalBlockNum; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct super_block*,struct kernel_lb_addr*,scalar_t__) ;
 struct buffer_head* FUNC_1 (struct super_block*,int ,scalar_t__,int *) ;

struct buffer_head *FUNC_2(struct super_block *VAR_0,
         struct kernel_lb_addr *VAR_1,
         uint32_t VAR_2, uint16_t *VAR_3)
{
 return FUNC_1(VAR_0, FUNC_0(VAR_0, VAR_1, VAR_2),
          VAR_1->logicalBlockNum + VAR_2, VAR_3);
}
