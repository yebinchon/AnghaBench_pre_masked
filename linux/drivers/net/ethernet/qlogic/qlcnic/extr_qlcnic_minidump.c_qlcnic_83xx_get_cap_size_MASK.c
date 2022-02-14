
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_83xx_dump_template_hdr {int * cap_sizes; } ;



inline u32 FUNC_0(void *VAR_0, int VAR_1)
{
 struct qlcnic_83xx_dump_template_hdr *VAR_2 = VAR_0;

 return VAR_2->cap_sizes[VAR_1];
}
