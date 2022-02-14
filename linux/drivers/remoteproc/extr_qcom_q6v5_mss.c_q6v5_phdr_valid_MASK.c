
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf32_phdr {scalar_t__ p_type; int p_flags; int p_memsz; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_0(const struct elf32_phdr *VAR_3)
{
 if (VAR_3->p_type != VAR_0)
  return 0;

 if ((VAR_3->p_flags & VAR_2) == VAR_1)
  return 0;

 if (!VAR_3->p_memsz)
  return 0;

 return 1;
}
