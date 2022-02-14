
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wpa_oui_type ;
typedef int val16 ;
typedef int uint ;
typedef unsigned char u8 ;
typedef int u16 ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned char*,unsigned char const*,int) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;
 unsigned char* FUNC_3 (unsigned char*,int ,int*,int) ;

unsigned char *FUNC_4(unsigned char *VAR_1, uint *VAR_2, int VAR_3)
{
 uint VAR_4;
 u16 VAR_5;
 __le16 VAR_6;
 static const unsigned char VAR_7[] = {0x00, 0x50, 0xf2, 0x01};
 u8 *VAR_8 = VAR_1;
 int VAR_9 = VAR_3;

 while (1) {
  VAR_8 = FUNC_3(VAR_8, VAR_0, &VAR_4, VAR_9);

  if (VAR_8) {

   if (FUNC_1((VAR_8 + 2), VAR_7, sizeof(VAR_7)))
    goto check_next_ie;


   FUNC_2((u8 *)&VAR_6, (VAR_8 + 6), sizeof(VAR_5));

   VAR_5 = FUNC_0(VAR_6);
   if (VAR_5 != 0x0001)
    goto check_next_ie;
   *VAR_2 = *(VAR_8 + 1);
   return VAR_8;
  } else {
   *VAR_2 = 0;
   return ((void*)0);
  }

check_next_ie:
  VAR_9 = VAR_3 - (VAR_8 - VAR_1) - 2 - VAR_4;
  if (VAR_9 <= 0)
   break;
  VAR_8 += (2 + VAR_4);
 }
 *VAR_2 = 0;
 return ((void*)0);
}
