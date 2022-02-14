
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath6kl {scalar_t__ fw_capabilities; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,size_t,char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,size_t) ;

__attribute__((used)) static void FUNC_5(struct ath6kl *VAR_1, char *VAR_2, size_t VAR_3)
{
 u8 *VAR_4 = (u8 *) VAR_1->fw_capabilities;
 size_t VAR_5, VAR_6 = 0;
 int VAR_7, VAR_8, VAR_9;
 char *VAR_10 = "...";

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_8 = VAR_7 / 8;
  VAR_9 = VAR_7 % 8;

  if (VAR_8 >= sizeof(VAR_1->fw_capabilities) * 4)
   break;

  if (VAR_3 - VAR_6 < 4) {
   FUNC_1("firmware capability buffer too small!\n");


   VAR_5 = FUNC_3(VAR_10) + 1;
   FUNC_4(VAR_2 + VAR_3 - VAR_5, VAR_10, VAR_5);

   return;
  }

  if (VAR_4[VAR_8] & (1 << VAR_9)) {
   VAR_6 += FUNC_2(VAR_2 + VAR_6, VAR_3 - VAR_6, "%s,",
         FUNC_0(VAR_7));
  }
 }


 if (VAR_6 > 0)
  VAR_6--;

 VAR_2[VAR_6] = '\0';
}
