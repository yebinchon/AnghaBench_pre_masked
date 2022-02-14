
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtw_dev {TYPE_1__* chip; } ;
struct TYPE_2__ {scalar_t__ is_pwr_by_rate_dec; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static u8 FUNC_1(struct rtw_dev *VAR_0, u32 VAR_1, u8 VAR_2)
{
 if (VAR_0->chip->is_pwr_by_rate_dec)
  return FUNC_0(VAR_1, VAR_2);

 return (VAR_1 >> (VAR_2 * 8)) & 0xFF;
}
