
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtsx_cr_option {int l1_snooze_delay; int ltr_l1off_latency; scalar_t__ ltr_enabled; } ;
struct rtsx_pcr {struct rtsx_cr_option option; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct rtsx_pcr*,int ) ;
 int FUNC_2 (struct rtsx_pcr*) ;
 int FUNC_3 (struct rtsx_pcr*,int ) ;
 int FUNC_4 (struct rtsx_pcr*,int ) ;

__attribute__((used)) static void FUNC_5(struct rtsx_pcr *VAR_2)
{
 struct rtsx_cr_option *VAR_3 = &VAR_2->option;

 if (VAR_3->ltr_enabled) {
  u32 VAR_4 = VAR_3->ltr_l1off_latency;

  if (FUNC_1(VAR_2, VAR_0))
   FUNC_0(VAR_3->l1_snooze_delay);

  FUNC_4(VAR_2, VAR_4);
 }

 if (FUNC_1(VAR_2, VAR_1))
  FUNC_3(VAR_2, 0);

 FUNC_2(VAR_2);
}
