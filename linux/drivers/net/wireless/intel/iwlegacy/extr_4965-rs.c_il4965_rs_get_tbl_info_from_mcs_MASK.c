
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct il_scale_tbl_info {int is_SGI; int is_ht40; int is_dup; int ant_type; int lq_type; int max_search; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int const VAR_9 ;
 int VAR_10 ;
 int const VAR_11 ;
 int const VAR_12 ;
 int const VAR_13 ;
 int const VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (struct il_scale_tbl_info*,int ,int) ;

__attribute__((used)) static int
FUNC_4(const u32 VAR_16,
    enum nl80211_band VAR_17,
    struct il_scale_tbl_info *VAR_18, int *VAR_19)
{
 u32 VAR_20 = (VAR_16 & VAR_9);
 u8 VAR_21 =
     FUNC_0(VAR_16);
 u8 VAR_22;

 FUNC_3(VAR_18, 0, sizeof(struct il_scale_tbl_info));
 *VAR_19 = FUNC_1(VAR_16);

 if (*VAR_19 == VAR_8) {
  *VAR_19 = -1;
  return -VAR_0;
 }
 VAR_18->is_SGI = 0;
 VAR_18->is_ht40 = 0;
 VAR_18->is_dup = 0;
 VAR_18->ant_type = (VAR_20 >> VAR_10);
 VAR_18->lq_type = VAR_5;
 VAR_18->max_search = VAR_1;


 if (!(VAR_16 & VAR_13)) {
  if (VAR_21 == 1) {
   if (VAR_17 == VAR_7)
    VAR_18->lq_type = VAR_2;
   else
    VAR_18->lq_type = VAR_3;
  }

 } else {
  if (VAR_16 & VAR_14)
   VAR_18->is_SGI = 1;

  if ((VAR_16 & VAR_12) ||
      (VAR_16 & VAR_11))
   VAR_18->is_ht40 = 1;

  if (VAR_16 & VAR_11)
   VAR_18->is_dup = 1;

  VAR_22 = FUNC_2(VAR_16);


  if (VAR_22 <= VAR_15) {
   if (VAR_21 == 1)
    VAR_18->lq_type = VAR_6;

  } else {
   if (VAR_21 == 2)
    VAR_18->lq_type = VAR_4;
  }
 }
 return 0;
}
