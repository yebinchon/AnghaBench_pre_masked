
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct xd_info {int addr_cycle; } ;
struct rtsx_chip {struct xd_info xd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int FUNC_0 (struct rtsx_chip*,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct rtsx_chip *VAR_8, u32 VAR_9, u8 VAR_10)
{
 struct xd_info *VAR_11 = &VAR_8->xd_card;

 switch (VAR_10) {
 case 128:
  FUNC_0(VAR_8, VAR_0, VAR_1, 0xFF, 0);
  FUNC_0(VAR_8, VAR_0, VAR_2, 0xFF, (u8)VAR_9);
  FUNC_0(VAR_8, VAR_0, VAR_3,
        0xFF, (u8)(VAR_9 >> 8));
  FUNC_0(VAR_8, VAR_0, VAR_4,
        0xFF, (u8)(VAR_9 >> 16));
  FUNC_0(VAR_8, VAR_0, VAR_7, 0xFF,
        VAR_11->addr_cycle |
        VAR_6 |
        VAR_5);
  break;

 case 129:
  FUNC_0(VAR_8, VAR_0, VAR_1, 0xFF, (u8)VAR_9);
  FUNC_0(VAR_8, VAR_0, VAR_2,
        0xFF, (u8)(VAR_9 >> 8));
  FUNC_0(VAR_8, VAR_0, VAR_3,
        0xFF, (u8)(VAR_9 >> 16));
  FUNC_0(VAR_8, VAR_0, VAR_7, 0xFF,
        (VAR_11->addr_cycle - 1) | VAR_6 |
   VAR_5);
  break;

 default:
  break;
 }
}
