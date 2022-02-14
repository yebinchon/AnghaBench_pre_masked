
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ath10k_mem_section {unsigned int start; unsigned int end; } ;
struct TYPE_2__ {int size; struct ath10k_mem_section* sections; } ;
struct ath10k_mem_region {unsigned int start; TYPE_1__ section_table; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,unsigned int,int *,unsigned int) ;
 int FUNC_1 (struct ath10k*,char*,unsigned int,...) ;

__attribute__((used)) static int FUNC_2(struct ath10k *VAR_1,
       const struct ath10k_mem_region *VAR_2,
       u8 *VAR_3, size_t VAR_4)
{
 const struct ath10k_mem_section *VAR_5, *VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12;

 if (!VAR_2 || !VAR_3)
  return 0;

 VAR_5 = &VAR_2->section_table.sections[0];

 if (VAR_2->start > VAR_5->start) {
  FUNC_1(VAR_1, "incorrect memdump region 0x%x with section start address 0x%x.\n",
       VAR_2->start, VAR_5->start);
  return 0;
 }

 VAR_9 = VAR_5->start - VAR_2->start;




 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  *VAR_3 = VAR_0;
  VAR_3++;
 }

 VAR_7 = 0;

 for (VAR_11 = 0; VAR_5 != ((void*)0); VAR_11++) {
  VAR_8 = VAR_5->end - VAR_5->start;

  if (VAR_8 <= 0) {
   FUNC_1(VAR_1, "incorrect ramdump format with start address 0x%x and stop address 0x%x\n",
        VAR_5->start,
        VAR_5->end);
   break;
  }

  if ((VAR_11 + 1) == VAR_2->section_table.size) {

   VAR_6 = ((void*)0);
   VAR_9 = 0;
  } else {
   VAR_6 = VAR_5 + 1;

   if (VAR_5->end > VAR_6->start) {
    FUNC_1(VAR_1, "next ramdump section 0x%x is smaller than current end address 0x%x\n",
         VAR_6->start,
         VAR_5->end);
    break;
   }

   VAR_9 = VAR_6->start - VAR_5->end;
  }

  if (VAR_4 < (VAR_9 + VAR_8)) {
   FUNC_1(VAR_1, "ramdump buffer is too small: %zu\n", VAR_4);
   break;
  }

  VAR_4 -= VAR_9 + VAR_8;


  VAR_10 = FUNC_0(VAR_1, VAR_5->start,
            VAR_3, VAR_8);
  if (VAR_10) {
   FUNC_1(VAR_1, "failed to read ramdump from section 0x%x: %d\n",
        VAR_5->start, VAR_10);
   break;
  }

  VAR_3 += VAR_8;
  VAR_7 += VAR_8;


  for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
   *VAR_3 = VAR_0;
   VAR_3++;
  }

  VAR_7 += VAR_9;

  if (!VAR_6)

   break;

  VAR_5 = VAR_6;
 }

 return VAR_7;
}
