
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtsx_chip {int product_id; } ;


 scalar_t__ FUNC_0 (struct rtsx_chip*,int) ;
 scalar_t__ FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*,int,int,int*) ;
 int FUNC_5 (struct rtsx_chip*,int,int,int,int) ;
 int FUNC_6 (struct rtsx_chip*,int,int) ;

__attribute__((used)) static void FUNC_7(struct rtsx_chip *VAR_0, u8 VAR_1)
{
 u32 VAR_2;

 FUNC_2(FUNC_3(VAR_0), "%04x set pm_dstate to %d\n",
  VAR_0->product_id, VAR_1);

 if (FUNC_1(VAR_0)) {
  u8 VAR_3;

  if (FUNC_0(VAR_0, 0x5288))
   VAR_3 = 2;
  else
   VAR_3 = 1;

  FUNC_4(VAR_0, VAR_3, 0x84, &VAR_2);
  FUNC_2(FUNC_3(VAR_0), "pm_dstate of function %d: 0x%x\n",
   (int)VAR_3, VAR_2);
  FUNC_5(VAR_0, VAR_3, 0x84, 0xFF, VAR_1);
 }

 FUNC_6(VAR_0, 0x44, VAR_1);
 FUNC_6(VAR_0, 0x45, 0);
}
