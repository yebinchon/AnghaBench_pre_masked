
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_ce_pipe {int attr_flags; } ;
struct ath10k_ce {struct ath10k_ce_pipe* ce_states; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k_ce_pipe*) ;
 struct ath10k_ce* FUNC_1 (struct ath10k*) ;

void FUNC_2(struct ath10k *VAR_2)
{
 struct ath10k_ce *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;
 struct ath10k_ce_pipe *VAR_5;




 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_5 = &VAR_3->ce_states[VAR_4];
  if (VAR_5->attr_flags & VAR_0)
   continue;

  FUNC_0(VAR_5);
 }
}
