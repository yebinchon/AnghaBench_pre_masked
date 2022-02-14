
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static u32 FUNC_1(struct platform_device *VAR_5, u32 VAR_6)
{
 switch (VAR_6) {
 case 100:
  return VAR_0;
 case 66:
  return VAR_4;
 case 50:
  return VAR_3;
 case 40:
  return VAR_2;
 case 33:
  return VAR_1;
 }

 FUNC_0(&VAR_5->dev, "Invalid value %u for drive-impedance-ohm.\n",
   VAR_6);
 return VAR_3;
}
