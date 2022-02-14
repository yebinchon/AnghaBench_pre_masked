
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backlight_device {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct backlight_device *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;


 VAR_4 = FUNC_1(1, &VAR_5);
 if (VAR_4) {
  FUNC_3("Could not query backlight: %d\n", VAR_4);
  return -VAR_0;
 }
 FUNC_2("Get: Query block returned: %d\n", VAR_5);
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  if (VAR_1[VAR_3] == VAR_5) {
   FUNC_2("Current backlight level: 0x%X - index: %d\n",
     VAR_1[VAR_3], VAR_3);
   break;
  }
 }
 if (VAR_3 == FUNC_0(VAR_1)) {
  FUNC_3("get: Invalid brightness value: 0x%X\n", VAR_5);
  return -VAR_0;
 }
 return VAR_3;
}
