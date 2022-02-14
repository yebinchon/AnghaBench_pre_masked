
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtw_hal {scalar_t__ current_band_type; } ;
struct rtw_dev {struct rtw_hal hal; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rtw_dev*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct rtw_dev *VAR_4,
            u8 VAR_5, u8 VAR_6)
{
 struct rtw_hal *VAR_7 = &VAR_4->hal;
 u8 VAR_8;


 if (VAR_7->current_band_type == VAR_0)
  VAR_8 = VAR_1;
 else
  VAR_8 = VAR_3;

 for (; VAR_8 < VAR_2; VAR_8++)
  FUNC_0(VAR_4, VAR_5, VAR_6, VAR_8);
}
