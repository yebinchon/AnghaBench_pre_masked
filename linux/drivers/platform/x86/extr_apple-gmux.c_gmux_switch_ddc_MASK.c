
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum vga_switcheroo_client_id { ____Placeholder_vga_switcheroo_client_id } vga_switcheroo_client_id ;
struct TYPE_3__ {int switch_state_ddc; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static int FUNC_2(enum vga_switcheroo_client_id VAR_3)
{
 enum vga_switcheroo_client_id VAR_4 =
  VAR_2->switch_state_ddc;

 if (VAR_3 == VAR_4)
  return VAR_3;

 FUNC_1("Switching DDC from %d to %d\n", VAR_4, VAR_3);
 VAR_2->switch_state_ddc = VAR_3;

 if (VAR_3 == VAR_1)
  FUNC_0(VAR_2, VAR_0, 1);
 else
  FUNC_0(VAR_2, VAR_0, 2);

 return VAR_4;
}
