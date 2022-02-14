
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {unsigned short SiS_CRT1Mode; } ;


 int FUNC_0 (struct SiS_Private*,unsigned short) ;
 int FUNC_1 (struct SiS_Private*) ;
 unsigned short FUNC_2 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_3 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_4 (struct SiS_Private*) ;
 int FUNC_5 (struct SiS_Private*,unsigned short) ;
 int FUNC_6 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_7 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_8 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_9 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_10 (struct SiS_Private*,unsigned short) ;
 int FUNC_11 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_12 (struct SiS_Private*,unsigned short) ;
 int FUNC_13 (struct SiS_Private*,unsigned short) ;
 int FUNC_14 (struct SiS_Private*,unsigned short) ;
 int FUNC_15 (struct SiS_Private*,unsigned short) ;

__attribute__((used)) static void
FUNC_16(struct SiS_Private *VAR_0, unsigned short VAR_1,
   unsigned short VAR_2)
{
 unsigned short VAR_3, VAR_4;

 VAR_0->SiS_CRT1Mode = VAR_1;

 if (VAR_1 <= 0x13)
  VAR_3 = 0;
 else
  VAR_3 = 1;

 FUNC_4(VAR_0);
 FUNC_15(VAR_0, VAR_3);
 FUNC_14(VAR_0, VAR_3);
 FUNC_12(VAR_0, VAR_3);
 FUNC_5(VAR_0, VAR_3);
 FUNC_13(VAR_0, VAR_3);
 FUNC_0(VAR_0, VAR_1);

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);

 if (VAR_4 != 0xFFFF) {
  FUNC_10(VAR_0, VAR_4);
  FUNC_6(VAR_0, VAR_1, VAR_2, VAR_4);
  FUNC_9(VAR_0, VAR_1, VAR_2, VAR_4);
  FUNC_11(VAR_0, VAR_1, VAR_4);
 }

 FUNC_7(VAR_0, VAR_1, VAR_2);

 FUNC_8(VAR_0, VAR_1, VAR_2, VAR_4);

 FUNC_3(VAR_0, VAR_1, VAR_2);

 FUNC_1(VAR_0);
}
