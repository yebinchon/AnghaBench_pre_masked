
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int q_tx_num; } ;
struct TYPE_5__ {TYPE_3__ cap_queues; } ;
struct ath5k_hw {scalar_t__ ah_version; TYPE_1__* ah_txq; TYPE_2__ ah_capabilities; } ;
struct TYPE_4__ {int tqi_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (struct ath5k_hw*,int ,unsigned int) ;
 int FUNC_2 (struct ath5k_hw*,int ,unsigned int) ;



 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct ath5k_hw*,int ) ;
 int FUNC_4 (struct ath5k_hw*,int,int ) ;

int
FUNC_5(struct ath5k_hw *VAR_15, unsigned int VAR_16)
{
 u32 VAR_17;

 FUNC_0(VAR_16, VAR_15->ah_capabilities.cap_queues.q_tx_num);


 if (VAR_15->ah_txq[VAR_16].tqi_type == VAR_12)
  return -VAR_13;

 if (VAR_15->ah_version == VAR_0) {
  VAR_17 = FUNC_3(VAR_15, VAR_5);




  switch (VAR_15->ah_txq[VAR_16].tqi_type) {
  case 128:
   VAR_17 |= VAR_8 & ~VAR_6;
   break;
  case 130:
   VAR_17 |= VAR_9 & ~VAR_7;
   FUNC_4(VAR_15, VAR_3 | VAR_1,
     VAR_4);
   break;
  case 129:
   VAR_17 |= VAR_9 & ~VAR_7;
   FUNC_4(VAR_15, VAR_2 | VAR_3 |
    VAR_1, VAR_4);
   break;
  default:
   return -VAR_13;
  }

  FUNC_4(VAR_15, VAR_17, VAR_5);
  FUNC_3(VAR_15, VAR_5);
 } else {

  if (FUNC_1(VAR_15, VAR_10, VAR_16))
   return -VAR_14;


  FUNC_2(VAR_15, VAR_11, VAR_16);
 }

 return 0;
}
