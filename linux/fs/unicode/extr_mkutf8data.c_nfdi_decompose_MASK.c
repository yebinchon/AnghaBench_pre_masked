
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* utf32nfdi; unsigned int* utf32nfdicf; } ;


 int FUNC_0 (unsigned int*) ;
 unsigned int* FUNC_1 (int) ;
 int FUNC_2 (unsigned int*,unsigned int*,int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (char*,...) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(void)
{
 unsigned int VAR_2;
 unsigned int VAR_3[19];
 unsigned int *VAR_4;
 unsigned int *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 if (VAR_1 > 0)
  FUNC_4("Decomposing nfdi\n");

 VAR_6 = 0;
 for (VAR_2 = 0; VAR_2 != 0x110000; VAR_2++) {
  if (!VAR_0[VAR_2].utf32nfdi)
   continue;
  for (;;) {
   VAR_9 = 1;
   VAR_7 = 0;
   VAR_4 = VAR_0[VAR_2].utf32nfdi;
   while (*VAR_4) {
    VAR_5 = VAR_0[*VAR_4].utf32nfdi;
    if (VAR_5) {
     for (VAR_8 = 0; VAR_5[VAR_8]; VAR_8++)
      VAR_3[VAR_7++] = VAR_5[VAR_8];
     VAR_9 = 0;
    } else {
     VAR_3[VAR_7++] = *VAR_4;
    }
    VAR_4++;
   }
   VAR_3[VAR_7++] = 0;
   if (VAR_9)
    break;
   FUNC_0(VAR_0[VAR_2].utf32nfdi);
   VAR_4 = FUNC_1(VAR_7 * sizeof(unsigned int));
   FUNC_2(VAR_4, VAR_3, VAR_7 * sizeof(unsigned int));
   VAR_0[VAR_2].utf32nfdi = VAR_4;
  }

  if (!VAR_0[VAR_2].utf32nfdicf) {
   VAR_4 = FUNC_1(VAR_7 * sizeof(unsigned int));
   FUNC_2(VAR_4, VAR_3, VAR_7 * sizeof(unsigned int));
   VAR_0[VAR_2].utf32nfdicf = VAR_4;
  }
  if (VAR_1 > 1)
   FUNC_3(VAR_2);
  VAR_6++;
 }
 if (VAR_1 > 0)
  FUNC_4("Processed %d entries\n", VAR_6);
}
