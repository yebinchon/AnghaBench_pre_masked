
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int __le16 ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static inline bool FUNC_4(struct sk_buff *VAR_1)
{
 struct ieee80211_hdr *VAR_2 = (void *)VAR_1->data;
 __le16 VAR_3 = VAR_2->frame_control;
 int VAR_4 = 24;

 if (!FUNC_2(VAR_3))
  return 0;







 if (FUNC_1(VAR_3))
  VAR_4 += 6;
 if (FUNC_3(VAR_3))
  VAR_4 += 2;



 VAR_4 += 6;

 return VAR_1->len <= VAR_4 + 2 ||
  *(__be16 *)(VAR_1->data + VAR_4) != FUNC_0(VAR_0);
}
