
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef int u32 ;
struct adapter {int dummy; } ;


 char* FUNC_0 (char*) ;
 size_t FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_0, char *VAR_1)
{
 u32 VAR_2 = 0, VAR_3 = 0;
 u8 VAR_4[95] = {0};
 u8 VAR_5;
 char *VAR_6, *VAR_7;



 for (VAR_2 = 0; VAR_2 < 95; ++VAR_2)
  VAR_4[VAR_2] = (u8) (94 - VAR_2);

 VAR_7 = VAR_1;
 VAR_2 = 0;
 for (VAR_6 = FUNC_0(VAR_7); VAR_6 != ((void*)0); VAR_6 = FUNC_0(VAR_7)) {


  for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_6); ++VAR_3) {
   VAR_5 = VAR_6[VAR_3];

   if (VAR_5 == '\0')
    break;

   VAR_5 -= (u8) ((((VAR_2 + VAR_3) * 3) % 128));

   VAR_6[VAR_3] = VAR_4[VAR_5 - 32] + 32;
  }

  if (FUNC_1(VAR_6) != 0)
   VAR_2++;
  VAR_6[FUNC_1(VAR_6)] = '\n';
 }
}
