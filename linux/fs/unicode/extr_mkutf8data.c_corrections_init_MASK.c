
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct unicode_data {int dummy; } ;
struct TYPE_4__ {unsigned int code; unsigned int correction; unsigned int* utf32nfdi; } ;
typedef int FILE ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (int) ;
 char* VAR_1 ;
 char* VAR_2 ;
 TYPE_1__* FUNC_3 (int,int) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (char*) ;
 int * FUNC_7 (char*,char*) ;
 int VAR_6 ;
 int FUNC_8 (char*,int ) ;
 unsigned int* FUNC_9 (int) ;
 int FUNC_10 (unsigned int*,unsigned int*,int) ;
 char* VAR_7 ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,char*,unsigned int*,char*,char*,unsigned int*,unsigned int*,unsigned int*) ;
 unsigned int FUNC_15 (char*,char**,int) ;
 TYPE_1__* VAR_8 ;
 int FUNC_16 (unsigned int) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_17(void)
{
 FILE *VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;
 unsigned int *VAR_16;
 unsigned int VAR_17[19];
 char *VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;

 if (VAR_9 > 0)
  FUNC_12("Parsing %s\n", VAR_7);
 VAR_10 = FUNC_7(VAR_7, "r");
 if (!VAR_10)
  FUNC_11(VAR_7, VAR_5);

 VAR_20 = 0;
 while (FUNC_5(VAR_6, VAR_0, VAR_10)) {
  VAR_21 = FUNC_14(VAR_6, "%X;%[^;];%[^;];%d.%d.%d #",
    &VAR_11, VAR_1, VAR_2,
    &VAR_12, &VAR_13, &VAR_14);
  if (VAR_21 != 6)
   continue;
  if (!FUNC_16(VAR_11) || !FUNC_1(VAR_12, VAR_13, VAR_14))
   FUNC_8(VAR_7, VAR_6);
  VAR_20++;
 }
 VAR_3 = FUNC_3(VAR_20, sizeof(struct unicode_data));
 VAR_4 = VAR_20;
 FUNC_13(VAR_10);

 VAR_20 = 0;
 while (FUNC_5(VAR_6, VAR_0, VAR_10)) {
  VAR_21 = FUNC_14(VAR_6, "%X;%[^;];%[^;];%d.%d.%d #",
    &VAR_11, VAR_1, VAR_2,
    &VAR_12, &VAR_13, &VAR_14);
  if (VAR_21 != 6)
   continue;
  if (!FUNC_16(VAR_11) || !FUNC_1(VAR_12, VAR_13, VAR_14))
   FUNC_8(VAR_7, VAR_6);
  VAR_3[VAR_20] = VAR_8[VAR_11];
  FUNC_2(VAR_3[VAR_20].code == VAR_11);
  VAR_15 = FUNC_0(VAR_12, VAR_13, VAR_14);
  VAR_3[VAR_20].correction = VAR_15;

  VAR_19 = 0;
  VAR_18 = VAR_1;
  while (*VAR_18) {
   VAR_17[VAR_19] = FUNC_15(VAR_18, &VAR_18, 16);
   if (!FUNC_16(VAR_17[VAR_19]))
    FUNC_8(VAR_7, VAR_6);
   VAR_19++;
  }
  VAR_17[VAR_19++] = 0;

  VAR_16 = FUNC_9(VAR_19 * sizeof(unsigned int));
  FUNC_10(VAR_16, VAR_17, VAR_19 * sizeof(unsigned int));
  VAR_3[VAR_20].utf32nfdi = VAR_16;

  if (VAR_9 > 1)
   FUNC_12(" %X -> %s -> %s V%d_%d_%d\n",
    VAR_11, VAR_1, VAR_2, VAR_12, VAR_13, VAR_14);
  VAR_20++;
 }
 FUNC_4(VAR_10);

 if (VAR_9 > 0)
         FUNC_12("Found %d entries\n", VAR_20);
 if (VAR_20 == 0)
  FUNC_6(VAR_7);
}
