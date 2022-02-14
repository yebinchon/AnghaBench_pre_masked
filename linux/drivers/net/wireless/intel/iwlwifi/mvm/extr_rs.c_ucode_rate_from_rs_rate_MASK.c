
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rs_rate {int index; int ant; int type; int bw; scalar_t__ ldpc; scalar_t__ sgi; scalar_t__ stbc; } ;
struct iwl_mvm {int dummy; } ;
struct TYPE_2__ {int plcp; int plcp_ht_siso; int plcp_ht_mimo2; int plcp_vht_siso; int plcp_vht_mimo2; } ;


 int FUNC_0 (struct iwl_mvm*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct rs_rate*) ;
 scalar_t__ FUNC_3 (struct rs_rate*) ;
 scalar_t__ FUNC_4 (struct rs_rate*) ;
 scalar_t__ FUNC_5 (struct rs_rate*) ;
 scalar_t__ FUNC_6 (struct rs_rate*) ;
 scalar_t__ FUNC_7 (struct rs_rate*) ;
 scalar_t__ FUNC_8 (struct rs_rate*) ;
 scalar_t__ FUNC_9 (struct rs_rate*) ;
 TYPE_1__* VAR_15 ;

__attribute__((used)) static u32 FUNC_10(struct iwl_mvm *VAR_16,
      struct rs_rate *VAR_17)
{
 u32 VAR_18 = 0;
 int VAR_19 = VAR_17->index;

 VAR_18 |= ((VAR_17->ant << VAR_8) &
    VAR_6);

 if (FUNC_5(VAR_17)) {
  VAR_18 |= VAR_15[VAR_19].plcp;
  if (VAR_19 >= VAR_0 && VAR_19 <= VAR_3)
   VAR_18 |= VAR_9;
  return VAR_18;
 }

 if (FUNC_2(VAR_17)) {
  if (VAR_19 < VAR_1 || VAR_19 > VAR_4) {
   FUNC_0(VAR_16, "Invalid HT rate index %d\n", VAR_19);
   VAR_19 = VAR_4;
  }
  VAR_18 |= VAR_10;

  if (FUNC_4(VAR_17))
   VAR_18 |= VAR_15[VAR_19].plcp_ht_siso;
  else if (FUNC_3(VAR_17))
   VAR_18 |= VAR_15[VAR_19].plcp_ht_mimo2;
  else
   FUNC_1(1);
 } else if (FUNC_7(VAR_17)) {
  if (VAR_19 < VAR_2 || VAR_19 > VAR_5) {
   FUNC_0(VAR_16, "Invalid VHT rate index %d\n", VAR_19);
   VAR_19 = VAR_5;
  }
  VAR_18 |= VAR_14;
  if (FUNC_9(VAR_17))
   VAR_18 |= VAR_15[VAR_19].plcp_vht_siso;
  else if (FUNC_8(VAR_17))
   VAR_18 |= VAR_15[VAR_19].plcp_vht_mimo2;
  else
   FUNC_1(1);

 } else {
  FUNC_0(VAR_16, "Invalid rate->type %d\n", VAR_17->type);
 }

 if (FUNC_6(VAR_17) && VAR_17->stbc) {

  VAR_18 |= VAR_7;
  VAR_18 |= VAR_13;
 }

 VAR_18 |= VAR_17->bw;
 if (VAR_17->sgi)
  VAR_18 |= VAR_12;
 if (VAR_17->ldpc)
  VAR_18 |= VAR_11;

 return VAR_18;
}
