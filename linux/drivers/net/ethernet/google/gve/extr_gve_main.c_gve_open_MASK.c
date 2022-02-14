
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int num_queues; } ;
struct TYPE_3__ {int num_queues; } ;
struct gve_priv {TYPE_2__ rx_cfg; TYPE_1__ tx_cfg; } ;


 int FUNC_0 (struct gve_priv*) ;
 int FUNC_1 (struct gve_priv*) ;
 int FUNC_2 (struct gve_priv*) ;
 int FUNC_3 (struct gve_priv*) ;
 int FUNC_4 (struct gve_priv*) ;
 scalar_t__ FUNC_5 (struct gve_priv*) ;
 int FUNC_6 (struct gve_priv*) ;
 int FUNC_7 (struct gve_priv*,int) ;
 int FUNC_8 (struct gve_priv*,int) ;
 int FUNC_9 (struct gve_priv*) ;
 int FUNC_10 (struct gve_priv*) ;
 struct gve_priv* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*,int ) ;
 int FUNC_14 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_0)
{
 struct gve_priv *VAR_1 = FUNC_11(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;
 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  goto free_qpls;

 VAR_2 = FUNC_14(VAR_0, VAR_1->tx_cfg.num_queues);
 if (VAR_2)
  goto free_rings;
 VAR_2 = FUNC_13(VAR_0, VAR_1->rx_cfg.num_queues);
 if (VAR_2)
  goto free_rings;

 VAR_2 = FUNC_6(VAR_1);
 if (VAR_2)
  goto reset;
 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  goto reset;
 FUNC_9(VAR_1);

 FUNC_10(VAR_1);
 FUNC_12(VAR_0);
 return 0;

free_rings:
 FUNC_4(VAR_1);
free_qpls:
 FUNC_3(VAR_1);
 return VAR_2;

reset:



 if (FUNC_5(VAR_1))
  return VAR_2;

 FUNC_7(VAR_1, 1);

 FUNC_8(VAR_1, 0);

 return VAR_2;
}
