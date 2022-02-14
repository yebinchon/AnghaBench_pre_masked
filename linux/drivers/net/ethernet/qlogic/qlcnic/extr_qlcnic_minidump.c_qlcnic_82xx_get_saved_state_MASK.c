
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct qlcnic_82xx_dump_template_hdr {size_t* saved_state; } ;



inline u32 FUNC_0(void *VAR_0, u32 VAR_1)
{
 struct qlcnic_82xx_dump_template_hdr *VAR_2 = VAR_0;

 return VAR_2->saved_state[VAR_1];
}
