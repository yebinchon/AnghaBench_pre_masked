
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtw_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtw_dev*,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct rtw_dev *VAR_3, u8 VAR_4,
     bool VAR_5)
{
 if (VAR_4 == VAR_0) {
  FUNC_0(VAR_3, VAR_2, 0xf0000000, 0x8);
 } else if (VAR_4 == VAR_1) {
  FUNC_0(VAR_3, VAR_2, 0xf0000000, 0x4);
 } else {
  if (VAR_5)
   FUNC_0(VAR_3, VAR_2, 0xf0000000, 0xc);
  else
   FUNC_0(VAR_3, VAR_2, 0xf0000000, 0x8);
 }
}
