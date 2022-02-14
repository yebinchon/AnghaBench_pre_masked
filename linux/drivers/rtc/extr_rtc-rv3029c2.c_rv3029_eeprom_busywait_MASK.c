
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,int*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2)
{
 int VAR_3, VAR_4;
 u8 VAR_5;

 for (VAR_3 = 100; VAR_3 > 0; VAR_3--) {
  VAR_4 = FUNC_1(VAR_2, &VAR_5);
  if (VAR_4 < 0)
   break;
  if (!(VAR_5 & VAR_1))
   break;
  FUNC_2(1000, 10000);
 }
 if (VAR_3 <= 0) {
  FUNC_0(VAR_2, "EEPROM busy wait timeout.\n");
  return -VAR_0;
 }

 return VAR_4;
}
