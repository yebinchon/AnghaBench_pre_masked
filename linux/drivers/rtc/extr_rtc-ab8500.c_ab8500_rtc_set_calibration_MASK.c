
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int ,int ,int) ;
 int FUNC_1 (struct device*,char*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_3, int VAR_4)
{
 int VAR_5;
 u8 VAR_6 = 0;
 if ((VAR_4 < -127) || (VAR_4 > 127)) {
  FUNC_1(VAR_3, "RtcCalibration value outside permitted range\n");
  return -VAR_2;
 }






 if (VAR_4 >= 0)
  VAR_6 = 0x7F & VAR_4;
 else
  VAR_6 = ~(VAR_4 - 1) | 0x80;

 VAR_5 = FUNC_0(VAR_3, VAR_0,
   VAR_1, VAR_6);

 return VAR_5;
}
