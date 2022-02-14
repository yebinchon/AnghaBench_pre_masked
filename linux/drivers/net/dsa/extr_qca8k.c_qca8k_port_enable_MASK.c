
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qca8k_priv {TYPE_1__* port_sts; } ;
struct phy_device {int dummy; } ;
struct dsa_switch {scalar_t__ priv; } ;
struct TYPE_2__ {int enabled; } ;


 int FUNC_0 (struct dsa_switch*,int) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct qca8k_priv*,int,int) ;

__attribute__((used)) static int
FUNC_3(struct dsa_switch *VAR_0, int VAR_1,
    struct phy_device *VAR_2)
{
 struct qca8k_priv *VAR_3 = (struct qca8k_priv *)VAR_0->priv;

 if (!FUNC_0(VAR_0, VAR_1))
  return 0;

 FUNC_2(VAR_3, VAR_1, 1);
 VAR_3->port_sts[VAR_1].enabled = 1;

 FUNC_1(VAR_2);

 return 0;
}
