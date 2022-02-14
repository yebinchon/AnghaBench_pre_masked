
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int e_phnum; } ;
struct TYPE_3__ {scalar_t__ p_type; int p_offset; int p_filesz; } ;
typedef TYPE_1__ Elf64_Phdr ;
typedef TYPE_2__ Elf64_Ehdr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (void*,unsigned char*,void*,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_3,
         unsigned char *VAR_4)
{
 Elf64_Ehdr *VAR_5 = (Elf64_Ehdr *)VAR_3;
 Elf64_Phdr *VAR_6;
 int VAR_7;


 if (VAR_5->e_phnum >
     (VAR_1 - sizeof(Elf64_Ehdr)) / sizeof(Elf64_Phdr))
  return -VAR_0;

 VAR_6 = (Elf64_Phdr *)(VAR_3 + sizeof(Elf64_Ehdr));

 for (VAR_7 = 0; VAR_7 < VAR_5->e_phnum; ++VAR_7)
  if (VAR_6[VAR_7].p_type == VAR_2)
   return FUNC_0(VAR_3, VAR_4,
     VAR_3 + VAR_6[VAR_7].p_offset,
     VAR_6[VAR_7].p_filesz);
 return -VAR_0;
}
