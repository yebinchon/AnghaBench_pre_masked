
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ath_hw {int dummy; } ;
struct ath9k_mib_stats {int beacons; int fcs_bad; int ackrcv_bad; int rts_bad; int rts_good; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ath_hw*,scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_1(struct ath_hw *VAR_5,
         struct ath9k_mib_stats *VAR_6)
{
 u32 VAR_7[5] = {VAR_4, VAR_3, VAR_0,
         VAR_2, VAR_1};
 u32 VAR_8[5];

 FUNC_0(VAR_5, &VAR_7[0], &VAR_8[0], 5);

 VAR_6->rts_good += VAR_8[0];

 VAR_6->rts_bad += VAR_8[1];

 VAR_6->ackrcv_bad += VAR_8[2];

 VAR_6->fcs_bad += VAR_8[3];

 VAR_6->beacons += VAR_8[4];
}
