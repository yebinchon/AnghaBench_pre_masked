
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
 int FUNC_1 (unsigned int) ;



 int FUNC_2 (struct ath5k_hw*,int ) ;

u32
FUNC_3(struct ath5k_hw *VAR_3, unsigned int VAR_4)
{
 u16 VAR_5;

 FUNC_0(VAR_4, VAR_3->ah_capabilities.cap_queues.q_tx_num);





 if (VAR_3->ah_version == VAR_0) {
  switch (VAR_3->ah_txq[VAR_4].tqi_type) {
  case 128:
   VAR_5 = VAR_1;
   break;
  case 130:
  case 129:
   VAR_5 = VAR_2;
   break;
  default:
   return 0xffffffff;
  }
 } else {
  VAR_5 = FUNC_1(VAR_4);
 }

 return FUNC_2(VAR_3, VAR_5);
}
