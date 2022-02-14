
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct cpsw_priv {struct cpsw_common* cpsw; } ;
struct cpsw_common {int dev; } ;


 int FUNC_0 (struct cpsw_priv*,int ,char*,int) ;
 int VAR_0 ;
 struct cpsw_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct net_device *VAR_1)
{
 struct cpsw_priv *VAR_2 = FUNC_1(VAR_1);
 struct cpsw_common *VAR_3 = VAR_2->cpsw;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3->dev);
 if (VAR_4 < 0) {
  FUNC_0(VAR_2, VAR_0, "ethtool begin failed %d\n", VAR_4);
  FUNC_3(VAR_3->dev);
 }

 return VAR_4;
}
