
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct brcm_usb_init_params {int family_id; } ;
typedef enum brcm_family_type { ____Placeholder_brcm_family_type } brcm_family_type ;
struct TYPE_2__ {int id; int type; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static enum brcm_family_type FUNC_0(
 struct brcm_usb_init_params *VAR_1)
{
 int VAR_2 = -1;
 u32 VAR_3 = 0;
 u32 VAR_4;
 unsigned int VAR_5;
 u32 VAR_6;

 VAR_6 = VAR_1->family_id & 0xfffffff0;
 VAR_4 = VAR_1->family_id & 0xffffff00;
 for (VAR_5 = 0; VAR_0[VAR_5].id; VAR_5++) {
  if (VAR_6 == VAR_0[VAR_5].id)
   return VAR_0[VAR_5].type;
  if (VAR_4 == (VAR_0[VAR_5].id & 0xffffff00))
   if (VAR_6 > VAR_0[VAR_5].id &&
       VAR_3 < VAR_0[VAR_5].id) {
    VAR_3 = VAR_0[VAR_5].id;
    VAR_2 = VAR_0[VAR_5].type;
   }
 }


 if (VAR_2 == -1)
  return VAR_0[VAR_5].type;
 return VAR_2;
}
