
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct elf_phdr {int dummy; } ;
struct TYPE_2__ {int e_phentsize; unsigned int e_phnum; int e_phoff; } ;
struct elf_fdpic_params {int stack_size; int flags; TYPE_1__ hdr; struct elf32_phdr* phdrs; } ;
struct elf32_phdr {scalar_t__ p_type; int p_flags; int p_memsz; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct file*,struct elf32_phdr*,unsigned long,int *) ;
 struct elf32_phdr* FUNC_1 (unsigned long,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct elf_fdpic_params *VAR_7,
     struct file *VAR_8)
{
 struct elf32_phdr *VAR_9;
 unsigned long VAR_10;
 int VAR_11, VAR_12;
 loff_t VAR_13 = VAR_7->hdr.e_phoff;

 if (VAR_7->hdr.e_phentsize != sizeof(struct elf_phdr))
  return -VAR_3;
 if (VAR_7->hdr.e_phnum > 65536U / sizeof(struct elf_phdr))
  return -VAR_3;

 VAR_10 = VAR_7->hdr.e_phnum * sizeof(struct elf_phdr);
 VAR_7->phdrs = FUNC_1(VAR_10, VAR_4);
 if (!VAR_7->phdrs)
  return -VAR_3;

 VAR_11 = FUNC_0(VAR_8, VAR_7->phdrs, VAR_10, &VAR_13);
 if (FUNC_2(VAR_11 != VAR_10))
  return VAR_11 < 0 ? VAR_11 : -VAR_2;


 VAR_9 = VAR_7->phdrs;
 for (VAR_12 = 0; VAR_12 < VAR_7->hdr.e_phnum; VAR_12++, VAR_9++) {
  if (VAR_9->p_type != VAR_6)
   continue;

  if (VAR_9->p_flags & VAR_5)
   VAR_7->flags |= VAR_0;
  else
   VAR_7->flags |= VAR_1;

  VAR_7->stack_size = VAR_9->p_memsz;
  break;
 }

 return 0;
}
