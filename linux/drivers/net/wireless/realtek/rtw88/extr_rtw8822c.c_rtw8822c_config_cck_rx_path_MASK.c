
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtw_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtw_dev*,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct rtw_dev *VAR_5, u8 VAR_6)
{
 if (VAR_6 == VAR_0 || VAR_6 == VAR_2) {
  FUNC_0(VAR_5, VAR_3, 0x00060000, 0x0);
  FUNC_0(VAR_5, VAR_3, 0x00600000, 0x0);
 } else if (VAR_6 == VAR_1) {
  FUNC_0(VAR_5, VAR_3, 0x00600000, 0x1);
  FUNC_0(VAR_5, VAR_3, 0x00060000, 0x1);
 }

 if (VAR_6 == VAR_0)
  FUNC_0(VAR_5, VAR_4, 0x0f000000, 0x0);
 else if (VAR_6 == VAR_2)
  FUNC_0(VAR_5, VAR_4, 0x0f000000, 0x5);
 else if (VAR_6 == VAR_1)
  FUNC_0(VAR_5, VAR_4, 0x0f000000, 0x1);
}
