
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct lbtf_private {int mac_control; scalar_t__ nr_of_multicastmacaddr; } ;
struct ieee80211_hw {struct lbtf_private* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct lbtf_private*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct lbtf_private*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_7,
   unsigned int VAR_8,
   unsigned int *VAR_9,
   u64 VAR_10)
{
 struct lbtf_private *VAR_11 = VAR_7->priv;
 int VAR_12 = VAR_11->mac_control;

 FUNC_1(VAR_4);

 VAR_8 &= VAR_6;
 *VAR_9 &= VAR_6;

 if (!VAR_8) {
  FUNC_2(VAR_4);
  return;
 }

 VAR_11->mac_control &= ~VAR_2;
 if (*VAR_9 & (VAR_3) ||
     VAR_10 > VAR_5) {
  VAR_11->mac_control |= VAR_0;
  VAR_11->mac_control &= ~VAR_1;
 } else if (VAR_10) {
  VAR_11->mac_control |= VAR_1;
  VAR_11->mac_control &= ~VAR_0;
  FUNC_0(VAR_11);
 } else {
  VAR_11->mac_control &= ~(VAR_1 |
           VAR_0);
  if (VAR_11->nr_of_multicastmacaddr) {
   VAR_11->nr_of_multicastmacaddr = 0;
   FUNC_0(VAR_11);
  }
 }


 if (VAR_11->mac_control != VAR_12)
  FUNC_3(VAR_11);

 FUNC_2(VAR_4);
}
