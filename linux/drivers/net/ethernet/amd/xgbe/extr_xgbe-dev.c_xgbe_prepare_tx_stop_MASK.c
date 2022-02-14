
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int version; } ;
struct xgbe_prv_data {int netdev; TYPE_1__ hw_feat; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int FUNC_0 (unsigned int,unsigned int,int ) ;
 unsigned long VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned long VAR_14 ;
 int FUNC_1 (int ,int ,int ) ;
 unsigned int FUNC_2 (struct xgbe_prv_data*,unsigned int) ;
 unsigned long VAR_15 ;
 int FUNC_3 (int ,char*,unsigned int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int,int) ;
 void FUNC_6 (struct xgbe_prv_data*,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct xgbe_prv_data *VAR_16,
     unsigned int VAR_17)
{
 unsigned int VAR_18, VAR_19, VAR_20;
 unsigned int VAR_21;
 unsigned long VAR_22;

 if (FUNC_1(VAR_16->hw_feat.version, VAR_12, VAR_13) > 0x20)
  return FUNC_6(VAR_16, VAR_17);


 if (VAR_17 < VAR_3) {
  VAR_18 = VAR_0;
  VAR_19 = (VAR_17 * VAR_7) + VAR_1;
 } else {
  VAR_20 = VAR_17 - VAR_3;

  VAR_18 = VAR_2 + ((VAR_20 / VAR_5) * VAR_4);
  VAR_19 = ((VAR_20 % VAR_5) * VAR_7) +
    VAR_6;
 }





 VAR_22 = VAR_15 + (VAR_14 * VAR_11);
 while (FUNC_4(VAR_15, VAR_22)) {
  VAR_21 = FUNC_2(VAR_16, VAR_18);
  VAR_21 = FUNC_0(VAR_21, VAR_19, VAR_8);
  if ((VAR_21 == VAR_9) ||
      (VAR_21 == VAR_10))
   break;

  FUNC_5(500, 1000);
 }

 if (!FUNC_4(VAR_15, VAR_22))
  FUNC_3(VAR_16->netdev,
       "timed out waiting for Tx DMA channel %u to stop\n",
       VAR_17);
}
