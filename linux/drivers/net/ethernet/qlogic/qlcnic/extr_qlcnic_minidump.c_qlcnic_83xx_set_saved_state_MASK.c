
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct qlcnic_83xx_dump_template_hdr {size_t* saved_state; } ;



inline void FUNC_0(void *VAR_0, u32 VAR_1,
     u32 VAR_2)
{
 struct qlcnic_83xx_dump_template_hdr *VAR_3 = VAR_0;

 VAR_3->saved_state[VAR_1] = VAR_2;
}
