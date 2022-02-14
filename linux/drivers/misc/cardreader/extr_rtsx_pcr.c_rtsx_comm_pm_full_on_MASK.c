
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_cr_option {int ltr_active_latency; scalar_t__ ltr_enabled; } ;
struct rtsx_pcr {struct rtsx_cr_option option; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtsx_pcr*,int ) ;
 int FUNC_1 (struct rtsx_pcr*) ;
 int FUNC_2 (struct rtsx_pcr*,int) ;
 int FUNC_3 (struct rtsx_pcr*,int ) ;

__attribute__((used)) static void FUNC_4(struct rtsx_pcr *VAR_1)
{
 struct rtsx_cr_option *VAR_2 = &VAR_1->option;

 FUNC_1(VAR_1);

 if (VAR_2->ltr_enabled)
  FUNC_3(VAR_1, VAR_2->ltr_active_latency);

 if (FUNC_0(VAR_1, VAR_0))
  FUNC_2(VAR_1, 1);
}
