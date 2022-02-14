
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_txq_info {int tqi_cw_min; } ;
struct ath5k_hw {scalar_t__ ah_version; int ah_retry_short; int ah_retry_long; struct ath5k_txq_info* ah_txq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ath5k_hw*,int,int ) ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(struct ath5k_hw *VAR_10,
      unsigned int VAR_11)
{

 if (VAR_10->ah_version == VAR_0) {
  struct ath5k_txq_info *VAR_12 = &VAR_10->ah_txq[VAR_11];

  if (VAR_11 > 0)
   return;

  FUNC_2(VAR_10,
   (VAR_12->tqi_cw_min << VAR_5)
   | FUNC_1(VAR_10->ah_retry_long,
          VAR_8)
   | FUNC_1(VAR_10->ah_retry_short,
          VAR_9)
   | FUNC_1(VAR_10->ah_retry_long,
          VAR_6)
   | FUNC_1(VAR_10->ah_retry_short,
          VAR_7),
   VAR_4);

 } else {
  FUNC_2(VAR_10,
   FUNC_1(VAR_10->ah_retry_long,
        VAR_1)
   | FUNC_1(VAR_10->ah_retry_long,
          VAR_3)
   | FUNC_1(FUNC_3(VAR_10->ah_retry_long, VAR_10->ah_retry_short),
          VAR_2),
   FUNC_0(VAR_11));
 }
}
