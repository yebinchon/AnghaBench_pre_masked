
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int tc_cnt; } ;
struct xgbe_prv_data {unsigned int tx_q_count; unsigned int* q2tc_map; unsigned int rx_q_count; unsigned int* prio2q_map; int netdev; TYPE_1__ hw_feat; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct xgbe_prv_data*,unsigned int,unsigned int) ;
 int FUNC_1 (struct xgbe_prv_data*,unsigned int,int ,int ,unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int VAR_9 ;
 int FUNC_3 (struct xgbe_prv_data*,int ,int ,char*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct xgbe_prv_data *VAR_10)
{
 unsigned int VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15, VAR_16, VAR_17;
 unsigned int VAR_18;
 unsigned int VAR_19, VAR_20, VAR_21, VAR_22;




 VAR_11 = VAR_10->tx_q_count / VAR_10->hw_feat.tc_cnt;
 VAR_12 = VAR_10->tx_q_count % VAR_10->hw_feat.tc_cnt;

 for (VAR_19 = 0, VAR_13 = 0; VAR_19 < VAR_10->hw_feat.tc_cnt; VAR_19++) {
  for (VAR_20 = 0; VAR_20 < VAR_11; VAR_20++) {
   FUNC_3(VAR_10, VAR_9, VAR_10->netdev,
      "TXq%u mapped to TC%u\n", VAR_13, VAR_19);
   FUNC_1(VAR_10, VAR_13, VAR_4,
            VAR_8, VAR_19);
   VAR_10->q2tc_map[VAR_13++] = VAR_19;
  }

  if (VAR_19 < VAR_12) {
   FUNC_3(VAR_10, VAR_9, VAR_10->netdev,
      "TXq%u mapped to TC%u\n", VAR_13, VAR_19);
   FUNC_1(VAR_10, VAR_13, VAR_4,
            VAR_8, VAR_19);
   VAR_10->q2tc_map[VAR_13++] = VAR_19;
  }
 }


 VAR_14 = FUNC_2(VAR_10->rx_q_count);
 VAR_15 = VAR_0 / VAR_14;
 VAR_16 = VAR_0 % VAR_14;

 VAR_21 = VAR_1;
 VAR_22 = 0;
 for (VAR_19 = 0, VAR_17 = 0; VAR_19 < VAR_14;) {
  VAR_18 = 0;
  for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++) {
   FUNC_3(VAR_10, VAR_9, VAR_10->netdev,
      "PRIO%u mapped to RXq%u\n", VAR_17, VAR_19);
   VAR_18 |= (1 << VAR_17);
   VAR_10->prio2q_map[VAR_17++] = VAR_19;
  }

  if (VAR_19 < VAR_16) {
   FUNC_3(VAR_10, VAR_9, VAR_10->netdev,
      "PRIO%u mapped to RXq%u\n", VAR_17, VAR_19);
   VAR_18 |= (1 << VAR_17);
   VAR_10->prio2q_map[VAR_17++] = VAR_19;
  }

  VAR_22 |= (VAR_18 << ((VAR_19++ % VAR_3) << 3));

  if ((VAR_19 % VAR_3) && (VAR_19 != VAR_14))
   continue;

  FUNC_0(VAR_10, VAR_21, VAR_22);
  VAR_21 += VAR_2;
  VAR_22 = 0;
 }


 VAR_21 = VAR_5;
 VAR_22 = 0;
 for (VAR_19 = 0; VAR_19 < VAR_10->rx_q_count;) {
  VAR_22 |= (0x80 << ((VAR_19++ % VAR_7) << 3));

  if ((VAR_19 % VAR_7) && (VAR_19 != VAR_10->rx_q_count))
   continue;

  FUNC_0(VAR_10, VAR_21, VAR_22);

  VAR_21 += VAR_6;
  VAR_22 = 0;
 }
}
