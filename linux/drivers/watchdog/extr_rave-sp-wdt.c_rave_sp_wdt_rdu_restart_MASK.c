
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct watchdog_device {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct watchdog_device*,int*,int) ;

__attribute__((used)) static int FUNC_1(struct watchdog_device *VAR_3)
{
 u8 VAR_4[] = {
  [0] = VAR_0,
  [1] = 0,
  [2] = VAR_1,
  [3] = VAR_2
 };

 return FUNC_0(VAR_3, VAR_4, sizeof(VAR_4));
}
