
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum vga_switcheroo_client_id { ____Placeholder_vga_switcheroo_client_id } vga_switcheroo_client_id ;
struct TYPE_3__ {int switch_state_ddc; int switch_state_display; int switch_state_external; scalar_t__ external_switchable; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(enum vga_switcheroo_client_id VAR_1)
{
 VAR_0->switch_state_ddc = VAR_1;
 VAR_0->switch_state_display = VAR_1;
 if (VAR_0->external_switchable)
  VAR_0->switch_state_external = VAR_1;

 FUNC_0(VAR_0);

 return 0;
}
