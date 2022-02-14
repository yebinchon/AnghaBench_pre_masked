
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ath5k_txq_info {scalar_t__ tqi_type; scalar_t__ tqi_subtype; int tqi_flags; int tqi_ready_time; int tqi_burst_time; int tqi_cbr_overflow_limit; int tqi_cbr_period; void* tqi_cw_max; void* tqi_cw_min; int tqi_aifs; } ;
struct TYPE_3__ {int q_tx_num; } ;
struct TYPE_4__ {TYPE_1__ cap_queues; } ;
struct ath5k_hw {struct ath5k_txq_info* ah_txq; TYPE_2__ ah_capabilities; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (int ,int ) ;

int
FUNC_3(struct ath5k_hw *VAR_7, int VAR_8,
    const struct ath5k_txq_info *VAR_9)
{
 struct ath5k_txq_info *VAR_10;

 FUNC_0(VAR_8, VAR_7->ah_capabilities.cap_queues.q_tx_num);

 VAR_10 = &VAR_7->ah_txq[VAR_8];

 if (VAR_10->tqi_type == VAR_2)
  return -VAR_6;


 VAR_10->tqi_type = VAR_9->tqi_type;
 VAR_10->tqi_subtype = VAR_9->tqi_subtype;
 VAR_10->tqi_flags = VAR_9->tqi_flags;





 VAR_10->tqi_aifs = FUNC_2(VAR_9->tqi_aifs, (u8)0xFC);
 VAR_10->tqi_cw_min = FUNC_1(VAR_9->tqi_cw_min);
 VAR_10->tqi_cw_max = FUNC_1(VAR_9->tqi_cw_max);
 VAR_10->tqi_cbr_period = VAR_9->tqi_cbr_period;
 VAR_10->tqi_cbr_overflow_limit = VAR_9->tqi_cbr_overflow_limit;
 VAR_10->tqi_burst_time = VAR_9->tqi_burst_time;
 VAR_10->tqi_ready_time = VAR_9->tqi_ready_time;



 if ((VAR_9->tqi_type == VAR_1 &&
  ((VAR_9->tqi_subtype == VAR_4) ||
   (VAR_9->tqi_subtype == VAR_5))) ||
      VAR_9->tqi_type == VAR_3)
  VAR_10->tqi_flags |= VAR_0;

 return 0;
}
