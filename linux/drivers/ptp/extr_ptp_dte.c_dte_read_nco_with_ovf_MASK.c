
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ptp_dte {int ts_ovf_last; int ts_wrap_cnt; int regs; } ;
typedef int s64 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static s64 FUNC_2(struct ptp_dte *VAR_3)
{
 u32 VAR_4;
 s64 VAR_5 = 0;

 VAR_5 = FUNC_1(VAR_3->regs);


 VAR_4 = (VAR_5 >> VAR_0) & VAR_1;


 if (VAR_4 < VAR_3->ts_ovf_last)
  VAR_3->ts_wrap_cnt++;

 VAR_3->ts_ovf_last = VAR_4;


 VAR_5 += (s64)(FUNC_0(VAR_2) * VAR_3->ts_wrap_cnt);

 return VAR_5;
}
