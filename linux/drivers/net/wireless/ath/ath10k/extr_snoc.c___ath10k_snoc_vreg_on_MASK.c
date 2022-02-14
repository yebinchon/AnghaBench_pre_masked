
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_vreg_info {int max_v; int reg; scalar_t__ settle_delay; int name; scalar_t__ load_ua; int min_v; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*,int ) ;
 int FUNC_1 (struct ath10k*,char*,int ,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_1,
     struct ath10k_vreg_info *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1, VAR_0, "snoc regulator %s being enabled\n",
     VAR_2->name);

 VAR_3 = FUNC_4(VAR_2->reg, VAR_2->min_v,
        VAR_2->max_v);
 if (VAR_3) {
  FUNC_1(VAR_1,
      "failed to set regulator %s voltage-min: %d voltage-max: %d\n",
      VAR_2->name, VAR_2->min_v, VAR_2->max_v);
  return VAR_3;
 }

 if (VAR_2->load_ua) {
  VAR_3 = FUNC_3(VAR_2->reg, VAR_2->load_ua);
  if (VAR_3 < 0) {
   FUNC_1(VAR_1, "failed to set regulator %s load: %d\n",
       VAR_2->name, VAR_2->load_ua);
   goto err_set_load;
  }
 }

 VAR_3 = FUNC_2(VAR_2->reg);
 if (VAR_3) {
  FUNC_1(VAR_1, "failed to enable regulator %s\n",
      VAR_2->name);
  goto err_enable;
 }

 if (VAR_2->settle_delay)
  FUNC_5(VAR_2->settle_delay);

 return 0;

err_enable:
 FUNC_3(VAR_2->reg, 0);
err_set_load:
 FUNC_4(VAR_2->reg, 0, VAR_2->max_v);

 return VAR_3;
}
