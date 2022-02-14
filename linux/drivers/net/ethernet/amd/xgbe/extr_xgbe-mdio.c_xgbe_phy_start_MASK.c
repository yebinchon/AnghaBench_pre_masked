
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* start ) (struct xgbe_prv_data*) ;int (* stop ) (struct xgbe_prv_data*) ;} ;
struct TYPE_4__ {TYPE_1__ phy_impl; } ;
struct xgbe_prv_data {scalar_t__ dev_irq; scalar_t__ an_irq; int phy_started; TYPE_2__ phy_if; int dev; int an_name; int tasklet_an; struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,scalar_t__,struct xgbe_prv_data*) ;
 int FUNC_1 (int ,scalar_t__,int ,int ,int ,struct xgbe_prv_data*) ;
 int VAR_8 ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (struct xgbe_prv_data*,int ,struct net_device*,char*) ;
 int FUNC_4 (struct xgbe_prv_data*) ;
 int FUNC_5 (struct xgbe_prv_data*) ;
 int FUNC_6 (int *,int ,unsigned long) ;
 int FUNC_7 (struct xgbe_prv_data*) ;
 int FUNC_8 (struct xgbe_prv_data*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (struct xgbe_prv_data*) ;
 int FUNC_10 (struct xgbe_prv_data*) ;
 int FUNC_11 (struct xgbe_prv_data*) ;
 int FUNC_12 (struct xgbe_prv_data*) ;
 int FUNC_13 (struct xgbe_prv_data*) ;
 int FUNC_14 (struct xgbe_prv_data*) ;
 int FUNC_15 (struct xgbe_prv_data*) ;
 scalar_t__ FUNC_16 (struct xgbe_prv_data*,int ) ;
 int FUNC_17 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_18(struct xgbe_prv_data *VAR_11)
{
 struct net_device *VAR_12 = VAR_11->netdev;
 int VAR_13;

 FUNC_3(VAR_11, VAR_8, VAR_11->netdev, "starting PHY\n");

 VAR_13 = VAR_11->phy_if.phy_impl.start(VAR_11);
 if (VAR_13)
  return VAR_13;


 if (VAR_11->dev_irq != VAR_11->an_irq) {
  FUNC_6(&VAR_11->tasklet_an, VAR_10,
        (unsigned long)VAR_11);

  VAR_13 = FUNC_1(VAR_11->dev, VAR_11->an_irq,
           VAR_9, 0, VAR_11->an_name,
           VAR_11);
  if (VAR_13) {
   FUNC_2(VAR_12, "phy irq request failed\n");
   goto err_stop;
  }
 }




 if (FUNC_16(VAR_11, VAR_1)) {
  FUNC_9(VAR_11);
 } else if (FUNC_16(VAR_11, VAR_3)) {
  FUNC_11(VAR_11);
 } else if (FUNC_16(VAR_11, VAR_2)) {
  FUNC_10(VAR_11);
 } else if (FUNC_16(VAR_11, VAR_4)) {
  FUNC_13(VAR_11);
 } else if (FUNC_16(VAR_11, VAR_7)) {
  FUNC_17(VAR_11);
 } else if (FUNC_16(VAR_11, VAR_6)) {
  FUNC_14(VAR_11);
 } else if (FUNC_16(VAR_11, VAR_5)) {
  FUNC_15(VAR_11);
 } else {
  VAR_13 = -VAR_0;
  goto err_irq;
 }


 VAR_11->phy_started = 1;

 FUNC_8(VAR_11);
 FUNC_7(VAR_11);

 return FUNC_12(VAR_11);

err_irq:
 if (VAR_11->dev_irq != VAR_11->an_irq)
  FUNC_0(VAR_11->dev, VAR_11->an_irq, VAR_11);

err_stop:
 VAR_11->phy_if.phy_impl.stop(VAR_11);

 return VAR_13;
}
