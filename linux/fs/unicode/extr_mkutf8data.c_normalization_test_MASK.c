
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unicode_data {int * utf8nfdi; } ;
typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int ,int *) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char*,char*) ;
 char* VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,char*,char*,char*) ;
 unsigned int FUNC_8 (char*,char**,int) ;
 char* VAR_8 ;
 struct unicode_data* VAR_9 ;
 int FUNC_9 (char*,unsigned int) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void FUNC_10(void)
{
 FILE *VAR_11;
 unsigned int VAR_12;
 struct unicode_data *VAR_13;
 char *VAR_14;
 char *VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18 = 0;
 int VAR_19 = 0;

 if (VAR_10 > 0)
  FUNC_6("Parsing %s\n", VAR_8);

 VAR_11 = FUNC_3(VAR_8, "r");
 if (!VAR_11)
  FUNC_5(VAR_8, VAR_5);

 while (FUNC_1(VAR_6, VAR_0, VAR_11)) {
  VAR_16 = FUNC_7(VAR_6, "%[^;];%*[^;];%[^;];%*[^;];%*[^;];",
        VAR_1, VAR_2);
  if (VAR_16 != 2 || *VAR_6 == '#')
   continue;
  VAR_14 = VAR_1;
  VAR_15 = VAR_3;
  while (*VAR_14) {
   VAR_12 = FUNC_8(VAR_14, &VAR_14, 16);
   VAR_15 += FUNC_9(VAR_15, VAR_12);
  }
  *VAR_15 = '\0';

  VAR_17 = 0;
  VAR_14 = VAR_2;
  VAR_15 = VAR_4;
  while (*VAR_14) {
   VAR_12 = FUNC_8(VAR_14, &VAR_14, 16);
   VAR_13 = &VAR_9[VAR_12];
   if (VAR_13->utf8nfdi && !*VAR_13->utf8nfdi)
    VAR_17 = 1;
   else
    VAR_15 += FUNC_9(VAR_15, VAR_12);
  }
  *VAR_15 = '\0';

  VAR_18++;
  if (FUNC_4(VAR_7) < 0) {
   FUNC_6("Line %s -> %s", VAR_1, VAR_2);
   if (VAR_17)
    FUNC_6(" (ignorables removed)");
   FUNC_6(" failure\n");
   VAR_19++;
  }
 }
 FUNC_0(VAR_11);
 if (VAR_10 > 0)
  FUNC_6("Ran %d tests with %d failures\n", VAR_18, VAR_19);
 if (VAR_19)
  FUNC_2(VAR_8);
}
