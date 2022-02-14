
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ionic_lif {int state; int nxqs; } ;


 int VAR_0 ;
 int FUNC_0 (struct ionic_lif*) ;
 int FUNC_1 (struct ionic_lif*) ;
 int FUNC_2 (struct ionic_lif*) ;
 int FUNC_3 (struct ionic_lif*) ;
 int FUNC_4 (struct ionic_lif*) ;
 int FUNC_5 (struct ionic_lif*) ;
 struct ionic_lif* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,int ) ;
 int FUNC_10 (struct net_device*,int ) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int ,int ) ;

int FUNC_13(struct net_device *VAR_1)
{
 struct ionic_lif *VAR_2 = FUNC_6(VAR_1);
 int VAR_3;

 FUNC_7(VAR_1);

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3)
  goto err_txrx_free;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  goto err_txrx_deinit;

 FUNC_10(VAR_1, VAR_2->nxqs);
 FUNC_9(VAR_1, VAR_2->nxqs);

 FUNC_12(VAR_0, VAR_2->state);

 FUNC_0(VAR_2);
 if (FUNC_8(VAR_1))
  FUNC_11(VAR_1);

 return 0;

err_txrx_deinit:
 FUNC_2(VAR_2);
err_txrx_free:
 FUNC_4(VAR_2);
 return VAR_3;
}
