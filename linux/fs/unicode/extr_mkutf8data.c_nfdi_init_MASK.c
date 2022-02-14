
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* utf32nfdi; } ;
typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int VAR_4 ;
 int FUNC_5 (char*,int ) ;
 unsigned int* FUNC_6 (int) ;
 int FUNC_7 (unsigned int*,unsigned int*,int) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int ,char*,unsigned int*,char*) ;
 unsigned int FUNC_12 (char*,char**,int) ;
 TYPE_1__* VAR_5 ;
 int FUNC_13 (unsigned int) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_14(void)
{
 FILE *VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9[19];
 char *VAR_10;
 char *VAR_11;
 unsigned int *VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;

 if (VAR_6 > 0)
  FUNC_10("Parsing %s\n", VAR_2);
 VAR_7 = FUNC_3(VAR_2, "r");
 if (!VAR_7)
  FUNC_8(VAR_2, VAR_3);

 VAR_13 = 0;
 while (FUNC_1(VAR_4, VAR_0, VAR_7)) {
  VAR_15 = FUNC_11(VAR_4, "%X;%*[^;];%*[^;];%*[^;];%*[^;];%[^;];",
        &VAR_8, VAR_1);
  if (VAR_15 != 2)
   continue;
  if (!FUNC_13(VAR_8))
   FUNC_5(VAR_2, VAR_4);

  VAR_10 = VAR_1;

  if (*VAR_10 == '<') {
   VAR_11 = ++VAR_10;
   while (*++VAR_10 != '>');
   *VAR_10++ = '\0';
   if(FUNC_4(VAR_11))
    continue;
  }

  VAR_14 = 0;
  while (*VAR_10) {
   VAR_9[VAR_14] = FUNC_12(VAR_10, &VAR_10, 16);
   if (!FUNC_13(VAR_9[VAR_14]))
    FUNC_5(VAR_2, VAR_4);
   VAR_14++;
  }
  VAR_9[VAR_14++] = 0;

  VAR_12 = FUNC_6(VAR_14 * sizeof(unsigned int));
  FUNC_7(VAR_12, VAR_9, VAR_14 * sizeof(unsigned int));
  VAR_5[VAR_8].utf32nfdi = VAR_12;

  if (VAR_6 > 1)
   FUNC_9(VAR_8);
  VAR_13++;
 }
 FUNC_0(VAR_7);
 if (VAR_6 > 0)
  FUNC_10("Found %d entries\n", VAR_13);
 if (VAR_13 == 0)
  FUNC_2(VAR_2);
}
