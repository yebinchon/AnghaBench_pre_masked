
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct iwl_mvm_sta {void* orig_amsdu_len; } ;
struct ieee80211_sta {void* max_amsdu_len; void** max_tid_amsdu_len; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 int FUNC_0 (void**) ;
 size_t VAR_0 ;
 struct iwl_mvm_sta* FUNC_1 (struct ieee80211_sta*) ;
 scalar_t__ FUNC_2 (char*,int ,void**) ;

__attribute__((used)) static ssize_t FUNC_3(struct ieee80211_sta *VAR_1,
      char *VAR_2, size_t VAR_3,
      loff_t *VAR_4)
{
 struct iwl_mvm_sta *VAR_5 = FUNC_1(VAR_1);
 int VAR_6;
 u16 VAR_7;

 if (FUNC_2(VAR_2, 0, &VAR_7))
  return -VAR_0;

 if (VAR_7) {
  VAR_5->orig_amsdu_len = VAR_1->max_amsdu_len;
  VAR_1->max_amsdu_len = VAR_7;
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1->max_tid_amsdu_len); VAR_6++)
   VAR_1->max_tid_amsdu_len[VAR_6] = VAR_7;
 } else {
  VAR_1->max_amsdu_len = VAR_5->orig_amsdu_len;
  VAR_5->orig_amsdu_len = 0;
 }
 return VAR_3;
}
