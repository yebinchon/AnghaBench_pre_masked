
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptp_dte {scalar_t__ ts_ovf_last; int regs; scalar_t__ ts_wrap_cnt; } ;
typedef scalar_t__ s64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ptp_dte *VAR_3, s64 VAR_4)
{
 s64 VAR_5;

 VAR_5 = FUNC_1(VAR_3->regs);


 if ((VAR_4 < 0) && (FUNC_0(VAR_4) > VAR_5)) {
  if (VAR_3->ts_wrap_cnt) {
   VAR_5 += VAR_0 + VAR_4;
   VAR_3->ts_wrap_cnt--;
  } else {
   VAR_5 = 0;
  }
 } else {
  VAR_5 += VAR_4;
  if (VAR_5 > VAR_0) {
   VAR_3->ts_wrap_cnt++;
   VAR_5 -= VAR_0;
  }
 }

 FUNC_2(VAR_3->regs, VAR_5);

 VAR_3->ts_ovf_last = (VAR_5 >> VAR_1) &
   VAR_2;
}
