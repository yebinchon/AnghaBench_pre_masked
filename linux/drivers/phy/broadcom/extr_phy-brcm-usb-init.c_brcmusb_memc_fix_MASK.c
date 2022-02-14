
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcm_usb_init_params {scalar_t__ selected_family; int product_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct brcm_usb_init_params*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct brcm_usb_init_params *VAR_3)
{
 u32 VAR_4;

 if (VAR_3->selected_family != VAR_0)
  return;
 VAR_4 = VAR_3->product_id & 0xfffff000;
 switch (VAR_4) {
 case 0x72520000:
 case 0x74480000:
 case 0x74490000:
 case 0x07252000:
 case 0x07448000:
 case 0x07449000:
  FUNC_0(VAR_3, VAR_2, VAR_1);
 }
}
