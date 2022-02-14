
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qca8k_priv {int reg_mutex; } ;
struct ethtool_eee {scalar_t__ eee_enabled; } ;
struct dsa_switch {scalar_t__ priv; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct qca8k_priv*,int ) ;
 int FUNC_4 (struct qca8k_priv*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct dsa_switch *VAR_1, int VAR_2, struct ethtool_eee *VAR_3)
{
 struct qca8k_priv *VAR_4 = (struct qca8k_priv *)VAR_1->priv;
 u32 VAR_5 = FUNC_0(VAR_2);
 u32 VAR_6;

 FUNC_1(&VAR_4->reg_mutex);
 VAR_6 = FUNC_3(VAR_4, VAR_0);
 if (VAR_3->eee_enabled)
  VAR_6 |= VAR_5;
 else
  VAR_6 &= ~VAR_5;
 FUNC_4(VAR_4, VAR_0, VAR_6);
 FUNC_2(&VAR_4->reg_mutex);

 return 0;
}
