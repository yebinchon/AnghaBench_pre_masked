
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int q_tx_num; } ;
struct TYPE_5__ {TYPE_1__ cap_queues; } ;
struct ath5k_hw {scalar_t__ ah_version; TYPE_3__* ah_txq; TYPE_2__ ah_capabilities; } ;
struct TYPE_6__ {int tqi_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (struct ath5k_hw*,int ,unsigned int) ;



 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct ath5k_hw*,int ,int ) ;

int
FUNC_4(struct ath5k_hw *VAR_6, unsigned int VAR_7, u32 VAR_8)
{
 u16 VAR_9;

 FUNC_0(VAR_7, VAR_6->ah_capabilities.cap_queues.q_tx_num);





 if (VAR_6->ah_version == VAR_0) {
  switch (VAR_6->ah_txq[VAR_7].tqi_type) {
  case 128:
   VAR_9 = VAR_1;
   break;
  case 130:
  case 129:
   VAR_9 = VAR_2;
   break;
  default:
   return -VAR_4;
  }
 } else {





  if (FUNC_2(VAR_6, VAR_3, VAR_7))
   return -VAR_5;

  VAR_9 = FUNC_1(VAR_7);
 }


 FUNC_3(VAR_6, VAR_8, VAR_9);

 return 0;
}
