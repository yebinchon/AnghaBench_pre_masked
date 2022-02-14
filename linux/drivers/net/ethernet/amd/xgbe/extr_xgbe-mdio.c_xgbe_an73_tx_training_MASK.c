
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* kr_training_post ) (struct xgbe_prv_data*) ;int (* kr_training_pre ) (struct xgbe_prv_data*) ;} ;
struct TYPE_4__ {TYPE_1__ phy_impl; } ;
struct xgbe_prv_data {unsigned int fec_ability; TYPE_2__ phy_if; int netdev; } ;
typedef enum xgbe_rx { ____Placeholder_xgbe_rx } xgbe_rx ;
typedef enum xgbe_an { ____Placeholder_xgbe_an } xgbe_an ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned int FUNC_0 (struct xgbe_prv_data*,int ,scalar_t__) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,scalar_t__,unsigned int) ;
 int VAR_12 ;
 int FUNC_2 (struct xgbe_prv_data*,int ,int ,char*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (struct xgbe_prv_data*) ;
 int FUNC_5 (struct xgbe_prv_data*) ;

__attribute__((used)) static enum xgbe_an FUNC_6(struct xgbe_prv_data *VAR_13,
       enum xgbe_rx *VAR_14)
{
 unsigned int VAR_15, VAR_16, VAR_17;

 *VAR_14 = VAR_11;


 if (!FUNC_5(VAR_13))
  return VAR_8;


 VAR_15 = FUNC_0(VAR_13, VAR_2, VAR_0 + 2);
 VAR_16 = FUNC_0(VAR_13, VAR_2, VAR_1 + 2);

 VAR_17 = FUNC_0(VAR_13, VAR_3, VAR_6);
 VAR_17 &= ~(VAR_4 | VAR_5);
 if ((VAR_15 & 0xc000) && (VAR_16 & 0xc000))
  VAR_17 |= VAR_13->fec_ability;

 FUNC_1(VAR_13, VAR_3, VAR_6, VAR_17);


 if (VAR_13->phy_if.phy_impl.kr_training_pre)
  VAR_13->phy_if.phy_impl.kr_training_pre(VAR_13);

 VAR_17 = FUNC_0(VAR_13, VAR_3, VAR_7);
 VAR_17 |= VAR_9;
 VAR_17 |= VAR_10;
 FUNC_1(VAR_13, VAR_3, VAR_7, VAR_17);

 FUNC_2(VAR_13, VAR_12, VAR_13->netdev,
    "KR training initiated\n");

 if (VAR_13->phy_if.phy_impl.kr_training_post)
  VAR_13->phy_if.phy_impl.kr_training_post(VAR_13);

 return VAR_8;
}
