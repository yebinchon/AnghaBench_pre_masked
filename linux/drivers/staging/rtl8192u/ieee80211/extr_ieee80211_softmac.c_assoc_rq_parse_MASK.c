
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_info_element {int dummy; } ;
struct TYPE_2__ {int addr2; } ;
struct ieee80211_assoc_request_frame {TYPE_1__ header; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1, u8 *VAR_2)
{
 struct ieee80211_assoc_request_frame *VAR_3;

 if (VAR_1->len < (sizeof(struct ieee80211_assoc_request_frame) -
  sizeof(struct ieee80211_info_element))) {
  FUNC_0("invalid len in auth request:%d \n", VAR_1->len);
  return -1;
 }

 VAR_3 = (struct ieee80211_assoc_request_frame *)VAR_1->data;

 FUNC_1(VAR_2, VAR_3->header.addr2, VAR_0);

 return 0;
}
