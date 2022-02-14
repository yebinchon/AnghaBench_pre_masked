
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtsx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*,int,int *) ;
 int FUNC_3 (struct rtsx_chip*,int) ;
 int FUNC_4 (struct rtsx_chip*,int ,int,int) ;
 int FUNC_5 (struct rtsx_chip*,int ,int ) ;

void FUNC_6(struct rtsx_chip *VAR_7, int VAR_8)
{
 int VAR_9;

 for (VAR_9 = 0; VAR_9 <= 8; VAR_9++) {
  int VAR_10 = VAR_2 + VAR_9 * 4;
  u32 VAR_11;

  VAR_11 = FUNC_3(VAR_7, VAR_10);
  FUNC_0(FUNC_1(VAR_7), "BAR (0x%02x): 0x%08x\n", VAR_10, VAR_11);
 }
 FUNC_5(VAR_7, VAR_3, VAR_5);
 FUNC_5(VAR_7, VAR_4, VAR_6);

 for (VAR_9 = 0; VAR_9 < 16; VAR_9++) {
  u16 VAR_12 = 0xFE20 + (u16)VAR_9;
  u8 VAR_13;

  FUNC_2(VAR_7, VAR_12, &VAR_13);
  FUNC_0(FUNC_1(VAR_7), "0x%04X: 0x%02x\n", VAR_12, VAR_13);
 }

 FUNC_4(VAR_7, VAR_0, 0x80, 0x80);
 FUNC_4(VAR_7, VAR_1, 0x80, 0x80);
}
