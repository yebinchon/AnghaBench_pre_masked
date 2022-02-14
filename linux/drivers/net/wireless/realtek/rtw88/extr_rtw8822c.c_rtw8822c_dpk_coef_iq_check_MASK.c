
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtw_dev {int dummy; } ;



__attribute__((used)) static bool FUNC_0(struct rtw_dev *VAR_0,
           u16 VAR_1, u16 VAR_2)
{
 if (VAR_1 == 0x1000 || VAR_1 == 0x0fff ||
     VAR_2 == 0x1000 || VAR_2 == 0x0fff)
  return 1;
 else
  return 0;
}
