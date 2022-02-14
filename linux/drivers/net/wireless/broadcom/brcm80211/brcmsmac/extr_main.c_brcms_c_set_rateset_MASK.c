
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct brcms_c_rateset {scalar_t__ count; int * mcs; int rates; } ;
struct brcms_c_info {struct brcms_bss_info* default_bss; TYPE_2__* bsscfg; TYPE_1__* pub; } ;
struct TYPE_6__ {int * mcs; } ;
struct brcms_bss_info {TYPE_3__ rateset; } ;
struct brcm_rateset {scalar_t__ count; int rates; } ;
typedef int internal_rs ;
struct TYPE_5__ {struct brcms_bss_info* current_bss; } ;
struct TYPE_4__ {int _n_enab; scalar_t__ associated; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct brcms_c_info*) ;
 int FUNC_1 (struct brcms_c_info*,struct brcms_c_rateset*) ;
 int FUNC_2 (int *,int *,scalar_t__) ;
 int FUNC_3 (struct brcms_c_rateset*,int ,int) ;

int FUNC_4(struct brcms_c_info *VAR_4, struct brcm_rateset *VAR_5)
{
 struct brcms_c_rateset VAR_6;
 int VAR_7;

 if (VAR_5->count > VAR_0)
  return -VAR_1;

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));


 VAR_6.count = VAR_5->count;
 FUNC_2(&VAR_6.rates, &VAR_5->rates, VAR_6.count);


 if (VAR_4->pub->_n_enab & VAR_3) {
  struct brcms_bss_info *VAR_8;
  if (VAR_4->pub->associated)
   VAR_8 = VAR_4->bsscfg->current_bss;
  else
   VAR_8 = VAR_4->default_bss;
  FUNC_2(VAR_6.mcs, &VAR_8->rateset.mcs[0],
         VAR_2);
 }

 VAR_7 = FUNC_1(VAR_4, &VAR_6);
 if (!VAR_7)
  FUNC_0(VAR_4);

 return VAR_7;
}
