
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_chip {int sd_int; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*,int,int*) ;
 int FUNC_3 (struct rtsx_chip*,int ,int,int) ;

void FUNC_4(struct rtsx_chip *VAR_6)
{
 u8 VAR_7 = 0, VAR_8 = 0;

 FUNC_2(VAR_6, 0xFF34, &VAR_7);
 FUNC_2(VAR_6, 0xFF38, &VAR_8);
 FUNC_0(FUNC_1(VAR_6), "reg 0xFF34: 0x%x, reg 0xFF38: 0x%x\n",
  VAR_7, VAR_8);
 if ((VAR_7 & 0xC0) && (VAR_8 & 0xC0)) {
  VAR_6->sd_int = 1;
  FUNC_3(VAR_6, VAR_5, 0xFF,
        VAR_3 | VAR_4);
  FUNC_3(VAR_6, VAR_2,
        VAR_0, VAR_1);
 }
}
