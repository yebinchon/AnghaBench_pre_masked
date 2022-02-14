
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {int dev; } ;
struct resource_table {int dummy; } ;
struct firmware {int size; scalar_t__ data; } ;
struct elf32_shdr {int sh_size; int sh_addr; } ;
struct elf32_hdr {int dummy; } ;


 struct elf32_shdr* FUNC_0 (int *,struct elf32_hdr*,int ) ;
 struct resource_table* FUNC_1 (struct rproc*,int ,int ) ;

struct resource_table *FUNC_2(struct rproc *VAR_0,
             const struct firmware *VAR_1)
{
 struct elf32_hdr *VAR_2 = (struct elf32_hdr *)VAR_1->data;
 struct elf32_shdr *VAR_3;

 VAR_3 = FUNC_0(&VAR_0->dev, VAR_2, VAR_1->size);
 if (!VAR_3)
  return ((void*)0);

 return FUNC_1(VAR_0, VAR_3->sh_addr, VAR_3->sh_size);
}
