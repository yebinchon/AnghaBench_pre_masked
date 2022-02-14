
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ n_type; int n_namesz; int n_descsz; } ;
typedef int Elf32_Word ;
typedef TYPE_1__ Elf32_Nhdr ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned char*,void*,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;

__attribute__((used)) static inline int FUNC_3(void *VAR_4,
        unsigned char *VAR_5,
        void *VAR_6,
        Elf32_Word VAR_7)
{
 Elf32_Word VAR_8 = 0, VAR_9;


 if (VAR_6 < VAR_4 || VAR_6 + VAR_7 < VAR_6)
  return -VAR_2;


 if (VAR_6 + VAR_7 > VAR_4 + VAR_3)
  return -VAR_2;

 while (VAR_8 + sizeof(Elf32_Nhdr) < VAR_7) {
  Elf32_Nhdr *VAR_10 = (Elf32_Nhdr *)(VAR_6 + VAR_8);

  if (VAR_10->n_type == VAR_0 &&
      VAR_10->n_namesz == sizeof("GNU") &&
      VAR_10->n_descsz > 0 &&
      VAR_10->n_descsz <= VAR_1) {
   FUNC_1(VAR_5,
          VAR_6 + VAR_8 +
          FUNC_0(sizeof("GNU"), 4) + sizeof(Elf32_Nhdr),
          VAR_10->n_descsz);
   FUNC_2(VAR_5 + VAR_10->n_descsz, 0,
          VAR_1 - VAR_10->n_descsz);
   return 0;
  }
  VAR_9 = VAR_8 + sizeof(Elf32_Nhdr) +
   FUNC_0(VAR_10->n_namesz, 4) + FUNC_0(VAR_10->n_descsz, 4);
  if (VAR_9 <= VAR_8)
   break;
  VAR_8 = VAR_9;
 }
 return -VAR_2;
}
