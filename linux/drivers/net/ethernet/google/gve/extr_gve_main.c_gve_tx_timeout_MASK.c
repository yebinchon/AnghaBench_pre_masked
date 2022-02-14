
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gve_priv {int tx_timeo_cnt; } ;


 int FUNC_0 (struct gve_priv*) ;
 struct gve_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct gve_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1);
 VAR_1->tx_timeo_cnt++;
}
