
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct q6v5 {scalar_t__ mpss_phys; scalar_t__ mpss_size; int dev; scalar_t__ rmb_base; int mpss_perm; void* mpss_region; scalar_t__ mpss_reloc; int hexagon_mdt_image; } ;
struct firmware {scalar_t__ data; scalar_t__ size; } ;
struct elf32_phdr {int p_flags; scalar_t__ p_paddr; scalar_t__ p_memsz; scalar_t__ p_filesz; scalar_t__ p_offset; } ;
struct elf32_hdr {int e_phnum; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ phys_addr_t ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,int ) ;
 int FUNC_4 (void*,scalar_t__,scalar_t__) ;
 int FUNC_5 (void*,int ,int) ;
 int FUNC_6 (struct q6v5*,struct firmware const*) ;
 int FUNC_7 (struct elf32_phdr const*) ;
 int FUNC_8 (struct q6v5*,int ,int) ;
 int FUNC_9 (struct q6v5*,int *,int,scalar_t__,scalar_t__) ;
 int FUNC_10 (struct firmware const*) ;
 int FUNC_11 (struct firmware const**,char*,int ) ;
 int FUNC_12 (char*,char*,int) ;
 size_t FUNC_13 (int ) ;
 int FUNC_14 (size_t,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct q6v5 *VAR_13)
{
 const struct elf32_phdr *VAR_14;
 const struct elf32_phdr *VAR_15;
 const struct firmware *VAR_16;
 const struct firmware *VAR_17;
 struct elf32_hdr *VAR_18;
 phys_addr_t VAR_19;
 phys_addr_t VAR_20;
 phys_addr_t VAR_21 = VAR_5;
 phys_addr_t VAR_22 = 0;
 bool VAR_23 = 0;
 char *VAR_24;
 size_t VAR_25;
 ssize_t VAR_26;
 size_t VAR_27 = 0;
 void *VAR_28;
 int VAR_29;
 int VAR_30;

 VAR_25 = FUNC_13(VAR_13->hexagon_mdt_image);
 if (VAR_25 <= 4)
  return -VAR_1;

 VAR_24 = FUNC_3(VAR_13->hexagon_mdt_image, VAR_4);
 if (!VAR_24)
  return -VAR_2;

 VAR_29 = FUNC_11(&VAR_17, VAR_24, VAR_13->dev);
 if (VAR_29 < 0) {
  FUNC_1(VAR_13->dev, "unable to load %s\n", VAR_24);
  goto out;
 }


 FUNC_14(0, VAR_13->rmb_base + VAR_10);

 VAR_29 = FUNC_6(VAR_13, VAR_17);
 if (VAR_29)
  goto release_firmware;

 VAR_18 = (struct elf32_hdr *)VAR_17->data;
 VAR_14 = (struct elf32_phdr *)(VAR_18 + 1);

 for (VAR_30 = 0; VAR_30 < VAR_18->e_phnum; VAR_30++) {
  VAR_15 = &VAR_14[VAR_30];

  if (!FUNC_7(VAR_15))
   continue;

  if (VAR_15->p_flags & VAR_6)
   VAR_23 = 1;

  if (VAR_15->p_paddr < VAR_21)
   VAR_21 = VAR_15->p_paddr;

  if (VAR_15->p_paddr + VAR_15->p_memsz > VAR_22)
   VAR_22 = FUNC_0(VAR_15->p_paddr + VAR_15->p_memsz, VAR_12);
 }

 VAR_19 = VAR_23 ? VAR_21 : VAR_13->mpss_phys;
 VAR_13->mpss_reloc = VAR_19;

 for (VAR_30 = 0; VAR_30 < VAR_18->e_phnum; VAR_30++) {
  VAR_15 = &VAR_14[VAR_30];

  if (!FUNC_7(VAR_15))
   continue;

  VAR_26 = VAR_15->p_paddr - VAR_19;
  if (VAR_26 < 0 || VAR_26 + VAR_15->p_memsz > VAR_13->mpss_size) {
   FUNC_1(VAR_13->dev, "segment outside memory range\n");
   VAR_29 = -VAR_1;
   goto release_firmware;
  }

  VAR_28 = VAR_13->mpss_region + VAR_26;

  if (VAR_15->p_filesz && VAR_15->p_offset < VAR_17->size) {

   if (VAR_15->p_offset + VAR_15->p_filesz > VAR_17->size) {
    FUNC_1(VAR_13->dev,
     "failed to load segment %d from truncated file %s\n",
     VAR_30, VAR_24);
    VAR_29 = -VAR_1;
    goto release_firmware;
   }

   FUNC_4(VAR_28, VAR_17->data + VAR_15->p_offset, VAR_15->p_filesz);
  } else if (VAR_15->p_filesz) {

   FUNC_12(VAR_24 + VAR_25 - 3, "b%02d", VAR_30);
   VAR_29 = FUNC_11(&VAR_16, VAR_24, VAR_13->dev);
   if (VAR_29) {
    FUNC_1(VAR_13->dev, "failed to load %s\n", VAR_24);
    goto release_firmware;
   }

   FUNC_4(VAR_28, VAR_16->data, VAR_16->size);

   FUNC_10(VAR_16);
  }

  if (VAR_15->p_memsz > VAR_15->p_filesz) {
   FUNC_5(VAR_28 + VAR_15->p_filesz, 0,
          VAR_15->p_memsz - VAR_15->p_filesz);
  }
  VAR_27 += VAR_15->p_memsz;
 }


 VAR_29 = FUNC_9(VAR_13, &VAR_13->mpss_perm, 1,
          VAR_13->mpss_phys, VAR_13->mpss_size);
 if (VAR_29) {
  FUNC_1(VAR_13->dev,
   "assigning Q6 access to mpss memory failed: %d\n", VAR_29);
  VAR_29 = -VAR_0;
  goto release_firmware;
 }

 VAR_20 = VAR_23 ? VAR_13->mpss_phys : VAR_21;
 FUNC_14(VAR_20, VAR_13->rmb_base + VAR_11);
 FUNC_14(VAR_7, VAR_13->rmb_base + VAR_9);
 FUNC_14(VAR_27, VAR_13->rmb_base + VAR_10);

 VAR_29 = FUNC_8(VAR_13, VAR_8, 10000);
 if (VAR_29 == -VAR_3)
  FUNC_1(VAR_13->dev, "MPSS authentication timed out\n");
 else if (VAR_29 < 0)
  FUNC_1(VAR_13->dev, "MPSS authentication failed: %d\n", VAR_29);

release_firmware:
 FUNC_10(VAR_17);
out:
 FUNC_2(VAR_24);

 return VAR_29 < 0 ? VAR_29 : 0;
}
