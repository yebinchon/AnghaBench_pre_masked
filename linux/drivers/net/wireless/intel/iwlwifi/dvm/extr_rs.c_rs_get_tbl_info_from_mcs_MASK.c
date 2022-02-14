
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct iwl_scale_tbl_info {int is_SGI; int is_ht40; int is_dup; int ant_type; int lq_type; int max_search; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int const VAR_13 ;
 int VAR_14 ;
 int const VAR_15 ;
 int const VAR_16 ;
 int const VAR_17 ;
 int const VAR_18 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (struct iwl_scale_tbl_info*,int ,int) ;
 int FUNC_3 (int const) ;

__attribute__((used)) static int FUNC_4(const u32 VAR_19,
        enum nl80211_band VAR_20,
        struct iwl_scale_tbl_info *VAR_21,
        int *VAR_22)
{
 u32 VAR_23 = (VAR_19 & VAR_13);
 u8 VAR_24 = FUNC_0(VAR_19);
 u8 VAR_25;

 FUNC_2(VAR_21, 0, sizeof(struct iwl_scale_tbl_info));
 *VAR_22 = FUNC_1(VAR_19);

 if (*VAR_22 == VAR_3) {
  *VAR_22 = -1;
  return -VAR_0;
 }
 VAR_21->is_SGI = 0;
 VAR_21->is_ht40 = 0;
 VAR_21->is_dup = 0;
 VAR_21->ant_type = (VAR_23 >> VAR_14);
 VAR_21->lq_type = VAR_10;
 VAR_21->max_search = VAR_2;


 if (!(VAR_19 & VAR_17)) {
  if (VAR_24 == 1) {
   if (VAR_20 == VAR_12)
    VAR_21->lq_type = VAR_6;
   else
    VAR_21->lq_type = VAR_7;
  }

 } else {
  if (VAR_19 & VAR_18)
   VAR_21->is_SGI = 1;

  if ((VAR_19 & VAR_16) ||
      (VAR_19 & VAR_15))
   VAR_21->is_ht40 = 1;

  if (VAR_19 & VAR_15)
   VAR_21->is_dup = 1;

  VAR_25 = FUNC_3(VAR_19);


  if (VAR_25 <= VAR_5) {
   if (VAR_24 == 1)
    VAR_21->lq_type = VAR_11;

  } else if (VAR_25 <= VAR_4) {
   if (VAR_24 == 2)
    VAR_21->lq_type = VAR_8;

  } else {
   if (VAR_24 == 3) {
    VAR_21->max_search = VAR_1;
    VAR_21->lq_type = VAR_9;
   }
  }
 }
 return 0;
}
