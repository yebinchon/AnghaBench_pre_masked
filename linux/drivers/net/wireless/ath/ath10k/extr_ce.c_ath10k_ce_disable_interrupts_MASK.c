
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k_ce_pipe {int attr_flags; } ;
struct ath10k_ce {struct ath10k_ce_pipe* ce_states; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,int) ;
 int FUNC_1 (struct ath10k*,int ) ;
 int FUNC_2 (struct ath10k*,int ) ;
 struct ath10k_ce* FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct ath10k*,int ) ;

int FUNC_5(struct ath10k *VAR_2)
{
 struct ath10k_ce *VAR_3 = FUNC_3(VAR_2);
 struct ath10k_ce_pipe *VAR_4;
 u32 VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_4 = &VAR_3->ce_states[VAR_6];
  if (VAR_4->attr_flags & VAR_0)
   continue;

  VAR_5 = FUNC_0(VAR_2, VAR_6);

  FUNC_1(VAR_2, VAR_5);
  FUNC_2(VAR_2, VAR_5);
  FUNC_4(VAR_2, VAR_5);
 }

 return 0;
}
