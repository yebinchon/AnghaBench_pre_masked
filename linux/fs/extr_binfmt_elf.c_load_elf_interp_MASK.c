
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {TYPE_1__* f_op; } ;
struct elfhdr {scalar_t__ e_type; int e_phnum; } ;
struct elf_phdr {scalar_t__ p_type; unsigned long p_vaddr; unsigned long p_filesz; unsigned long p_memsz; int p_flags; } ;
struct TYPE_2__ {int mmap; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (unsigned long) ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct elfhdr*) ;
 scalar_t__ FUNC_4 (struct elfhdr*) ;
 unsigned long FUNC_5 (struct file*,unsigned long,struct elf_phdr*,int,int,unsigned long) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (unsigned long) ;
 unsigned long FUNC_8 (struct elf_phdr*,int) ;
 unsigned long FUNC_9 (unsigned long,unsigned long,int ) ;

__attribute__((used)) static unsigned long FUNC_10(struct elfhdr *VAR_12,
  struct file *VAR_13, unsigned long *VAR_14,
  unsigned long VAR_15, struct elf_phdr *VAR_16)
{
 struct elf_phdr *VAR_17;
 unsigned long VAR_18 = 0;
 int VAR_19 = 0;
 unsigned long VAR_20 = 0, VAR_21 = 0;
 int VAR_22 = 0;
 unsigned long VAR_23 = ~0UL;
 unsigned long VAR_24;
 int VAR_25;


 if (VAR_12->e_type != VAR_4 &&
     VAR_12->e_type != VAR_3)
  goto out;
 if (!FUNC_3(VAR_12) ||
     FUNC_4(VAR_12))
  goto out;
 if (!VAR_13->f_op->mmap)
  goto out;

 VAR_24 = FUNC_8(VAR_16,
     VAR_12->e_phnum);
 if (!VAR_24) {
  VAR_23 = -VAR_1;
  goto out;
 }

 VAR_17 = VAR_16;
 for (VAR_25 = 0; VAR_25 < VAR_12->e_phnum; VAR_25++, VAR_17++) {
  if (VAR_17->p_type == VAR_9) {
   int VAR_26 = VAR_7 | VAR_5;
   int VAR_27 = FUNC_6(VAR_17->p_flags);
   unsigned long VAR_28 = 0;
   unsigned long VAR_29, VAR_30;

   VAR_28 = VAR_17->p_vaddr;
   if (VAR_12->e_type == VAR_4 || VAR_19)
    VAR_26 |= VAR_6;
   else if (VAR_15 && VAR_12->e_type == VAR_3)
    VAR_18 = -VAR_28;

   VAR_30 = FUNC_5(VAR_13, VAR_18 + VAR_28,
     VAR_17, VAR_27, VAR_26, VAR_24);
   VAR_24 = 0;
   if (!*VAR_14)
    *VAR_14 = VAR_30;
   VAR_23 = VAR_30;
   if (FUNC_0(VAR_30))
    goto out;

   if (!VAR_19 &&
       VAR_12->e_type == VAR_3) {
    VAR_18 = VAR_30 - FUNC_2(VAR_28);
    VAR_19 = 1;
   }






   VAR_29 = VAR_18 + VAR_17->p_vaddr;
   if (FUNC_0(VAR_29) ||
       VAR_17->p_filesz > VAR_17->p_memsz ||
       VAR_17->p_memsz > VAR_10 ||
       VAR_10 - VAR_17->p_memsz < VAR_29) {
    VAR_23 = -VAR_2;
    goto out;
   }





   VAR_29 = VAR_18 + VAR_17->p_vaddr + VAR_17->p_filesz;
   if (VAR_29 > VAR_21)
    VAR_21 = VAR_29;





   VAR_29 = VAR_18 + VAR_17->p_vaddr + VAR_17->p_memsz;
   if (VAR_29 > VAR_20) {
    VAR_20 = VAR_29;
    VAR_22 = VAR_27;
   }
  }
 }






 if (FUNC_7(VAR_21)) {
  VAR_23 = -VAR_0;
  goto out;
 }





 VAR_21 = FUNC_1(VAR_21);
 VAR_20 = FUNC_1(VAR_20);

 if (VAR_20 > VAR_21) {
  VAR_23 = FUNC_9(VAR_21, VAR_20 - VAR_21,
    VAR_22 & VAR_8 ? VAR_11 : 0);
  if (VAR_23)
   goto out;
 }

 VAR_23 = VAR_18;
out:
 return VAR_23;
}
