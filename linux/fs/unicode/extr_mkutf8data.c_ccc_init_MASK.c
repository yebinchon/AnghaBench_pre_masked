
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int ccc; } ;
typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char*,char*) ;
 int VAR_3 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ,char*,unsigned int*,unsigned int*,...) ;
 TYPE_1__* VAR_4 ;
 int FUNC_8 (unsigned int) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_9(void)
{
 FILE *VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;
 int VAR_11;
 int VAR_12;

 if (VAR_5 > 0)
  FUNC_6("Parsing %s\n", VAR_1);

 VAR_6 = FUNC_3(VAR_1, "r");
 if (!VAR_6)
  FUNC_5(VAR_1, VAR_2);

 VAR_11 = 0;
 while (FUNC_1(VAR_3, VAR_0, VAR_6)) {
  VAR_12 = FUNC_7(VAR_3, "%X..%X ; %d #", &VAR_7, &VAR_8, &VAR_10);
  if (VAR_12 == 3) {
   for (VAR_9 = VAR_7; VAR_9 <= VAR_8; VAR_9++) {
    VAR_4[VAR_9].ccc = VAR_10;
                                VAR_11++;
   }
   if (VAR_5 > 1)
    FUNC_6(" %X..%X ccc %d\n", VAR_7, VAR_8, VAR_10);
   if (!FUNC_8(VAR_7) || !FUNC_8(VAR_8))
    FUNC_4(VAR_1, VAR_3);
   continue;
  }
  VAR_12 = FUNC_7(VAR_3, "%X ; %d #", &VAR_9, &VAR_10);
  if (VAR_12 == 2) {
   VAR_4[VAR_9].ccc = VAR_10;
                        VAR_11++;
   if (VAR_5 > 1)
    FUNC_6(" %X ccc %d\n", VAR_9, VAR_10);
   if (!FUNC_8(VAR_9))
    FUNC_4(VAR_1, VAR_3);
   continue;
  }
 }
 FUNC_0(VAR_6);

 if (VAR_5 > 0)
  FUNC_6("Found %d entries\n", VAR_11);
 if (VAR_11 == 0)
  FUNC_2(VAR_1);
}
