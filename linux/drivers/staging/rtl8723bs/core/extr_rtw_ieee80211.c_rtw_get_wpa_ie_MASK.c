
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wpa_oui_type ;
typedef int val16 ;
typedef unsigned char u8 ;
typedef int u16 ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned char*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;
 unsigned char* FUNC_3 (unsigned char*,int ,int*,int) ;

unsigned char *FUNC_4(unsigned char *VAR_1, int *VAR_2, int VAR_3)
{
 int VAR_4;
 u16 VAR_5;
 unsigned char VAR_6[] = {0x00, 0x50, 0xf2, 0x01};
 u8 *VAR_7 = VAR_1;
 int VAR_8 = VAR_3;
 __le16 VAR_9;

 while (1) {
  VAR_7 = FUNC_3(VAR_7, VAR_0, &VAR_4, VAR_8);

  if (VAR_7) {

   if (FUNC_1((VAR_7 + 2), VAR_6, sizeof(VAR_6))) {
    goto check_next_ie;
   }


   FUNC_2((u8 *)&VAR_9, (VAR_7 + 6), sizeof(VAR_5));

   VAR_5 = FUNC_0(VAR_9);
   if (VAR_5 != 0x0001)
    goto check_next_ie;

   *VAR_2 = *(VAR_7 + 1);

   return VAR_7;

  } else {
   *VAR_2 = 0;
   return ((void*)0);
  }

check_next_ie:

  VAR_8 = VAR_3 - (VAR_7 - VAR_1) - 2 - VAR_4;

  if (VAR_8 <= 0)
   break;

  VAR_7 += (2 + VAR_4);
 }

 *VAR_2 = 0;

 return ((void*)0);
}
