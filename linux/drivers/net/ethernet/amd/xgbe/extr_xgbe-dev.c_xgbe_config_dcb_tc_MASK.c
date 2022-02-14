
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int tc_cnt; } ;
struct xgbe_prv_data {TYPE_2__* netdev; TYPE_1__ hw_feat; struct ieee_ets* ets; } ;
struct ieee_ets {unsigned int* prio_tc; int* tc_tsa; unsigned int* tc_tx_bw; } ;
struct TYPE_4__ {unsigned int mtu; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int FUNC_0 (struct xgbe_prv_data*,unsigned int) ;
 int FUNC_1 (struct xgbe_prv_data*,unsigned int,unsigned int) ;
 int FUNC_2 (struct xgbe_prv_data*,int ,int ,int ) ;
 int FUNC_3 (struct xgbe_prv_data*,unsigned int,int ,int ,unsigned int) ;
 unsigned int FUNC_4 (unsigned int,unsigned int,unsigned int) ;
 int VAR_13 ;
 int FUNC_5 (struct xgbe_prv_data*,int ,TYPE_2__*,char*,unsigned int,...) ;
 int FUNC_6 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_7(struct xgbe_prv_data *VAR_14)
{
 struct ieee_ets *VAR_15 = VAR_14->ets;
 unsigned int VAR_16, VAR_17, VAR_18;
 unsigned int VAR_19, VAR_20, VAR_21;
 unsigned int VAR_22, VAR_23;

 if (!VAR_15)
  return;




 FUNC_2(VAR_14, VAR_3, VAR_0, VAR_2);


 VAR_16 = VAR_14->netdev->mtu * VAR_14->hw_feat.tc_cnt;
 VAR_17 = VAR_16 / 100;
 if (!VAR_17)
  VAR_17 = 1;

 for (VAR_22 = 0; VAR_22 < VAR_14->hw_feat.tc_cnt; VAR_22++) {

  VAR_19 = 0;
  for (VAR_23 = 0; VAR_23 < VAR_1; VAR_23++) {
   if (VAR_15->prio_tc[VAR_23] == VAR_22)
    VAR_19 |= (1 << VAR_23);
  }
  VAR_19 &= 0xff;

  FUNC_5(VAR_14, VAR_13, VAR_14->netdev, "TC%u PRIO mask=%#x\n",
     VAR_22, VAR_19);
  VAR_20 = VAR_4 + (VAR_5 * (VAR_22 / VAR_6));
  VAR_21 = FUNC_0(VAR_14, VAR_20);

  VAR_21 &= ~(0xff << ((VAR_22 % VAR_6) << 3));
  VAR_21 |= (VAR_19 << ((VAR_22 % VAR_6) << 3));

  FUNC_1(VAR_14, VAR_20, VAR_21);


  switch (VAR_15->tc_tsa[VAR_22]) {
  case 128:
   FUNC_5(VAR_14, VAR_13, VAR_14->netdev,
      "TC%u using SP\n", VAR_22);
   FUNC_3(VAR_14, VAR_22, VAR_7, VAR_12,
            VAR_10);
   break;
  case 129:
   VAR_18 = VAR_16 * VAR_15->tc_tx_bw[VAR_22] / 100;
   VAR_18 = FUNC_4(VAR_18, VAR_17, VAR_16);

   FUNC_5(VAR_14, VAR_13, VAR_14->netdev,
      "TC%u using DWRR (weight %u)\n", VAR_22, VAR_18);
   FUNC_3(VAR_14, VAR_22, VAR_7, VAR_12,
            VAR_9);
   FUNC_3(VAR_14, VAR_22, VAR_8, VAR_11,
            VAR_18);
   break;
  }
 }

 FUNC_6(VAR_14);
}
