
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qed_hw_info {int offload_tc_set; int offload_tc; } ;



void FUNC_0(struct qed_hw_info *VAR_0, u8 VAR_1)
{
 VAR_0->offload_tc = VAR_1;
 VAR_0->offload_tc_set = 1;
}
