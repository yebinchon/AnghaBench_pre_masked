
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;


 int FUNC_0 (unsigned char*) ;
 unsigned char FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (unsigned char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, u8 *VAR_1)
{
 if (VAR_0) {
  unsigned VAR_2;

  for (VAR_2 = 0; VAR_2 < 6; VAR_2++) {
   unsigned char VAR_3;

   if ((*VAR_0 == '.') || (*VAR_0 == ':'))
    VAR_0++;
   VAR_3 = FUNC_1(*VAR_0++) << 4;
   VAR_3 |= FUNC_1(*VAR_0++);
   VAR_1 [VAR_2] = VAR_3;
  }
  if (FUNC_2(VAR_1))
   return 0;
 }
 FUNC_0(VAR_1);
 return 1;
}
