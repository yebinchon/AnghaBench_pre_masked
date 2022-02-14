
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ab8500_gpadc {TYPE_1__* cal_data; } ;
struct TYPE_2__ {int otp_calib_hi; int otp_calib_lo; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

void FUNC_0(struct ab8500_gpadc *VAR_4,
   u16 *VAR_5, u16 *VAR_6, u16 *VAR_7, u16 *VAR_8,
   u16 *VAR_9, u16 *VAR_10, u16 *VAR_11, u16 *VAR_12)
{
 *VAR_5 = VAR_4->cal_data[VAR_3].otp_calib_lo;
 *VAR_6 = VAR_4->cal_data[VAR_3].otp_calib_hi;
 *VAR_7 = VAR_4->cal_data[VAR_0].otp_calib_lo;
 *VAR_8 = VAR_4->cal_data[VAR_0].otp_calib_hi;
 *VAR_9 = VAR_4->cal_data[VAR_2].otp_calib_lo;
 *VAR_10 = VAR_4->cal_data[VAR_2].otp_calib_hi;
 *VAR_11 = VAR_4->cal_data[VAR_1].otp_calib_lo;
 *VAR_12 = VAR_4->cal_data[VAR_1].otp_calib_hi;
}
