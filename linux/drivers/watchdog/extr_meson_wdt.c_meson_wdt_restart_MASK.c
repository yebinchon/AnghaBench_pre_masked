
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct watchdog_device {int dummy; } ;
struct meson_wdt_dev {scalar_t__ wdt_base; TYPE_1__* data; } ;
struct TYPE_2__ {int enable; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 struct meson_wdt_dev* FUNC_1 (struct watchdog_device*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_2,
        unsigned long VAR_3, void *VAR_4)
{
 struct meson_wdt_dev *VAR_5 = FUNC_1(VAR_2);
 u32 VAR_6 = VAR_0;

 VAR_6 |= VAR_5->data->enable;

 while (1) {
  FUNC_2(VAR_6, VAR_5->wdt_base + VAR_1);
  FUNC_0(5);
 }

 return 0;
}
