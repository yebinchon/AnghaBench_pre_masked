
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct mwifiex_private {void* assocresp_idx; void* proberesp_idx; void* beacon_idx; } ;
struct mwifiex_ie {int dummy; } ;
struct cfg80211_beacon_data {scalar_t__ assocresp_ies_len; scalar_t__ assocresp_ies; scalar_t__ proberesp_ies_len; scalar_t__ proberesp_ies; scalar_t__ beacon_ies_len; scalar_t__ beacon_ies; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct mwifiex_ie*) ;
 int FUNC_1 (struct mwifiex_private*,struct mwifiex_ie*,void**,struct mwifiex_ie*,void**,struct mwifiex_ie*,void**) ;
 int FUNC_2 (scalar_t__,scalar_t__,struct mwifiex_ie**,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mwifiex_private *VAR_9,
         struct cfg80211_beacon_data *VAR_10)
{
 struct mwifiex_ie *VAR_11 = ((void*)0), *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 u16 VAR_14 = VAR_4, VAR_15 = VAR_4;
 u16 VAR_16 = VAR_4;
 int VAR_17 = 0;

 if (VAR_10->beacon_ies && VAR_10->beacon_ies_len) {
  FUNC_2(VAR_10->beacon_ies, VAR_10->beacon_ies_len,
         &VAR_11, VAR_1,
         VAR_5,
         VAR_6);
  FUNC_2(VAR_10->beacon_ies, VAR_10->beacon_ies_len,
         &VAR_11, VAR_1,
         VAR_8, VAR_7);
 }

 if (VAR_10->proberesp_ies && VAR_10->proberesp_ies_len) {
  FUNC_2(VAR_10->proberesp_ies,
         VAR_10->proberesp_ies_len, &VAR_12,
         VAR_2, VAR_5,
         VAR_6);
  FUNC_2(VAR_10->proberesp_ies,
         VAR_10->proberesp_ies_len, &VAR_12,
         VAR_2,
         VAR_8, VAR_7);
 }

 if (VAR_10->assocresp_ies && VAR_10->assocresp_ies_len) {
  FUNC_2(VAR_10->assocresp_ies,
         VAR_10->assocresp_ies_len, &VAR_13,
         VAR_0 |
         VAR_3,
         VAR_5,
         VAR_6);
  FUNC_2(VAR_10->assocresp_ies,
         VAR_10->assocresp_ies_len, &VAR_13,
         VAR_0 |
         VAR_3, VAR_8,
         VAR_7);
 }

 if (VAR_11 || VAR_12 || VAR_13) {
  VAR_17 = FUNC_1(VAR_9, VAR_11,
         &VAR_14, VAR_12,
         &VAR_15, VAR_13, &VAR_16);
  if (VAR_17)
   goto done;
 }

 VAR_9->beacon_idx = VAR_14;
 VAR_9->proberesp_idx = VAR_15;
 VAR_9->assocresp_idx = VAR_16;

done:
 FUNC_0(VAR_11);
 FUNC_0(VAR_12);
 FUNC_0(VAR_13);

 return VAR_17;
}
