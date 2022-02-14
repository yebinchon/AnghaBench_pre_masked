
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct watchdog_device {int dummy; } ;
struct TYPE_3__ {int timeout; } ;
struct meson_wdt_dev {scalar_t__ wdt_base; TYPE_2__* data; TYPE_1__ wdt_dev; } ;
struct TYPE_4__ {int enable; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct watchdog_device*,int ) ;
 int FUNC_1 (struct watchdog_device*) ;
 int FUNC_2 (scalar_t__) ;
 struct meson_wdt_dev* FUNC_3 (struct watchdog_device*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct watchdog_device *VAR_1)
{
 struct meson_wdt_dev *VAR_2 = FUNC_3(VAR_1);
 u32 VAR_3;

 FUNC_0(VAR_1, VAR_2->wdt_dev.timeout);
 FUNC_1(VAR_1);

 VAR_3 = FUNC_2(VAR_2->wdt_base + VAR_0);
 VAR_3 |= VAR_2->data->enable;
 FUNC_4(VAR_3, VAR_2->wdt_base + VAR_0);

 return 0;
}
