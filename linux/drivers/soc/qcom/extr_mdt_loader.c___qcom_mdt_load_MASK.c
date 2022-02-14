
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware {scalar_t__ data; scalar_t__ size; } ;
struct elf32_phdr {int p_flags; scalar_t__ p_paddr; size_t p_memsz; size_t p_filesz; scalar_t__ p_offset; } ;
struct elf32_hdr {int e_phnum; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef scalar_t__ phys_addr_t ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char const*,int ) ;
 int FUNC_6 (struct elf32_phdr const*) ;
 int FUNC_7 (void*,scalar_t__,size_t) ;
 int FUNC_8 (void*,int ,size_t) ;
 void* FUNC_9 (struct firmware const*,size_t*) ;
 int FUNC_10 (int,void*,size_t) ;
 int FUNC_11 (int,scalar_t__,scalar_t__) ;
 int FUNC_12 (struct firmware const*) ;
 int FUNC_13 (struct firmware const**,char*,struct device*,void*,size_t) ;
 int FUNC_14 (scalar_t__,char*,int) ;
 size_t FUNC_15 (char const*) ;

__attribute__((used)) static int FUNC_16(struct device *VAR_6, const struct firmware *VAR_7,
      const char *VAR_8, int VAR_9, void *VAR_10,
      phys_addr_t VAR_11, size_t VAR_12,
      phys_addr_t *VAR_13, bool VAR_14)
{
 const struct elf32_phdr *VAR_15;
 const struct elf32_phdr *VAR_16;
 const struct elf32_hdr *VAR_17;
 const struct firmware *VAR_18;
 phys_addr_t VAR_19;
 phys_addr_t VAR_20 = VAR_3;
 phys_addr_t VAR_21 = 0;
 size_t VAR_22;
 size_t VAR_23;
 ssize_t VAR_24;
 void *VAR_25;
 char *VAR_26;
 bool VAR_27 = 0;
 void *VAR_28;
 int VAR_29 = 0;
 int VAR_30;

 if (!VAR_7 || !VAR_10 || !VAR_11 || !VAR_12)
  return -VAR_0;

 VAR_17 = (struct elf32_hdr *)VAR_7->data;
 VAR_15 = (struct elf32_phdr *)(VAR_17 + 1);

 VAR_23 = FUNC_15(VAR_8);
 if (VAR_23 <= 4)
  return -VAR_0;

 VAR_26 = FUNC_5(VAR_8, VAR_2);
 if (!VAR_26)
  return -VAR_1;

 if (VAR_14) {
  VAR_25 = FUNC_9(VAR_7, &VAR_22);
  if (FUNC_1(VAR_25)) {
   VAR_29 = FUNC_2(VAR_25);
   goto out;
  }

  VAR_29 = FUNC_10(VAR_9, VAR_25, VAR_22);

  FUNC_4(VAR_25);
  if (VAR_29) {
   FUNC_3(VAR_6, "invalid firmware metadata\n");
   goto out;
  }
 }

 for (VAR_30 = 0; VAR_30 < VAR_17->e_phnum; VAR_30++) {
  VAR_16 = &VAR_15[VAR_30];

  if (!FUNC_6(VAR_16))
   continue;

  if (VAR_16->p_flags & VAR_4)
   VAR_27 = 1;

  if (VAR_16->p_paddr < VAR_20)
   VAR_20 = VAR_16->p_paddr;

  if (VAR_16->p_paddr + VAR_16->p_memsz > VAR_21)
   VAR_21 = FUNC_0(VAR_16->p_paddr + VAR_16->p_memsz, VAR_5);
 }

 if (VAR_27) {
  if (VAR_14) {
   VAR_29 = FUNC_11(VAR_9, VAR_11,
           VAR_21 - VAR_20);
   if (VAR_29) {
    FUNC_3(VAR_6, "unable to setup relocation\n");
    goto out;
   }
  }





  VAR_19 = VAR_20;
 } else {




  VAR_19 = VAR_11;
 }

 for (VAR_30 = 0; VAR_30 < VAR_17->e_phnum; VAR_30++) {
  VAR_16 = &VAR_15[VAR_30];

  if (!FUNC_6(VAR_16))
   continue;

  VAR_24 = VAR_16->p_paddr - VAR_19;
  if (VAR_24 < 0 || VAR_24 + VAR_16->p_memsz > VAR_12) {
   FUNC_3(VAR_6, "segment outside memory range\n");
   VAR_29 = -VAR_0;
   break;
  }

  VAR_28 = VAR_10 + VAR_24;

  if (VAR_16->p_filesz && VAR_16->p_offset < VAR_7->size) {

   if (VAR_16->p_offset + VAR_16->p_filesz > VAR_7->size) {
    FUNC_3(VAR_6,
     "failed to load segment %d from truncated file %s\n",
     VAR_30, VAR_8);
    VAR_29 = -VAR_0;
    break;
   }

   FUNC_7(VAR_28, VAR_7->data + VAR_16->p_offset, VAR_16->p_filesz);
  } else if (VAR_16->p_filesz) {

   FUNC_14(VAR_26 + VAR_23 - 3, "b%02d", VAR_30);
   VAR_29 = FUNC_13(&VAR_18, VAR_26, VAR_6,
       VAR_28, VAR_16->p_filesz);
   if (VAR_29) {
    FUNC_3(VAR_6, "failed to load %s\n", VAR_26);
    break;
   }

   FUNC_12(VAR_18);
  }

  if (VAR_16->p_memsz > VAR_16->p_filesz)
   FUNC_8(VAR_28 + VAR_16->p_filesz, 0, VAR_16->p_memsz - VAR_16->p_filesz);
 }

 if (VAR_13)
  *VAR_13 = VAR_19;

out:
 FUNC_4(VAR_26);

 return VAR_29;
}
