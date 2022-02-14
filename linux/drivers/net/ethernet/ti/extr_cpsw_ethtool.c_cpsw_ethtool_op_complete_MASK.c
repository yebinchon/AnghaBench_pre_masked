
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct cpsw_priv {TYPE_1__* cpsw; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct cpsw_priv*,int ,char*,int) ;
 int VAR_0 ;
 struct cpsw_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct net_device *VAR_1)
{
 struct cpsw_priv *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2->cpsw->dev);
 if (VAR_3 < 0)
  FUNC_0(VAR_2, VAR_0, "ethtool complete failed %d\n", VAR_3);
}
