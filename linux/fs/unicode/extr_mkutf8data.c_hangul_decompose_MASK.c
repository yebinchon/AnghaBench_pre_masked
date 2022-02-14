
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* utf32nfdi; unsigned int* utf32nfdicf; char* utf8nfdi; } ;


 char VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (unsigned int*,unsigned int*,int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (char*,...) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(void)
{
 unsigned int VAR_3 = 0xAC00;
 unsigned int VAR_4 = 0x1100;
 unsigned int VAR_5 = 0x1161;
 unsigned int VAR_6 = 0x11a7;

 unsigned int VAR_7 = 21;
 unsigned int VAR_8 = 28;
 unsigned int VAR_9 = (VAR_7 * VAR_8);

 unsigned int VAR_10;
 unsigned int VAR_11[4];
 unsigned int *VAR_12;
        int VAR_13;
 int VAR_14;

 if (VAR_2 > 0)
  FUNC_4("Decomposing hangul\n");

 VAR_13 = 0;
 for (VAR_10 = 0xAC00; VAR_10 <= 0xD7A3; VAR_10++) {
  unsigned int VAR_15 = VAR_10 - VAR_3;
  unsigned int VAR_16 = VAR_15 / VAR_9;
  unsigned int VAR_17 = (VAR_15 % VAR_9) / VAR_8;
  unsigned int VAR_18 = VAR_15 % VAR_8;

  VAR_14 = 0;
  VAR_11[VAR_14++] = VAR_4 + VAR_16;
  VAR_11[VAR_14++] = VAR_5 + VAR_17;
  if (VAR_18)
   VAR_11[VAR_14++] = VAR_6 + VAR_18;
  VAR_11[VAR_14++] = 0;

  FUNC_0(!VAR_1[VAR_10].utf32nfdi);
  VAR_12 = FUNC_1(VAR_14 * sizeof(unsigned int));
  FUNC_2(VAR_12, VAR_11, VAR_14 * sizeof(unsigned int));
  VAR_1[VAR_10].utf32nfdi = VAR_12;

  FUNC_0(!VAR_1[VAR_10].utf32nfdicf);
  VAR_12 = FUNC_1(VAR_14 * sizeof(unsigned int));
  FUNC_2(VAR_12, VAR_11, VAR_14 * sizeof(unsigned int));
  VAR_1[VAR_10].utf32nfdicf = VAR_12;






  VAR_1[VAR_10].utf8nfdi = FUNC_1(2);
  VAR_1[VAR_10].utf8nfdi[0] = VAR_0;
  VAR_1[VAR_10].utf8nfdi[1] = '\0';

  if (VAR_2 > 1)
   FUNC_3(VAR_10);

  VAR_13++;
 }
 if (VAR_2 > 0)
  FUNC_4("Created %d entries\n", VAR_13);
}
