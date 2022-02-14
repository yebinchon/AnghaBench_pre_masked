
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w5100_priv {int napi; int rx_work; int xfer_wq; TYPE_1__* ops; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ may_sleep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct w5100_priv*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 struct w5100_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct w5100_priv*,int ,struct net_device*,char*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int *) ;
 int VAR_4 ;
 int FUNC_7 (struct w5100_priv*) ;
 int FUNC_8 (struct w5100_priv*,int ) ;
 int FUNC_9 (struct w5100_priv*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_5, void *VAR_6)
{
 struct net_device *VAR_7 = VAR_6;
 struct w5100_priv *VAR_8 = FUNC_3(VAR_7);

 int VAR_9 = FUNC_8(VAR_8, FUNC_0(VAR_8));
 if (!VAR_9)
  return VAR_1;
 FUNC_9(VAR_8, FUNC_0(VAR_8), VAR_9);

 if (VAR_9 & VAR_3) {
  FUNC_4(VAR_8, VAR_4, VAR_7, "tx done\n");
  FUNC_5(VAR_7);
 }

 if (VAR_9 & VAR_2) {
  FUNC_7(VAR_8);

  if (VAR_8->ops->may_sleep)
   FUNC_6(VAR_8->xfer_wq, &VAR_8->rx_work);
  else if (FUNC_2(&VAR_8->napi))
   FUNC_1(&VAR_8->napi);
 }

 return VAR_0;
}
