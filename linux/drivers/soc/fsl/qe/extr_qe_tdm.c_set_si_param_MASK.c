
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_mode_info {int simr_crt; scalar_t__ simr_rfsd; } ;
struct ucc_tdm_info {struct si_mode_info si_info; } ;
struct ucc_tdm {scalar_t__ tdm_mode; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ucc_tdm *VAR_1, struct ucc_tdm_info *VAR_2)
{
 struct si_mode_info *VAR_3 = &VAR_2->si_info;

 if (VAR_1->tdm_mode == VAR_0) {
  VAR_3->simr_crt = 1;
  VAR_3->simr_rfsd = 0;
 }
}
