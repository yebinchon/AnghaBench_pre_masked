
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef size_t u32 ;
struct resource_table {int ver; int num; scalar_t__* reserved; } ;
struct elf32_shdr {int sh_offset; size_t sh_size; int sh_name; } ;
struct elf32_hdr {int e_shoff; size_t e_shstrndx; int e_shnum; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,...) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 size_t FUNC_2 (struct resource_table*,size_t,int ) ;

__attribute__((used)) static struct elf32_shdr *
FUNC_3(struct device *VAR_0, struct elf32_hdr *VAR_1, size_t VAR_2)
{
 struct elf32_shdr *VAR_3;
 int VAR_4;
 const char *VAR_5;
 struct resource_table *VAR_6 = ((void*)0);
 const u8 *VAR_7 = (void *)VAR_1;


 VAR_3 = (struct elf32_shdr *)(VAR_7 + VAR_1->e_shoff);
 VAR_5 = VAR_7 + VAR_3[VAR_1->e_shstrndx].sh_offset;

 for (VAR_4 = 0; VAR_4 < VAR_1->e_shnum; VAR_4++, VAR_3++) {
  u32 VAR_8 = VAR_3->sh_size;
  u32 VAR_9 = VAR_3->sh_offset;

  if (FUNC_1(VAR_5 + VAR_3->sh_name, ".resource_table"))
   continue;

  VAR_6 = (struct resource_table *)(VAR_7 + VAR_9);


  if (VAR_9 + VAR_8 > VAR_2 || VAR_9 + VAR_8 < VAR_8) {
   FUNC_0(VAR_0, "resource table truncated\n");
   return ((void*)0);
  }


  if (sizeof(struct resource_table) > VAR_8) {
   FUNC_0(VAR_0, "header-less resource table\n");
   return ((void*)0);
  }


  if (VAR_6->ver != 1) {
   FUNC_0(VAR_0, "unsupported fw ver: %d\n", VAR_6->ver);
   return ((void*)0);
  }


  if (VAR_6->reserved[0] || VAR_6->reserved[1]) {
   FUNC_0(VAR_0, "non zero reserved bytes\n");
   return ((void*)0);
  }


  if (FUNC_2(VAR_6, VAR_9, VAR_6->num) > VAR_8) {
   FUNC_0(VAR_0, "resource table incomplete\n");
   return ((void*)0);
  }

  return VAR_3;
 }

 return ((void*)0);
}
