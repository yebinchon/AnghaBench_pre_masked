
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_vreg_info {int name; int max_v; int reg; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*,int ) ;
 int FUNC_1 (struct ath10k*,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ath10k *VAR_1,
      struct ath10k_vreg_info *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1, VAR_0, "snoc regulator %s being disabled\n",
     VAR_2->name);

 VAR_3 = FUNC_2(VAR_2->reg);
 if (VAR_3)
  FUNC_1(VAR_1, "failed to disable regulator %s\n",
      VAR_2->name);

 VAR_3 = FUNC_3(VAR_2->reg, 0);
 if (VAR_3 < 0)
  FUNC_1(VAR_1, "failed to set load %s\n", VAR_2->name);

 VAR_3 = FUNC_4(VAR_2->reg, 0, VAR_2->max_v);
 if (VAR_3)
  FUNC_1(VAR_1, "failed to set voltage %s\n", VAR_2->name);

 return VAR_3;
}
