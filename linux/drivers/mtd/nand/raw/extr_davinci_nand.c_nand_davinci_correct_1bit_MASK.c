
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
struct TYPE_2__ {int size; } ;
struct nand_chip {TYPE_1__ ecc; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct nand_chip *VAR_1, u_char *VAR_2,
         u_char *VAR_3, u_char *VAR_4)
{
 uint32_t VAR_5 = VAR_3[0] | (VAR_3[1] << 8) |
       (VAR_3[2] << 16);
 uint32_t VAR_6 = VAR_4[0] | (VAR_4[1] << 8) |
       (VAR_4[2] << 16);
 uint32_t VAR_7 = VAR_6 ^ VAR_5;

 if (VAR_7) {
  if ((((VAR_7 >> 12) ^ VAR_7) & 0xfff) == 0xfff) {

   if ((VAR_7 >> (12 + 3)) < VAR_1->ecc.size) {
    VAR_2[VAR_7 >> (12 + 3)] ^= FUNC_0((VAR_7 >> 12) & 7);
    return 1;
   } else {
    return -VAR_0;
   }
  } else if (!(VAR_7 & (VAR_7 - 1))) {


   return 1;
  } else {

   return -VAR_0;
  }

 }
 return 0;
}
