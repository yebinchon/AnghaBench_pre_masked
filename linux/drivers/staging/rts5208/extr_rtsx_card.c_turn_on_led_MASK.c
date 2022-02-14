
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_chip {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtsx_chip*,int) ;
 int FUNC_1 (struct rtsx_chip*,int ,int,int) ;

void FUNC_2(struct rtsx_chip *VAR_1, u8 VAR_2)
{
 if (FUNC_0(VAR_1, 0x5288))
  FUNC_1(VAR_1, VAR_0, (u8)(1 << VAR_2),
        (u8)(1 << VAR_2));
 else
  FUNC_1(VAR_1, VAR_0, (u8)(1 << VAR_2), 0);
}
