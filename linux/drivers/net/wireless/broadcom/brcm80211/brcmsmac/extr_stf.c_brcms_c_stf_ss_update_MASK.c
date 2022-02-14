
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct brcms_c_info {int hw; TYPE_1__* stf; struct brcms_band* band; } ;
struct brcms_band {scalar_t__ band_stf_ss_mode; } ;
struct TYPE_2__ {scalar_t__ ss_opmode; scalar_t__ ss_algo_channel; int txstreams; scalar_t__ ss_algosel_auto; } ;


 scalar_t__ FUNC_0 (struct brcms_c_info*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__*,scalar_t__) ;

int FUNC_3(struct brcms_c_info *VAR_2, struct brcms_band *VAR_3)
{
 int VAR_4 = 0;
 u8 VAR_5;
 u8 VAR_6;

 VAR_5 = VAR_2->stf->ss_opmode;





 if (FUNC_0(VAR_2) &&
     VAR_2->stf->ss_algosel_auto
     && (VAR_2->stf->ss_algo_channel != (u16) -1)) {
  VAR_6 = (VAR_2->stf->txstreams == 1 ||
         FUNC_2(&VAR_2->stf->ss_algo_channel,
        VAR_1)) ?
        VAR_1 : VAR_0;
 } else {
  if (VAR_2->band != VAR_3)
   return VAR_4;
  VAR_6 = (VAR_2->stf->txstreams == 1) ?
    VAR_1 : VAR_3->band_stf_ss_mode;
 }
 if (VAR_5 != VAR_6) {
  VAR_2->stf->ss_opmode = VAR_6;
  FUNC_1(VAR_2->hw, VAR_6);
 }

 return VAR_4;
}
