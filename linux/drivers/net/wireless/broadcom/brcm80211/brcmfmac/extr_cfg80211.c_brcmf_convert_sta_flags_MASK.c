
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nl80211_sta_flag_update {int mask; int set; } ;
struct station_info {struct nl80211_sta_flag_update sta_flags; int filled; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
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
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void FUNC_3(u32 VAR_10, struct station_info *VAR_11)
{
 struct nl80211_sta_flag_update *VAR_12;

 FUNC_2(VAR_9, "flags %08x\n", VAR_10);
 VAR_11->filled |= FUNC_1(VAR_8);
 VAR_12 = &VAR_11->sta_flags;
 VAR_12->mask = FUNC_0(VAR_7) |
      FUNC_0(VAR_5) |
      FUNC_0(VAR_4) |
      FUNC_0(VAR_6);
 if (VAR_10 & VAR_3)
  VAR_12->set |= FUNC_0(VAR_7);
 if (VAR_10 & VAR_1)
  VAR_12->set |= FUNC_0(VAR_5);
 if (VAR_10 & VAR_0)
  VAR_12->set |= FUNC_0(VAR_4);
 if (VAR_10 & VAR_2)
  VAR_12->set |= FUNC_0(VAR_6);
}
