
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char VAR_3 ;
 int* VAR_4 ;
 char* FUNC_0 (int) ;
 scalar_t__* VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_1(void)
{
 char VAR_7 = VAR_3;
 int VAR_8;
 int VAR_9 = VAR_0 - VAR_1 + 1;

 VAR_6 = VAR_5[0] + VAR_2 + 2;
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  char *VAR_10 = FUNC_0(VAR_1 + VAR_8);

  if (VAR_7 == *VAR_10)
   continue;
  VAR_7 = *VAR_10;
  VAR_4[(VAR_7 & 31) - 1] = VAR_8;
 }
 return 0;
}
