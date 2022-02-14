
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ef4_nic {int dummy; } ;
typedef enum ef4_led_mode { ____Placeholder_ef4_led_mode } ef4_led_mode ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {int (* set_id_led ) (struct ef4_nic*,int) ;} ;


 TYPE_2__* FUNC_0 (struct ef4_nic*) ;
 int FUNC_1 (struct ef4_nic*,int) ;

__attribute__((used)) static void FUNC_2(struct ef4_nic *VAR_0, enum ef4_led_mode VAR_1)
{
 FUNC_0(VAR_0)->type->set_id_led(VAR_0, VAR_1);
}
