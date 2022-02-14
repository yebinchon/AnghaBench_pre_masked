
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct qtnf_wmac {int macid; struct cfg80211_scan_request* scan_req; } ;
struct cfg80211_scan_request {scalar_t__ duration_mandatory; scalar_t__ duration; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct sk_buff*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct qtnf_wmac *VAR_6,
        struct sk_buff *VAR_7)
{
 struct cfg80211_scan_request *VAR_8 = VAR_6->scan_req;
 u16 VAR_9 = VAR_0;
 u16 VAR_10 = VAR_1;
 u16 VAR_11 = VAR_2;

 if (VAR_8->duration) {
  VAR_9 = VAR_8->duration;
  VAR_10 = VAR_8->duration;
 }

 FUNC_0("MAC%u: %s scan dwell active=%u, passive=%u, duration=%u\n",
   VAR_6->macid,
   VAR_8->duration_mandatory ? "mandatory" : "max",
   VAR_9, VAR_10, VAR_11);

 FUNC_1(VAR_7,
     VAR_3,
     VAR_9);
 FUNC_1(VAR_7,
     VAR_4,
     VAR_10);
 FUNC_1(VAR_7,
     VAR_5,
     VAR_11);
}
