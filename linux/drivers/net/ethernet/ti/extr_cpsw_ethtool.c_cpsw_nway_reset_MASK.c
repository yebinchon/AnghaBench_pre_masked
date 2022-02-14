
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct cpsw_priv {struct cpsw_common* cpsw; } ;
struct cpsw_common {TYPE_1__* slaves; } ;
struct TYPE_2__ {scalar_t__ phy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpsw_common*,struct cpsw_priv*) ;
 int FUNC_1 (scalar_t__) ;
 struct cpsw_priv* FUNC_2 (struct net_device*) ;

int FUNC_3(struct net_device *VAR_1)
{
 struct cpsw_priv *VAR_2 = FUNC_2(VAR_1);
 struct cpsw_common *VAR_3 = VAR_2->cpsw;
 int VAR_4 = FUNC_0(VAR_3, VAR_2);

 if (VAR_3->slaves[VAR_4].phy)
  return FUNC_1(VAR_3->slaves[VAR_4].phy);
 else
  return -VAR_0;
}
