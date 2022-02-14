
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int q_tx_num; } ;
struct TYPE_5__ {TYPE_1__ cap_queues; } ;
struct ath5k_hw {scalar_t__ ah_version; TYPE_3__* ah_txq; TYPE_2__ ah_capabilities; } ;
struct TYPE_6__ {scalar_t__ tqi_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (struct ath5k_hw*,int ,unsigned int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct ath5k_hw*,int ) ;

u32
FUNC_4(struct ath5k_hw *VAR_4, unsigned int VAR_5)
{
 u32 VAR_6;
 FUNC_0(VAR_5, VAR_4->ah_capabilities.cap_queues.q_tx_num);


 if (VAR_4->ah_txq[VAR_5].tqi_type == VAR_3)
  return 0;


 if (VAR_4->ah_version == VAR_0)
  return 0;

 VAR_6 = FUNC_3(VAR_4, FUNC_1(VAR_5));
 VAR_6 &= VAR_1;




 if (!VAR_6 && FUNC_2(VAR_4, VAR_2, VAR_5))
  return 1;

 return VAR_6;
}
