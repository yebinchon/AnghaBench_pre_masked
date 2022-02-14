
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct btc_coexist {int dummy; } ;
struct TYPE_2__ {scalar_t__ cur_lps; scalar_t__ cur_rpwm; scalar_t__ pre_lps; scalar_t__ pre_rpwm; } ;


 int FUNC_0 (struct btc_coexist*,void*,void*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct btc_coexist *VAR_1,
      bool VAR_2, u8 VAR_3, u8 VAR_4)
{
 VAR_0->cur_lps = VAR_3;
 VAR_0->cur_rpwm = VAR_4;

 if (!VAR_2) {
  if ((VAR_0->pre_lps == VAR_0->cur_lps) &&
      (VAR_0->pre_rpwm == VAR_0->cur_rpwm))
   return;
 }
 FUNC_0(VAR_1, VAR_3, VAR_4);

 VAR_0->pre_lps = VAR_0->cur_lps;
 VAR_0->pre_rpwm = VAR_0->cur_rpwm;
}
