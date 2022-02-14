
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {int timeout; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_2)
{
 u32 VAR_3;
 struct watchdog_device *VAR_4 = VAR_2;

 VAR_3 = FUNC_1(VAR_0);
 VAR_3 &= ~VAR_1;
 VAR_3 |= FUNC_0(FUNC_3(VAR_4->timeout));

 FUNC_2(VAR_0, VAR_3);
}
