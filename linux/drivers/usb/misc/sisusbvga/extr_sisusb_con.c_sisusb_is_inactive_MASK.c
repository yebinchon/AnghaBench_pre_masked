
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {scalar_t__ vc_mode; } ;
struct sisusb_usb_data {scalar_t__ textmodedestroyed; scalar_t__ is_gfx; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct vc_data *VAR_1, struct sisusb_usb_data *VAR_2)
{
 if (VAR_2->is_gfx ||
     VAR_2->textmodedestroyed ||
     VAR_1->vc_mode != VAR_0)
  return 1;

 return 0;
}
