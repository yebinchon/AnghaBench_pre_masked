
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct device {int dummy; } ;
struct rproc {struct device dev; } ;
struct firmware {scalar_t__ size; int * data; } ;
struct elf32_phdr {scalar_t__ p_paddr; scalar_t__ p_memsz; scalar_t__ p_filesz; scalar_t__ p_offset; scalar_t__ p_type; } ;
struct elf32_hdr {int e_phoff; int e_phnum; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct device*,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (void*,int const*,scalar_t__) ;
 int FUNC_3 (void*,int ,scalar_t__) ;
 void* FUNC_4 (struct rproc*,scalar_t__,scalar_t__) ;

int FUNC_5(struct rproc *VAR_2, const struct firmware *VAR_3)
{
 struct device *VAR_4 = &VAR_2->dev;
 struct elf32_hdr *VAR_5;
 struct elf32_phdr *VAR_6;
 int VAR_7, VAR_8 = 0;
 const u8 *VAR_9 = VAR_3->data;

 VAR_5 = (struct elf32_hdr *)VAR_9;
 VAR_6 = (struct elf32_phdr *)(VAR_9 + VAR_5->e_phoff);


 for (VAR_7 = 0; VAR_7 < VAR_5->e_phnum; VAR_7++, VAR_6++) {
  u32 VAR_10 = VAR_6->p_paddr;
  u32 VAR_11 = VAR_6->p_memsz;
  u32 VAR_12 = VAR_6->p_filesz;
  u32 VAR_13 = VAR_6->p_offset;
  void *VAR_14;

  if (VAR_6->p_type != VAR_1)
   continue;

  FUNC_0(VAR_4, "phdr: type %d da 0x%x memsz 0x%x filesz 0x%x\n",
   VAR_6->p_type, VAR_10, VAR_11, VAR_12);

  if (VAR_12 > VAR_11) {
   FUNC_1(VAR_4, "bad phdr filesz 0x%x memsz 0x%x\n",
    VAR_12, VAR_11);
   VAR_8 = -VAR_0;
   break;
  }

  if (VAR_13 + VAR_12 > VAR_3->size) {
   FUNC_1(VAR_4, "truncated fw: need 0x%x avail 0x%zx\n",
    VAR_13 + VAR_12, VAR_3->size);
   VAR_8 = -VAR_0;
   break;
  }


  VAR_14 = FUNC_4(VAR_2, VAR_10, VAR_11);
  if (!VAR_14) {
   FUNC_1(VAR_4, "bad phdr da 0x%x mem 0x%x\n", VAR_10, VAR_11);
   VAR_8 = -VAR_0;
   break;
  }


  if (VAR_6->p_filesz)
   FUNC_2(VAR_14, VAR_9 + VAR_6->p_offset, VAR_12);
  if (VAR_11 > VAR_12)
   FUNC_3(VAR_14 + VAR_12, 0, VAR_11 - VAR_12);
 }

 return VAR_8;
}
