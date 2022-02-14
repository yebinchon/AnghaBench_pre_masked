
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qca8k_priv {TYPE_1__* port_sts; } ;
struct dsa_switch {scalar_t__ priv; } ;
struct TYPE_2__ {scalar_t__ enabled; } ;


 int FUNC_0 (struct qca8k_priv*,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct dsa_switch *VAR_0, int VAR_1)
{
 struct qca8k_priv *VAR_2 = (struct qca8k_priv *)VAR_0->priv;

 FUNC_0(VAR_2, VAR_1, 0);
 VAR_2->port_sts[VAR_1].enabled = 0;
}
