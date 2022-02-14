
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct brcms_c_info {TYPE_2__** bandstate; TYPE_1__* stf; } ;
typedef void* s8 ;
typedef scalar_t__ s32 ;
struct TYPE_4__ {void* band_stf_stbc_tx; } ;
struct TYPE_3__ {int txstreams; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static bool FUNC_0(struct brcms_c_info *VAR_5, s32 VAR_6)
{
 if ((VAR_6 != VAR_0) && (VAR_6 != VAR_3) && (VAR_6 != VAR_4))
  return 0;

 if ((VAR_6 == VAR_4) && (VAR_5->stf->txstreams == 1))
  return 0;

 VAR_5->bandstate[VAR_1]->band_stf_stbc_tx = (s8) VAR_6;
 VAR_5->bandstate[VAR_2]->band_stf_stbc_tx = (s8) VAR_6;

 return 1;
}
