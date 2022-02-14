
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static bool FUNC_4(unsigned long VAR_2, unsigned int VAR_3,
       unsigned int *VAR_4)
{
 if (FUNC_3(VAR_1, VAR_2 + (*VAR_4+5)*VAR_0)) {
  if (!*VAR_4)
   FUNC_1("Waiting for devices to initialise: ");
  *VAR_4 += 5;
  FUNC_0("%us...", VAR_3 - *VAR_4);
  if (*VAR_4 == VAR_3) {
   FUNC_0("\n");
   return 1;
  }
 }

 FUNC_2(VAR_0/10);

 return 0;
}
