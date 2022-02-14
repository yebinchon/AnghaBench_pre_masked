
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum toshiba_iio_accel_chan { ____Placeholder_toshiba_iio_accel_chan } toshiba_iio_accel_chan ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*,int*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(enum toshiba_iio_accel_chan VAR_4)
{
 u32 VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3, &VAR_5, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 switch (VAR_4) {
 case 130:
  return VAR_5 & VAR_0 ?
   -(VAR_5 & VAR_1) : VAR_5 & VAR_1;
 case 129:
  return (VAR_5 >> VAR_2) & VAR_0 ?
   -((VAR_5 >> VAR_2) & VAR_1) :
   (VAR_5 >> VAR_2) & VAR_1;
 case 128:
  return VAR_6 & VAR_0 ?
   -(VAR_6 & VAR_1) : VAR_6 & VAR_1;
 }

 return VAR_7;
}
