
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_snoc {int flags; } ;
struct ath10k {int dev_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*) ;
 struct ath10k_snoc* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct ath10k *VAR_2)
{
 struct ath10k_snoc *VAR_3 = FUNC_1(VAR_2);







 if (!FUNC_2(VAR_0, &VAR_2->dev_flags) ||
     !FUNC_2(VAR_1, &VAR_3->flags))
  FUNC_0(VAR_2);
}
