
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_c_info {int probe_resp; TYPE_1__* pub; struct brcms_bss_cfg* bsscfg; } ;
struct brcms_bss_cfg {scalar_t__ type; } ;
struct TYPE_2__ {scalar_t__ up; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct brcms_c_info*,struct brcms_bss_cfg*,int ,int) ;

void FUNC_1(struct brcms_c_info *VAR_2, bool VAR_3)
{
 struct brcms_bss_cfg *VAR_4 = VAR_2->bsscfg;


 if (VAR_2->pub->up && (VAR_4->type == VAR_1 ||
        VAR_4->type == VAR_0)) {
  if (!VAR_2->probe_resp)
   return;
  FUNC_0(VAR_2, VAR_4, VAR_2->probe_resp,
           VAR_3);
 }
}
