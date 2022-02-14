
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct watchdog_device {int timeout; } ;
struct nic7018_wdt {int period; scalar_t__ io_base; } ;
struct nic7018_config {int divider; int period; } ;


 scalar_t__ VAR_0 ;
 struct nic7018_config* FUNC_0 (unsigned int,int*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,scalar_t__) ;
 struct nic7018_wdt* FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_1,
          unsigned int VAR_2)
{
 struct nic7018_wdt *VAR_3 = FUNC_3(VAR_1);
 const struct nic7018_config *VAR_4;
 u8 VAR_5;

 VAR_4 = FUNC_0(VAR_2, &VAR_5);

 FUNC_2(VAR_5 << 4 | VAR_4->divider,
      VAR_3->io_base + VAR_0);

 VAR_1->timeout = FUNC_1(VAR_4->period, VAR_5);
 VAR_3->period = VAR_4->period;

 return 0;
}
