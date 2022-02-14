
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_c_info {int beacon_dtim_period; int beacon_tim_offset; int beacon; int defmacintmask; TYPE_1__* pub; struct brcms_bss_cfg* bsscfg; } ;
struct brcms_bss_cfg {scalar_t__ type; } ;
struct TYPE_2__ {scalar_t__ up; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct brcms_c_info*,int ,int ,int ) ;

void FUNC_1(struct brcms_c_info *VAR_3)
{
 struct brcms_bss_cfg *VAR_4 = VAR_3->bsscfg;

 if (VAR_3->pub->up && (VAR_4->type == VAR_1 ||
        VAR_4->type == VAR_0)) {

  VAR_3->defmacintmask &= ~VAR_2;
  if (!VAR_3->beacon)
   return;
  FUNC_0(VAR_3, VAR_3->beacon,
      VAR_3->beacon_tim_offset,
      VAR_3->beacon_dtim_period);
 }
}
