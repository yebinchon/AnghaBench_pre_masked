
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* utf32nfdicf; } ;
typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (char*) ;
 char* VAR_3 ;
 int * FUNC_3 (char*,char*) ;
 int VAR_4 ;
 int FUNC_4 (char*,int ) ;
 unsigned int* FUNC_5 (int) ;
 int FUNC_6 (unsigned int*,unsigned int*,int) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int ,char*,unsigned int*,char*,char*) ;
 unsigned int FUNC_11 (char*,char**,int) ;
 TYPE_1__* VAR_5 ;
 int FUNC_12 (unsigned int) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_13(void)
{
 FILE *VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9[19];
 char VAR_10;
 char *VAR_11;
 unsigned int *VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;

 if (VAR_6 > 0)
  FUNC_9("Parsing %s\n", VAR_3);
 VAR_7 = FUNC_3(VAR_3, "r");
 if (!VAR_7)
  FUNC_7(VAR_3, VAR_2);

 VAR_14 = 0;
 while (FUNC_1(VAR_4, VAR_0, VAR_7)) {
  VAR_15 = FUNC_10(VAR_4, "%X; %c; %[^;];", &VAR_8, &VAR_10, VAR_1);
  if (VAR_15 != 3)
   continue;
  if (!FUNC_12(VAR_8))
   FUNC_4(VAR_3, VAR_4);

  if (VAR_10 != 'C' && VAR_10 != 'F')
   continue;
  VAR_11 = VAR_1;
  if (*VAR_11 == '<')
   while (*VAR_11++ != ' ')
    ;
  VAR_13 = 0;
  while (*VAR_11) {
   VAR_9[VAR_13] = FUNC_11(VAR_11, &VAR_11, 16);
   if (!FUNC_12(VAR_9[VAR_13]))
    FUNC_4(VAR_3, VAR_4);
   VAR_13++;
  }
  VAR_9[VAR_13++] = 0;

  VAR_12 = FUNC_5(VAR_13 * sizeof(unsigned int));
  FUNC_6(VAR_12, VAR_9, VAR_13 * sizeof(unsigned int));
  VAR_5[VAR_8].utf32nfdicf = VAR_12;

  if (VAR_6 > 1)
   FUNC_8(VAR_8);
  VAR_14++;
 }
 FUNC_0(VAR_7);
 if (VAR_6 > 0)
  FUNC_9("Found %d entries\n", VAR_14);
 if (VAR_14 == 0)
  FUNC_2(VAR_3);
}
