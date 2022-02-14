
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware {size_t size; scalar_t__ data; } ;
struct elf32_phdr {scalar_t__ p_type; int p_flags; size_t p_filesz; size_t p_offset; } ;
struct elf32_hdr {int e_phnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (size_t,int ) ;
 int FUNC_2 (void*,scalar_t__,size_t) ;

void *FUNC_3(const struct firmware *VAR_6, size_t *VAR_7)
{
 const struct elf32_phdr *VAR_8;
 const struct elf32_hdr *VAR_9;
 size_t VAR_10;
 size_t VAR_11;
 size_t VAR_12;
 void *VAR_13;

 VAR_9 = (struct elf32_hdr *)VAR_6->data;
 VAR_8 = (struct elf32_phdr *)(VAR_9 + 1);

 if (VAR_9->e_phnum < 2)
  return FUNC_0(-VAR_0);

 if (VAR_8[0].p_type == VAR_3 || VAR_8[1].p_type == VAR_3)
  return FUNC_0(-VAR_0);

 if ((VAR_8[1].p_flags & VAR_5) != VAR_4)
  return FUNC_0(-VAR_0);

 VAR_12 = VAR_8[0].p_filesz;
 VAR_11 = VAR_8[1].p_filesz;

 VAR_13 = FUNC_1(VAR_12 + VAR_11, VAR_2);
 if (!VAR_13)
  return FUNC_0(-VAR_1);


 if (VAR_12 + VAR_11 == VAR_6->size)
  VAR_10 = VAR_8[0].p_filesz;
 else
  VAR_10 = VAR_8[1].p_offset;

 FUNC_2(VAR_13, VAR_6->data, VAR_12);
 FUNC_2(VAR_13 + VAR_12, VAR_6->data + VAR_10, VAR_11);

 *VAR_7 = VAR_12 + VAR_11;

 return VAR_13;
}
