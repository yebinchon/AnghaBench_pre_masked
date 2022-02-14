
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qca8k_priv {int dummy; } ;
struct net_device {int dummy; } ;
struct dsa_switch {scalar_t__ priv; } ;
struct TYPE_2__ {struct net_device* bridge_dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (struct dsa_switch*,int) ;
 int FUNC_3 (struct qca8k_priv*,int ,int) ;
 int FUNC_4 (struct qca8k_priv*,int ,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct dsa_switch *VAR_3, int VAR_4, struct net_device *VAR_5)
{
 struct qca8k_priv *VAR_6 = (struct qca8k_priv *)VAR_3->priv;
 int VAR_7 = FUNC_0(VAR_0);
 int VAR_8;

 for (VAR_8 = 1; VAR_8 < VAR_1; VAR_8++) {
  if (FUNC_2(VAR_3, VAR_8)->bridge_dev != VAR_5)
   continue;



  FUNC_3(VAR_6,
         FUNC_1(VAR_8),
         FUNC_0(VAR_4));
  if (VAR_8 != VAR_4)
   VAR_7 |= FUNC_0(VAR_8);
 }

 FUNC_4(VAR_6, FUNC_1(VAR_4),
    VAR_2, VAR_7);

 return 0;
}
