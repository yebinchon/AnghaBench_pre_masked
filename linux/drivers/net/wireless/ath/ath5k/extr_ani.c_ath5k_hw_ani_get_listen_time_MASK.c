
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_common {int cc_lock; int cc_ani; } ;
struct ath5k_hw {int dummy; } ;
struct ath5k_ani_state {int last_cc; } ;


 struct ath_common* FUNC_0 (struct ath5k_hw*) ;
 int FUNC_1 (struct ath_common*) ;
 int FUNC_2 (struct ath_common*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct ath5k_hw *VAR_0, struct ath5k_ani_state *VAR_1)
{
 struct ath_common *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 FUNC_4(&VAR_2->cc_lock);

 FUNC_1(VAR_2);
 FUNC_3(&VAR_1->last_cc, &VAR_2->cc_ani, sizeof(VAR_1->last_cc));


 VAR_3 = FUNC_2(VAR_2);

 FUNC_5(&VAR_2->cc_lock);

 return VAR_3;
}
