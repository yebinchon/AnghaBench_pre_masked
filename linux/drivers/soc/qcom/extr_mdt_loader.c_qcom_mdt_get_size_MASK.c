
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware {scalar_t__ data; } ;
struct elf32_phdr {scalar_t__ p_paddr; scalar_t__ p_memsz; } ;
struct elf32_hdr {int e_phnum; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ phys_addr_t ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct elf32_phdr const*) ;

ssize_t FUNC_2(const struct firmware *VAR_3)
{
 const struct elf32_phdr *VAR_4;
 const struct elf32_phdr *VAR_5;
 const struct elf32_hdr *VAR_6;
 phys_addr_t VAR_7 = VAR_1;
 phys_addr_t VAR_8 = 0;
 int VAR_9;

 VAR_6 = (struct elf32_hdr *)VAR_3->data;
 VAR_4 = (struct elf32_phdr *)(VAR_6 + 1);

 for (VAR_9 = 0; VAR_9 < VAR_6->e_phnum; VAR_9++) {
  VAR_5 = &VAR_4[VAR_9];

  if (!FUNC_1(VAR_5))
   continue;

  if (VAR_5->p_paddr < VAR_7)
   VAR_7 = VAR_5->p_paddr;

  if (VAR_5->p_paddr + VAR_5->p_memsz > VAR_8)
   VAR_8 = FUNC_0(VAR_5->p_paddr + VAR_5->p_memsz, VAR_2);
 }

 return VAR_7 < VAR_8 ? VAR_8 - VAR_7 : -VAR_0;
}
