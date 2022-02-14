
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,unsigned char) ;

__attribute__((used)) static void FUNC_2(int VAR_7, int VAR_8, int VAR_9)
{
 unsigned char VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 unsigned long VAR_15 = 0;
 unsigned long VAR_16;

 VAR_16 = VAR_8 * (VAR_9 >> 3);
 if (VAR_16 & 0x1F) {
  VAR_15 = ((VAR_16 + 31) & ~31) >> 3;
  if (VAR_7 == VAR_5) {
   if (VAR_9 > 8) {
    VAR_13 = (unsigned char)(VAR_15 & 0xFF);
    FUNC_1(VAR_3, VAR_6, VAR_13);
    VAR_14 = FUNC_0(VAR_6, VAR_4) & 0xFC;
    VAR_14 |=
        (unsigned
         char)((VAR_15 & 0x300) >> 8);
    FUNC_1(VAR_4, VAR_6, VAR_14);
   }


   VAR_14 = FUNC_0(VAR_6, VAR_4) & 0xF3;
   VAR_14 |= (unsigned char)((VAR_15 & 0x600) >> 7);
   FUNC_1(VAR_4, VAR_6, VAR_14);
   VAR_12 = (unsigned char)((VAR_15 >> 1) & 0xFF);
   VAR_12 += 2;
   FUNC_1(VAR_2, VAR_6, VAR_12);
  } else {
   if (VAR_9 > 8) {
    VAR_10 = (unsigned char)(VAR_15 & 0xFF);
    FUNC_1(VAR_0, VAR_6, VAR_10);
    VAR_11 = FUNC_0(VAR_6, VAR_1) & 0x1F;
    VAR_11 |=
        (unsigned
         char)((VAR_15 & 0x700) >> 3);
    FUNC_1(VAR_1, VAR_6, VAR_11);
   }
  }
 }
}
