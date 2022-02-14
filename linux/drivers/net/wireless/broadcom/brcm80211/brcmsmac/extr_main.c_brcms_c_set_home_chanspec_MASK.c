
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct brcms_c_info {scalar_t__ home_chanspec; TYPE_3__* bsscfg; TYPE_1__* pub; } ;
struct TYPE_6__ {TYPE_2__* current_bss; } ;
struct TYPE_5__ {scalar_t__ chanspec; } ;
struct TYPE_4__ {scalar_t__ associated; } ;



__attribute__((used)) static void FUNC_0(struct brcms_c_info *VAR_0, u16 VAR_1)
{
 if (VAR_0->home_chanspec != VAR_1) {
  VAR_0->home_chanspec = VAR_1;

  if (VAR_0->pub->associated)
   VAR_0->bsscfg->current_bss->chanspec = VAR_1;
 }
}
