
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mm_struct {unsigned long start_code; unsigned long end_code; unsigned long start_data; unsigned long end_data; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int e_phnum; } ;
struct elf_fdpic_params {unsigned long load_addr; int flags; unsigned long elfhdr_addr; struct elf32_phdr* phdrs; TYPE_2__ hdr; TYPE_1__* loadmap; } ;
struct elf32_phdr {scalar_t__ p_type; unsigned long p_vaddr; unsigned long p_memsz; scalar_t__ p_offset; unsigned long p_filesz; int p_flags; } ;
struct elf32_fdpic_loadseg {unsigned long addr; unsigned long p_vaddr; unsigned long p_memsz; } ;
struct TYPE_3__ {struct elf32_fdpic_loadseg* segs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned long VAR_9 ;
 scalar_t__ FUNC_2 (void*,unsigned long) ;
 int FUNC_3 (struct file*,unsigned long,scalar_t__,unsigned long) ;
 unsigned long FUNC_4 (int *,unsigned long,unsigned long,int,unsigned long,int ) ;

__attribute__((used)) static int FUNC_5(
 struct elf_fdpic_params *VAR_10,
 struct file *VAR_11,
 struct mm_struct *VAR_12)
{
 struct elf32_fdpic_loadseg *VAR_13;
 struct elf32_phdr *VAR_14;
 unsigned long VAR_15, VAR_16 = VAR_9, VAR_17 = 0, VAR_18 = 0, VAR_19;
 int VAR_20, VAR_21;

 VAR_15 = VAR_10->load_addr;
 VAR_13 = VAR_10->loadmap->segs;



 VAR_14 = VAR_10->phdrs;
 for (VAR_20 = 0; VAR_20 < VAR_10->hdr.e_phnum; VAR_20++, VAR_14++) {
  if (VAR_10->phdrs[VAR_20].p_type != VAR_8)
   continue;

  if (VAR_16 > VAR_14->p_vaddr)
   VAR_16 = VAR_14->p_vaddr;
  if (VAR_17 < VAR_14->p_vaddr + VAR_14->p_memsz)
   VAR_17 = VAR_14->p_vaddr + VAR_14->p_memsz;
 }


 VAR_19 = VAR_3;
 if (VAR_10->flags & VAR_1)
  VAR_19 |= VAR_2;

 VAR_18 = FUNC_4(((void*)0), VAR_15, VAR_17 - VAR_16,
   VAR_6 | VAR_7 | VAR_5, VAR_19, 0);
 if (FUNC_0(VAR_18))
  return (int) VAR_18;

 if (VAR_15 != 0)
  VAR_15 += FUNC_1(VAR_17 - VAR_16);


 VAR_14 = VAR_10->phdrs;
 for (VAR_20 = 0; VAR_20 < VAR_10->hdr.e_phnum; VAR_20++, VAR_14++) {
  if (VAR_10->phdrs[VAR_20].p_type != VAR_8)
   continue;

  VAR_13->addr = VAR_18 + (VAR_14->p_vaddr - VAR_16);
  VAR_13->p_vaddr = VAR_14->p_vaddr;
  VAR_13->p_memsz = VAR_14->p_memsz;

  VAR_21 = FUNC_3(VAR_11, VAR_13->addr, VAR_14->p_offset,
           VAR_14->p_filesz);
  if (VAR_21 < 0)
   return VAR_21;


  if (VAR_14->p_offset == 0)
   VAR_10->elfhdr_addr = VAR_13->addr;


  if (VAR_14->p_filesz < VAR_14->p_memsz) {
   if (FUNC_2((void *) (VAR_13->addr + VAR_14->p_filesz),
           VAR_14->p_memsz - VAR_14->p_filesz))
    return -VAR_0;
  }

  if (VAR_12) {
   if (VAR_14->p_flags & VAR_4) {
    if (!VAR_12->start_code) {
     VAR_12->start_code = VAR_13->addr;
     VAR_12->end_code = VAR_13->addr +
      VAR_14->p_memsz;
    }
   } else if (!VAR_12->start_data) {
    VAR_12->start_data = VAR_13->addr;
    VAR_12->end_data = VAR_13->addr + VAR_14->p_memsz;
   }
  }

  VAR_13++;
 }

 return 0;
}
