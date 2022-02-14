
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum dss_rotation { ____Placeholder_dss_rotation } dss_rotation ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(int VAR_5,
   enum dss_rotation *VAR_6, bool VAR_7)
{
 int VAR_8 = 0;

 switch (VAR_5) {
 case 90:
  *VAR_6 = VAR_4;
  break;
 case 180:
  *VAR_6 = VAR_2;
  break;
 case 270:
  *VAR_6 = VAR_3;
  break;
 case 0:
  *VAR_6 = VAR_1;
  break;
 default:
  VAR_8 = -VAR_0;
 }
 return VAR_8;
}
