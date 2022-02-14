
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ath_hw {struct ath9k_tx_queue_info* txq; } ;
struct ath_common {int dummy; } ;
struct ath9k_tx_queue_info {scalar_t__ tqi_type; int tqi_subtype; scalar_t__ tqi_aifs; scalar_t__ tqi_cwmin; scalar_t__ tqi_cwmax; scalar_t__ tqi_shretry; scalar_t__ tqi_lgretry; int tqi_intFlags; int tqi_readyTime; int tqi_burstTime; int tqi_cbrOverflowLimit; int tqi_cbrPeriod; int tqi_priority; int tqi_qflags; int tqi_ver; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_common*,int ,char*,int) ;
 void* FUNC_2 (scalar_t__,unsigned int) ;

bool FUNC_3(struct ath_hw *VAR_9, int VAR_10,
       const struct ath9k_tx_queue_info *VAR_11)
{
 u32 VAR_12;
 struct ath_common *VAR_13 = FUNC_0(VAR_9);
 struct ath9k_tx_queue_info *VAR_14;

 VAR_14 = &VAR_9->txq[VAR_10];
 if (VAR_14->tqi_type == VAR_3) {
  FUNC_1(VAR_13, VAR_8,
   "Set TXQ properties, inactive queue: %u\n", VAR_10);
  return 0;
 }

 FUNC_1(VAR_13, VAR_8, "Set queue properties for: %u\n", VAR_10);

 VAR_14->tqi_ver = VAR_11->tqi_ver;
 VAR_14->tqi_subtype = VAR_11->tqi_subtype;
 VAR_14->tqi_qflags = VAR_11->tqi_qflags;
 VAR_14->tqi_priority = VAR_11->tqi_priority;
 if (VAR_11->tqi_aifs != VAR_0)
  VAR_14->tqi_aifs = FUNC_2(VAR_11->tqi_aifs, 255U);
 else
  VAR_14->tqi_aifs = VAR_4;
 if (VAR_11->tqi_cwmin != VAR_0) {
  VAR_12 = FUNC_2(VAR_11->tqi_cwmin, 1024U);
  VAR_14->tqi_cwmin = 1;
  while (VAR_14->tqi_cwmin < VAR_12)
   VAR_14->tqi_cwmin = (VAR_14->tqi_cwmin << 1) | 1;
 } else
  VAR_14->tqi_cwmin = VAR_11->tqi_cwmin;
 if (VAR_11->tqi_cwmax != VAR_0) {
  VAR_12 = FUNC_2(VAR_11->tqi_cwmax, 1024U);
  VAR_14->tqi_cwmax = 1;
  while (VAR_14->tqi_cwmax < VAR_12)
   VAR_14->tqi_cwmax = (VAR_14->tqi_cwmax << 1) | 1;
 } else
  VAR_14->tqi_cwmax = VAR_5;

 if (VAR_11->tqi_shretry != 0)
  VAR_14->tqi_shretry = FUNC_2((u32) VAR_11->tqi_shretry, 15U);
 else
  VAR_14->tqi_shretry = VAR_7;
 if (VAR_11->tqi_lgretry != 0)
  VAR_14->tqi_lgretry = FUNC_2((u32) VAR_11->tqi_lgretry, 15U);
 else
  VAR_14->tqi_lgretry = VAR_6;
 VAR_14->tqi_cbrPeriod = VAR_11->tqi_cbrPeriod;
 VAR_14->tqi_cbrOverflowLimit = VAR_11->tqi_cbrOverflowLimit;
 VAR_14->tqi_burstTime = VAR_11->tqi_burstTime;
 VAR_14->tqi_readyTime = VAR_11->tqi_readyTime;

 switch (VAR_11->tqi_subtype) {
 case 128:
  if (VAR_14->tqi_type == VAR_2)
   VAR_14->tqi_intFlags = VAR_1;
  break;
 default:
  break;
 }

 return 1;
}
