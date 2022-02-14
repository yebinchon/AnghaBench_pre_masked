
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int dummy; } ;
struct rproc {size_t table_sz; scalar_t__ cached_table; scalar_t__ table_ptr; struct device dev; } ;
struct resource_table {int dummy; } ;
struct firmware {int size; int * data; } ;
struct elf32_shdr {int sh_offset; size_t sh_size; } ;
struct elf32_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct elf32_shdr* FUNC_0 (struct device*,struct elf32_hdr*,int ) ;
 scalar_t__ FUNC_1 (struct resource_table*,size_t,int ) ;

int FUNC_2(struct rproc *VAR_3, const struct firmware *VAR_4)
{
 struct elf32_hdr *VAR_5;
 struct elf32_shdr *VAR_6;
 struct device *VAR_7 = &VAR_3->dev;
 struct resource_table *VAR_8 = ((void*)0);
 const u8 *VAR_9 = VAR_4->data;
 size_t VAR_10;

 VAR_5 = (struct elf32_hdr *)VAR_9;

 VAR_6 = FUNC_0(VAR_7, VAR_5, VAR_4->size);
 if (!VAR_6)
  return -VAR_0;

 VAR_8 = (struct resource_table *)(VAR_9 + VAR_6->sh_offset);
 VAR_10 = VAR_6->sh_size;







 VAR_3->cached_table = FUNC_1(VAR_8, VAR_10, VAR_2);
 if (!VAR_3->cached_table)
  return -VAR_1;

 VAR_3->table_ptr = VAR_3->cached_table;
 VAR_3->table_sz = VAR_10;

 return 0;
}
