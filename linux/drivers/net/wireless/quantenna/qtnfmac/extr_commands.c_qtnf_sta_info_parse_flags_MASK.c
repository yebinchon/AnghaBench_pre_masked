
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlink_sta_info_state {int value; int mask; } ;
struct nl80211_sta_flag_update {int set; int mask; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct nl80211_sta_flag_update *VAR_14,
     const struct qlink_sta_info_state *VAR_15)
{
 u32 VAR_16, VAR_17;

 VAR_14->mask = 0;
 VAR_14->set = 0;

 VAR_16 = FUNC_1(VAR_15->mask);
 VAR_17 = FUNC_1(VAR_15->value);

 if (VAR_16 & VAR_9) {
  VAR_14->mask |= FUNC_0(VAR_2);
  if (VAR_17 & VAR_9)
   VAR_14->set |= FUNC_0(VAR_2);
 }

 if (VAR_16 & VAR_11) {
  VAR_14->mask |= FUNC_0(VAR_4);
  if (VAR_17 & VAR_11)
   VAR_14->set |= FUNC_0(VAR_4);
 }

 if (VAR_16 & VAR_13) {
  VAR_14->mask |= FUNC_0(VAR_6);
  if (VAR_17 & VAR_13)
   VAR_14->set |= FUNC_0(VAR_6);
 }

 if (VAR_16 & VAR_10) {
  VAR_14->mask |= FUNC_0(VAR_3);
  if (VAR_17 & VAR_10)
   VAR_14->set |= FUNC_0(VAR_3);
 }

 if (VAR_16 & VAR_8) {
  VAR_14->mask |= FUNC_0(VAR_1);
  if (VAR_17 & VAR_8)
   VAR_14->set |= FUNC_0(VAR_1);
 }

 if (VAR_16 & VAR_12) {
  VAR_14->mask |= FUNC_0(VAR_5);
  if (VAR_17 & VAR_12)
   VAR_14->set |= FUNC_0(VAR_5);
 }

 if (VAR_16 & VAR_7) {
  VAR_14->mask |= FUNC_0(VAR_0);
  if (VAR_17 & VAR_7)
   VAR_14->set |= FUNC_0(VAR_0);
 }
}
