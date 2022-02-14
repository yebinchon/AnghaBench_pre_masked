
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_vreg_info {int reg; } ;
struct ath10k_snoc {struct ath10k_vreg_info* vreg; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,struct ath10k_vreg_info*) ;
 struct ath10k_snoc* FUNC_2 (struct ath10k*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_1)
{
 struct ath10k_snoc *VAR_2 = FUNC_2(VAR_1);
 struct ath10k_vreg_info *VAR_3;
 int VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = FUNC_0(VAR_0) - 1; VAR_5 >= 0; VAR_5--) {
  VAR_3 = &VAR_2->vreg[VAR_5];

  if (!VAR_3->reg)
   continue;

  VAR_4 = FUNC_1(VAR_1, VAR_3);
 }

 return VAR_4;
}
