
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct watchdog_device {int timeout; } ;
struct nic7018_wdt {scalar_t__ io_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct watchdog_device*,int ) ;
 int FUNC_2 (int,scalar_t__) ;
 struct nic7018_wdt* FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_5)
{
 struct nic7018_wdt *VAR_6 = FUNC_3(VAR_5);
 u8 VAR_7;

 FUNC_1(VAR_5, VAR_5->timeout);

 VAR_7 = FUNC_0(VAR_6->io_base + VAR_2);
 FUNC_2(VAR_7 | VAR_4, VAR_6->io_base + VAR_2);

 FUNC_2(1, VAR_6->io_base + VAR_3);

 VAR_7 = FUNC_0(VAR_6->io_base + VAR_0);
 FUNC_2(VAR_7 | VAR_1, VAR_6->io_base + VAR_0);

 return 0;
}
