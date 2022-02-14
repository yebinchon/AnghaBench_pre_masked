
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcm_usb_init_params {int selected_family; int family_name; int * usb_reg_bits_map; } ;


 int FUNC_0 (struct brcm_usb_init_params*) ;
 int * VAR_0 ;
 int ** VAR_1 ;

void FUNC_1(struct brcm_usb_init_params *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 VAR_2->selected_family = VAR_3;
 VAR_2->usb_reg_bits_map =
  &VAR_1[VAR_3][0];
 VAR_2->family_name = VAR_0[VAR_3];
}
