
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct bnx2x_reg_set {int member_1; int member_2; int reg; int val; int const devad; int const member_0; } ;
struct bnx2x_phy {scalar_t__ type; int ver_addr; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x_reg_set*) ;
 int FUNC_1 (int ,char*) ;
 int const VAR_0 ;

 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int const,int,int*) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_phy*,int const,int,int) ;
 scalar_t__ FUNC_4 (struct bnx2x_phy*) ;
 int FUNC_5 (struct bnx2x*,int ,int,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct bnx2x_phy *VAR_3,
         struct bnx2x *VAR_4,
         u8 VAR_5)
{
 u16 VAR_6, VAR_7, VAR_8, VAR_9;
 static struct bnx2x_reg_set VAR_10[] = {
  {128, 0xA819, 0x0014},
  {128, 0xA81A, 0xc200},
  {128, 0xA81B, 0x0000},
  {128, 0xA81C, 0x0300},
  {128, 0xA817, 0x0009}
 };
 u16 VAR_11;

 if (FUNC_4(VAR_3)) {
  FUNC_2(VAR_4, VAR_3, VAR_0, 0x400f, &VAR_11);
  if (VAR_3->type != VAR_2)
   VAR_11 &= 0xfff;
  FUNC_5(VAR_4, VAR_5, VAR_11, VAR_3->ver_addr);
 } else {


  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_10); VAR_9++)
   FUNC_3(VAR_4, VAR_3, VAR_10[VAR_9].devad,
      VAR_10[VAR_9].reg, VAR_10[VAR_9].val);

  for (VAR_8 = 0; VAR_8 < 100; VAR_8++) {
   FUNC_2(VAR_4, VAR_3, 128, 0xA818, &VAR_6);
   if (VAR_6 & 1)
    break;
   FUNC_6(5);
  }
  if (VAR_8 == 100) {
   FUNC_1(VAR_1, "Unable to read 848xx "
     "phy fw version(1)\n");
   FUNC_5(VAR_4, VAR_5, 0,
        VAR_3->ver_addr);
   return;
  }



  FUNC_3(VAR_4, VAR_3, 128, 0xA819, 0x0000);
  FUNC_3(VAR_4, VAR_3, 128, 0xA81A, 0xc200);
  FUNC_3(VAR_4, VAR_3, 128, 0xA817, 0x000A);
  for (VAR_8 = 0; VAR_8 < 100; VAR_8++) {
   FUNC_2(VAR_4, VAR_3, 128, 0xA818, &VAR_6);
   if (VAR_6 & 1)
    break;
   FUNC_6(5);
  }
  if (VAR_8 == 100) {
   FUNC_1(VAR_1, "Unable to read 848xx phy fw "
     "version(2)\n");
   FUNC_5(VAR_4, VAR_5, 0,
        VAR_3->ver_addr);
   return;
  }


  FUNC_2(VAR_4, VAR_3, 128, 0xA81B, &VAR_11);

  FUNC_2(VAR_4, VAR_3, 128, 0xA81C, &VAR_7);

  FUNC_5(VAR_4, VAR_5, (VAR_7<<16) | VAR_11,
       VAR_3->ver_addr);
 }

}
