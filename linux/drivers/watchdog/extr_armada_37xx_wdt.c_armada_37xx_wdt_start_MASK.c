
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct armada_37xx_watchdog {int timeout; int cpu_misc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct armada_37xx_watchdog*,int ) ;
 int FUNC_1 (struct armada_37xx_watchdog*,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct armada_37xx_watchdog*,int ,int ) ;
 struct armada_37xx_watchdog* FUNC_4 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_5(struct watchdog_device *VAR_7)
{
 struct armada_37xx_watchdog *VAR_8 = FUNC_4(VAR_7);


 FUNC_2(VAR_8->cpu_misc, VAR_5, VAR_6);


 FUNC_1(VAR_8, VAR_3, VAR_1, 0);
 FUNC_3(VAR_8, VAR_3, 0);


 FUNC_1(VAR_8, VAR_4, VAR_0,
       VAR_2);
 FUNC_3(VAR_8, VAR_4, VAR_8->timeout);


 FUNC_0(VAR_8, VAR_4);


 FUNC_0(VAR_8, VAR_3);

 return 0;
}
