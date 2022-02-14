
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct watchdog_device {int dummy; } ;
struct meson_wdt_dev {scalar_t__ wdt_base; TYPE_1__* data; } ;
struct TYPE_2__ {int count_unit; int terminal_count_mask; } ;


 int FUNC_0 (unsigned int,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 struct meson_wdt_dev* FUNC_2 (struct watchdog_device*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct watchdog_device *VAR_1,
         unsigned int VAR_2)
{
 struct meson_wdt_dev *VAR_3 = FUNC_2(VAR_1);
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_3->wdt_base + VAR_0);
 VAR_4 &= ~VAR_3->data->terminal_count_mask;
 VAR_4 |= FUNC_0(VAR_2, VAR_3->data->count_unit);
 FUNC_3(VAR_4, VAR_3->wdt_base + VAR_0);
}
