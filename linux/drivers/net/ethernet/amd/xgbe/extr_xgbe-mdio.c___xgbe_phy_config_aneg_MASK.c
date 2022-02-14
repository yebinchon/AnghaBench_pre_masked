
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ autoneg; } ;
struct TYPE_4__ {int (* an_config ) (struct xgbe_prv_data*) ;} ;
struct TYPE_5__ {TYPE_1__ phy_impl; } ;
struct xgbe_prv_data {int an_mutex; int dev_state; int an_irq; void* kx_state; void* kr_state; void* an_state; void* an_result; int netdev; int kr_redrv; TYPE_3__ phy; TYPE_2__ phy_if; int link_check; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct xgbe_prv_data*,int ,int ,char*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct xgbe_prv_data*) ;
 int FUNC_8 (struct xgbe_prv_data*) ;
 int FUNC_9 (struct xgbe_prv_data*) ;
 int FUNC_10 (struct xgbe_prv_data*) ;
 int FUNC_11 (struct xgbe_prv_data*) ;
 int FUNC_12 (struct xgbe_prv_data*) ;
 int FUNC_13 (struct xgbe_prv_data*,int ) ;
 scalar_t__ FUNC_14 (struct xgbe_prv_data*,int ) ;

__attribute__((used)) static int FUNC_15(struct xgbe_prv_data *VAR_15, bool VAR_16)
{
 int VAR_17;

 FUNC_3(&VAR_15->an_mutex);

 FUNC_6(VAR_4, &VAR_15->dev_state);
 VAR_15->link_check = VAR_13;

 VAR_17 = VAR_15->phy_if.phy_impl.an_config(VAR_15);
 if (VAR_17)
  goto out;

 if (VAR_15->phy.autoneg != VAR_0) {
  VAR_17 = FUNC_12(VAR_15);
  if (VAR_17 || !VAR_15->kr_redrv)
   goto out;

  FUNC_5(VAR_15, VAR_14, VAR_15->netdev, "AN redriver support\n");
 } else {
  FUNC_5(VAR_15, VAR_14, VAR_15->netdev, "AN PHY configuration\n");
 }


 FUNC_1(VAR_15->an_irq);

 if (VAR_16) {

  if (FUNC_14(VAR_15, VAR_5)) {
   FUNC_13(VAR_15, VAR_5);
  } else if (FUNC_14(VAR_15, VAR_7)) {
   FUNC_13(VAR_15, VAR_7);
  } else if (FUNC_14(VAR_15, VAR_6)) {
   FUNC_13(VAR_15, VAR_6);
  } else if (FUNC_14(VAR_15, VAR_8)) {
   FUNC_13(VAR_15, VAR_8);
  } else if (FUNC_14(VAR_15, VAR_11)) {
   FUNC_13(VAR_15, VAR_11);
  } else if (FUNC_14(VAR_15, VAR_10)) {
   FUNC_13(VAR_15, VAR_10);
  } else if (FUNC_14(VAR_15, VAR_9)) {
   FUNC_13(VAR_15, VAR_9);
  } else {
   FUNC_2(VAR_15->an_irq);
   VAR_17 = -VAR_1;
   goto out;
  }
 }


 FUNC_9(VAR_15);


 FUNC_8(VAR_15);

 VAR_15->an_result = VAR_2;
 VAR_15->an_state = VAR_2;
 VAR_15->kr_state = VAR_12;
 VAR_15->kx_state = VAR_12;


 FUNC_2(VAR_15->an_irq);

 FUNC_10(VAR_15);
 FUNC_11(VAR_15);

out:
 if (VAR_17)
  FUNC_6(VAR_3, &VAR_15->dev_state);
 else
  FUNC_0(VAR_3, &VAR_15->dev_state);

 FUNC_4(&VAR_15->an_mutex);

 return VAR_17;
}
