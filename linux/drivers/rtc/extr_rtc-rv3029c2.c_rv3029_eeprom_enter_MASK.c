
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int*) ;
 int FUNC_4 (struct device*,int) ;
 int FUNC_5 (struct device*,int ,int ,int ) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_5)
{
 int VAR_6;
 u8 VAR_7;


 VAR_6 = FUNC_3(VAR_5, &VAR_7);
 if (VAR_6 < 0)
  return VAR_6;
 if (VAR_7 & (VAR_3 | VAR_4)) {



  VAR_7 &= ~VAR_3;
  VAR_7 &= ~VAR_4;
  VAR_6 = FUNC_4(VAR_5, VAR_7);
  if (VAR_6 < 0)
   return VAR_6;
  FUNC_6(1000, 10000);
  VAR_6 = FUNC_3(VAR_5, &VAR_7);
  if (VAR_6 < 0)
   return VAR_6;
  if (VAR_7 & (VAR_3 | VAR_4)) {
   FUNC_0(VAR_5,
    "Supply voltage is too low to safely access the EEPROM.\n");
   return -VAR_0;
  }
 }


 VAR_6 = FUNC_5(VAR_5, VAR_1, VAR_2,
     0);
 if (VAR_6 < 0)
  return VAR_6;


 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 < 0)
  FUNC_2(VAR_5);

 return VAR_6;
}
