
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {int dummy; } ;
struct brcmf_cfg80211_info {scalar_t__ extra_buf; struct brcmf_pub* pub; } ;
struct brcmf_cfg80211_connect_info {void* resp_ie_len; void* req_ie_len; int * resp_ie; int * req_ie; } ;
struct brcmf_cfg80211_assoc_ielen_le {int resp_len; int req_len; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct brcmf_pub*,char*,scalar_t__) ;
 int FUNC_1 (struct brcmf_cfg80211_info*) ;
 int FUNC_2 (int ,char*,void*,void*) ;
 scalar_t__ FUNC_3 (struct brcmf_if*,char*,scalar_t__,int ) ;
 struct brcmf_cfg80211_connect_info* FUNC_4 (struct brcmf_cfg80211_info*) ;
 void* FUNC_5 (scalar_t__,void*,int ) ;
 void* FUNC_6 (int ) ;

__attribute__((used)) static s32 FUNC_7(struct brcmf_cfg80211_info *VAR_3,
          struct brcmf_if *VAR_4)
{
 struct brcmf_pub *VAR_5 = VAR_3->pub;
 struct brcmf_cfg80211_assoc_ielen_le *VAR_6;
 struct brcmf_cfg80211_connect_info *VAR_7 = FUNC_4(VAR_3);
 u32 VAR_8;
 u32 VAR_9;
 s32 VAR_10 = 0;

 FUNC_1(VAR_3);

 VAR_10 = FUNC_3(VAR_4, "assoc_info",
           VAR_3->extra_buf, VAR_2);
 if (VAR_10) {
  FUNC_0(VAR_5, "could not get assoc info (%d)\n", VAR_10);
  return VAR_10;
 }
 VAR_6 =
  (struct brcmf_cfg80211_assoc_ielen_le *)VAR_3->extra_buf;
 VAR_8 = FUNC_6(VAR_6->req_len);
 VAR_9 = FUNC_6(VAR_6->resp_len);
 if (VAR_8) {
  VAR_10 = FUNC_3(VAR_4, "assoc_req_ies",
            VAR_3->extra_buf,
            VAR_2);
  if (VAR_10) {
   FUNC_0(VAR_5, "could not get assoc req (%d)\n", VAR_10);
   return VAR_10;
  }
  VAR_7->req_ie_len = VAR_8;
  VAR_7->req_ie =
      FUNC_5(VAR_3->extra_buf, VAR_7->req_ie_len,
       VAR_1);
  if (!VAR_7->req_ie)
   VAR_7->req_ie_len = 0;
 } else {
  VAR_7->req_ie_len = 0;
  VAR_7->req_ie = ((void*)0);
 }
 if (VAR_9) {
  VAR_10 = FUNC_3(VAR_4, "assoc_resp_ies",
            VAR_3->extra_buf,
            VAR_2);
  if (VAR_10) {
   FUNC_0(VAR_5, "could not get assoc resp (%d)\n", VAR_10);
   return VAR_10;
  }
  VAR_7->resp_ie_len = VAR_9;
  VAR_7->resp_ie =
      FUNC_5(VAR_3->extra_buf, VAR_7->resp_ie_len,
       VAR_1);
  if (!VAR_7->resp_ie)
   VAR_7->resp_ie_len = 0;
 } else {
  VAR_7->resp_ie_len = 0;
  VAR_7->resp_ie = ((void*)0);
 }
 FUNC_2(VAR_0, "req len (%d) resp len (%d)\n",
    VAR_7->req_ie_len, VAR_7->resp_ie_len);

 return VAR_10;
}
