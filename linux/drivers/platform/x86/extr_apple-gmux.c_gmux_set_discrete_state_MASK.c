
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apple_gmux_data {int power_state; scalar_t__ gpe; int powerchange_done; } ;
typedef enum vga_switcheroo_state { ____Placeholder_vga_switcheroo_state } vga_switcheroo_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct apple_gmux_data*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct apple_gmux_data *VAR_2,
       enum vga_switcheroo_state VAR_3)
{
 FUNC_4(&VAR_2->powerchange_done);

 if (VAR_3 == VAR_1) {
  FUNC_0(VAR_2, VAR_0, 1);
  FUNC_0(VAR_2, VAR_0, 3);
  FUNC_2("Discrete card powered up\n");
 } else {
  FUNC_0(VAR_2, VAR_0, 1);
  FUNC_0(VAR_2, VAR_0, 0);
  FUNC_2("Discrete card powered down\n");
 }

 VAR_2->power_state = VAR_3;

 if (VAR_2->gpe >= 0 &&
     !FUNC_5(&VAR_2->powerchange_done,
             FUNC_1(200)))
  FUNC_3("Timeout waiting for gmux switch to complete\n");

 return 0;
}
