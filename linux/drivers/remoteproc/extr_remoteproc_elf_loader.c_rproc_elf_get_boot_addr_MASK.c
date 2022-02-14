
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rproc {int dummy; } ;
struct firmware {scalar_t__ data; } ;
struct elf32_hdr {int e_entry; } ;



u32 FUNC_0(struct rproc *VAR_0, const struct firmware *VAR_1)
{
 struct elf32_hdr *VAR_2 = (struct elf32_hdr *)VAR_1->data;

 return VAR_2->e_entry;
}
