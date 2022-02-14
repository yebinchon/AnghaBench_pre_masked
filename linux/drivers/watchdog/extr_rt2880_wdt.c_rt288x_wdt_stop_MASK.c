
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_2)
{
 u32 VAR_3;

 FUNC_0(VAR_2);

 VAR_3 = FUNC_1(VAR_0);
 VAR_3 &= ~VAR_1;
 FUNC_2(VAR_0, VAR_3);

 return 0;
}
