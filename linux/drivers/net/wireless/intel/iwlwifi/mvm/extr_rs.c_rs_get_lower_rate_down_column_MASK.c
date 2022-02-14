
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rs_rate {size_t index; int ldpc; int sgi; int ant; int type; int bw; } ;
struct iwl_mvm {int dummy; } ;
struct TYPE_2__ {struct iwl_mvm* drv; } ;
struct iwl_lq_sta {scalar_t__ band; TYPE_1__ pers; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct rs_rate*) ;
 scalar_t__ FUNC_3 (struct rs_rate*) ;
 scalar_t__ FUNC_4 (struct rs_rate*) ;
 int FUNC_5 (struct iwl_mvm*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct iwl_lq_sta*,struct rs_rate*) ;
 size_t* VAR_8 ;
 int FUNC_8 (struct iwl_lq_sta*,struct rs_rate*) ;

__attribute__((used)) static void FUNC_9(struct iwl_lq_sta *VAR_9,
       struct rs_rate *VAR_10)
{
 struct iwl_mvm *VAR_11 = VAR_9->pers.drv;

 if (FUNC_2(VAR_10)) {

  return;
 } else if (FUNC_3(VAR_10)) {

  if (VAR_9->band == VAR_6)
   VAR_10->type = VAR_3;
  else
   VAR_10->type = VAR_4;

  VAR_10->bw = VAR_7;

  FUNC_0(VAR_10->index < VAR_0 ||
        VAR_10->index > VAR_1);

  VAR_10->index = VAR_8[VAR_10->index];
  VAR_10->ldpc = 0;
 } else {

  VAR_10->type = FUNC_4(VAR_10) ?
   VAR_5 : VAR_2;
 }

 if (FUNC_6(VAR_10->ant) > 1)
  VAR_10->ant = FUNC_1(FUNC_5(VAR_11));


 VAR_10->sgi = 0;

 if (!FUNC_8(VAR_9, VAR_10))
  FUNC_7(VAR_9, VAR_10);
}
