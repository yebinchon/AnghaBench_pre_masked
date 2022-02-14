
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pch_can_priv {TYPE_1__* dev; int napi; } ;
struct net_device {int name; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*,char*,...) ;
 struct pch_can_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct pch_can_priv*) ;
 int VAR_1 ;
 int FUNC_7 (struct pch_can_priv*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ,int ,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_2)
{
 struct pch_can_priv *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;


 VAR_4 = FUNC_9(VAR_3->dev->irq, VAR_1, VAR_0,
        VAR_2->name, VAR_2);
 if (VAR_4) {
  FUNC_2(VAR_2, "request_irq failed.\n");
  goto req_irq_err;
 }


 VAR_4 = FUNC_5(VAR_2);
 if (VAR_4) {
  FUNC_2(VAR_2, "open_candev() failed %d\n", VAR_4);
  goto err_open_candev;
 }

 FUNC_6(VAR_3);
 FUNC_8(VAR_2);
 FUNC_1(&VAR_3->napi);
 FUNC_4(VAR_2);

 return 0;

err_open_candev:
 FUNC_0(VAR_3->dev->irq, VAR_2);
req_irq_err:
 FUNC_7(VAR_3);

 return VAR_4;
}
