
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r592_device {int dummy; } ;
struct memstick_host {int dummy; } ;
typedef enum memstick_param { ____Placeholder_memstick_param } memstick_param ;


 int VAR_0 ;






 struct r592_device* FUNC_0 (struct memstick_host*) ;
 int FUNC_1 (struct r592_device*,int) ;
 int FUNC_2 (struct r592_device*,int) ;

__attribute__((used)) static int FUNC_3(struct memstick_host *VAR_1,
   enum memstick_param VAR_2, int VAR_3)
{
 struct r592_device *VAR_4 = FUNC_0(VAR_1);

 switch (VAR_2) {
 case 131:
  switch (VAR_3) {
  case 129:
   return FUNC_1(VAR_4, 1);
  case 130:
   return FUNC_1(VAR_4, 0);
  default:
   return -VAR_0;
  }
 case 133:
  switch (VAR_3) {
  case 128:
   return FUNC_2(VAR_4, 0);
  case 132:
   return FUNC_2(VAR_4, 1);
  default:
   return -VAR_0;
  }
 default:
  return -VAR_0;
 }
}
