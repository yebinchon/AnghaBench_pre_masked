
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bootstatus; } ;
struct menf21bmc_wdt {TYPE_1__ wdt; int i2c_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct menf21bmc_wdt *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5->i2c_client, VAR_0);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_6 == 0x02)
  VAR_5->wdt.bootstatus |= VAR_1;
 else if (VAR_6 == 0x05)
  VAR_5->wdt.bootstatus |= VAR_2;
 else if (VAR_6 == 0x06)
  VAR_5->wdt.bootstatus |= VAR_3;
 else if (VAR_6 == 0x0A)
  VAR_5->wdt.bootstatus |= VAR_4;

 return 0;
}
