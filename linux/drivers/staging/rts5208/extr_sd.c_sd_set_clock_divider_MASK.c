
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtsx_chip {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtsx_chip*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct rtsx_chip *VAR_5, u8 VAR_6)
{
 int VAR_7;
 u8 VAR_8 = 0, VAR_9 = 0;

 VAR_8 = 0x60;
 if (VAR_6 == VAR_1)
  VAR_9 = 0x00;
 else if (VAR_6 == VAR_2)
  VAR_9 = 0x40;
 else if (VAR_6 == VAR_3)
  VAR_9 = 0x20;

 VAR_7 = FUNC_0(VAR_5, VAR_0, VAR_8, VAR_9);
 if (VAR_7)
  return VAR_7;

 return VAR_4;
}
