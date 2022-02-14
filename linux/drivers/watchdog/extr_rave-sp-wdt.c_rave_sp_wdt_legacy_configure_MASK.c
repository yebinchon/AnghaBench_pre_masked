
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct watchdog_device {int timeout; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (struct watchdog_device*,int*,int) ;

__attribute__((used)) static int FUNC_1(struct watchdog_device *VAR_1, bool VAR_2)
{
 u8 VAR_3[] = {
  [0] = VAR_0,
  [1] = 0,
  [2] = 0,
  [3] = VAR_2,
  [4] = VAR_2 ? VAR_1->timeout : 0,
 };

 return FUNC_0(VAR_1, VAR_3, sizeof(VAR_3));
}
