
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {int dummy; } ;
struct firmware {scalar_t__ data; } ;
struct elf32_phdr {scalar_t__ p_type; int p_flags; int p_memsz; int p_paddr; } ;
struct elf32_hdr {int e_phnum; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rproc*,int ,int ) ;

int FUNC_1(struct rproc *VAR_3,
    const struct firmware *VAR_4)
{
 const struct elf32_phdr *VAR_5;
 const struct elf32_phdr *VAR_6;
 const struct elf32_hdr *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_7 = (struct elf32_hdr *)VAR_4->data;
 VAR_5 = (struct elf32_phdr *)(VAR_7 + 1);

 for (VAR_9 = 0; VAR_9 < VAR_7->e_phnum; VAR_9++) {
  VAR_6 = &VAR_5[VAR_9];

  if (VAR_6->p_type != VAR_0)
   continue;

  if ((VAR_6->p_flags & VAR_2) == VAR_1)
   continue;

  if (!VAR_6->p_memsz)
   continue;

  VAR_8 = FUNC_0(VAR_3, VAR_6->p_paddr,
       VAR_6->p_memsz);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
