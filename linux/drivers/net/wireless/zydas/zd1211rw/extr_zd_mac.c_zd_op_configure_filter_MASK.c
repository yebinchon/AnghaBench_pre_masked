
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct zd_mc_hash {int low; int high; } ;
struct zd_mac {int pass_failed_fcs; int pass_ctrl; int chip; int lock; struct zd_mc_hash multicast_hash; } ;
struct ieee80211_hw {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct zd_mac*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,struct zd_mc_hash*) ;
 struct zd_mac* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct zd_mac*) ;
 int FUNC_7 (struct zd_mc_hash*) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_4,
   unsigned int VAR_5,
   unsigned int *VAR_6,
   u64 VAR_7)
{
 struct zd_mc_hash VAR_8 = {
  .low = VAR_7,
  .high = VAR_7 >> 32,
 };
 struct zd_mac *VAR_9 = FUNC_5(VAR_4);
 unsigned long VAR_10;
 int VAR_11;


 VAR_5 &= VAR_3;
 *VAR_6 &= VAR_3;
 if (*VAR_6 & VAR_0)
  FUNC_7(&VAR_8);

 FUNC_2(&VAR_9->lock, VAR_10);
 VAR_9->pass_failed_fcs = !!(*VAR_6 & VAR_2);
 VAR_9->pass_ctrl = !!(*VAR_6 & VAR_1);
 VAR_9->multicast_hash = VAR_8;
 FUNC_3(&VAR_9->lock, VAR_10);

 FUNC_4(&VAR_9->chip, &VAR_8);

 if (VAR_5 & VAR_1) {
  VAR_11 = FUNC_1(VAR_9);
  if (VAR_11)
   FUNC_0(FUNC_6(VAR_9), "set_rx_filter error %d\n", VAR_11);
 }
}
