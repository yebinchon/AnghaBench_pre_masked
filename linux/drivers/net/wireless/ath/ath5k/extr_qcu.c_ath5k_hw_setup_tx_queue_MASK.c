
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ath5k_txq_info {unsigned int tqi_subtype; int tqi_type; } ;
struct TYPE_4__ {int q_tx_num; } ;
struct TYPE_5__ {TYPE_1__ cap_queues; } ;
struct ath5k_hw {int ah_txq_status; TYPE_3__* ah_txq; TYPE_2__ ah_capabilities; } ;
typedef enum ath5k_tx_queue { ____Placeholder_ath5k_tx_queue } ath5k_tx_queue ;
struct TYPE_6__ {int tqi_type; } ;


 int FUNC_0 (int ,unsigned int) ;



 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

 int VAR_5 ;
 int FUNC_1 (struct ath5k_hw*,unsigned int,struct ath5k_txq_info*) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

int
FUNC_3(struct ath5k_hw *VAR_6, enum ath5k_tx_queue VAR_7,
  struct ath5k_txq_info *VAR_8)
{
 unsigned int VAR_9;
 int VAR_10;





 if (VAR_6->ah_capabilities.cap_queues.q_tx_num == 2) {
  switch (VAR_7) {
  case 129:
   VAR_9 = VAR_3;
   break;
  case 131:
  case 130:
   VAR_9 = VAR_2;
   break;
  default:
   return -VAR_5;
  }
 } else {
  switch (VAR_7) {
  case 129:
   VAR_9 = VAR_8->tqi_subtype;
   break;
  case 128:
   VAR_9 = VAR_4;
   break;
  case 131:
   VAR_9 = VAR_0;
   break;
  case 130:
   VAR_9 = VAR_1;
   break;
  default:
   return -VAR_5;
  }
 }




 FUNC_2(&VAR_6->ah_txq[VAR_9], 0, sizeof(struct ath5k_txq_info));
 VAR_6->ah_txq[VAR_9].tqi_type = VAR_7;

 if (VAR_8 != ((void*)0)) {
  VAR_8->tqi_type = VAR_7;
  VAR_10 = FUNC_1(VAR_6, VAR_9, VAR_8);
  if (VAR_10)
   return VAR_10;
 }






 FUNC_0(VAR_6->ah_txq_status, VAR_9);

 return VAR_9;
}
