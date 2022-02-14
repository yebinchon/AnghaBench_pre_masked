
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gen; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int,unsigned int,unsigned int) ;
 char* VAR_2 ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int) ;
 unsigned int* VAR_3 ;
 int VAR_4 ;
 unsigned int* FUNC_2 (int,int) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (char*) ;
 int * FUNC_6 (char*,char*) ;
 int VAR_6 ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,char*,unsigned int*,unsigned int*,...) ;
 TYPE_1__* VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_12 (unsigned int) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_13(void)
{
 FILE *VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;

 if (VAR_9 > 0)
  FUNC_9("Parsing %s\n", VAR_2);

 VAR_10 = FUNC_6(VAR_2, "r");
 if (!VAR_10)
  FUNC_8(VAR_2, VAR_5);
 VAR_18 = 0;

 VAR_17 = 0;
 while (FUNC_4(VAR_6, VAR_0, VAR_10)) {
  VAR_19 = FUNC_11(VAR_6, "# Age=V%d_%d_%d",
    &VAR_14, &VAR_15, &VAR_16);
  if (VAR_19 == 3) {
   VAR_4++;
   if (VAR_9 > 1)
    FUNC_9(" Age V%d_%d_%d\n",
     VAR_14, VAR_15, VAR_16);
   if (!FUNC_1(VAR_14, VAR_15, VAR_16))
    FUNC_7(VAR_2, VAR_6);
   continue;
  }
  VAR_19 = FUNC_11(VAR_6, "# Age=V%d_%d", &VAR_14, &VAR_15);
  if (VAR_19 == 2) {
   VAR_4++;
   if (VAR_9 > 1)
    FUNC_9(" Age V%d_%d\n", VAR_14, VAR_15);
   if (!FUNC_1(VAR_14, VAR_15, 0))
    FUNC_7(VAR_2, VAR_6);
   continue;
  }
 }


 if (VAR_9 > 1)
  FUNC_9("%d age entries\n", VAR_4);
 if (VAR_4 == 0 || VAR_4 > VAR_1)
  FUNC_5(VAR_2);


 VAR_4++;
 VAR_3 = FUNC_2(VAR_4 + 1, sizeof(*VAR_3));

 VAR_3[VAR_4] = (unsigned int)-1;

 FUNC_10(VAR_10);
 VAR_18 = 0;
 VAR_17 = 0;
 while (FUNC_4(VAR_6, VAR_0, VAR_10)) {
  VAR_19 = FUNC_11(VAR_6, "# Age=V%d_%d_%d",
    &VAR_14, &VAR_15, &VAR_16);
  if (VAR_19 == 3) {
   VAR_3[++VAR_17] =
    FUNC_0(VAR_14, VAR_15, VAR_16);
   if (VAR_9 > 1)
    FUNC_9(" Age V%d_%d_%d = gen %d\n",
     VAR_14, VAR_15, VAR_16, VAR_17);
   if (!FUNC_1(VAR_14, VAR_15, VAR_16))
    FUNC_7(VAR_2, VAR_6);
   continue;
  }
  VAR_19 = FUNC_11(VAR_6, "# Age=V%d_%d", &VAR_14, &VAR_15);
  if (VAR_19 == 2) {
   VAR_3[++VAR_17] = FUNC_0(VAR_14, VAR_15, 0);
   if (VAR_9 > 1)
    FUNC_9(" Age V%d_%d = %d\n",
     VAR_14, VAR_15, VAR_17);
   if (!FUNC_1(VAR_14, VAR_15, 0))
    FUNC_7(VAR_2, VAR_6);
   continue;
  }
  VAR_19 = FUNC_11(VAR_6, "%X..%X ; %d.%d #",
        &VAR_11, &VAR_12, &VAR_14, &VAR_15);
  if (VAR_19 == 4) {
   for (VAR_13 = VAR_11; VAR_13 <= VAR_12; VAR_13++)
    VAR_7[VAR_13].gen = VAR_17;
   VAR_18 += 1 + VAR_12 - VAR_11;
   if (VAR_9 > 1)
    FUNC_9("  %X..%X gen %d\n", VAR_11, VAR_12, VAR_17);
   if (!FUNC_12(VAR_11) || !FUNC_12(VAR_12))
    FUNC_7(VAR_2, VAR_6);
   continue;
  }
  VAR_19 = FUNC_11(VAR_6, "%X ; %d.%d #", &VAR_13, &VAR_14, &VAR_15);
  if (VAR_19 == 3) {
   VAR_7[VAR_13].gen = VAR_17;
   VAR_18++;
   if (VAR_9 > 1)
    FUNC_9("  %X gen %d\n", VAR_13, VAR_17);
   if (!FUNC_12(VAR_13))
    FUNC_7(VAR_2, VAR_6);
   continue;
  }
 }
 VAR_8 = VAR_3[VAR_17];
 FUNC_3(VAR_10);


 if (VAR_9 > 1)
  FUNC_9(" Removing surrogate block D800..DFFF\n");
 for (VAR_13 = 0xd800; VAR_13 <= 0xdfff; VAR_13++)
  VAR_7[VAR_13].gen = -1;

 if (VAR_9 > 0)
         FUNC_9("Found %d entries\n", VAR_18);
 if (VAR_18 == 0)
  FUNC_5(VAR_2);
}
