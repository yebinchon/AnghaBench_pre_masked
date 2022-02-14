
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int __le16 ;


 size_t FUNC_0 (size_t*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 size_t* VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 size_t FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static u8 FUNC_7(struct sk_buff *VAR_4)
{
 struct ieee80211_hdr *VAR_5 = (struct ieee80211_hdr *)VAR_4->data;
 __le16 VAR_6 = VAR_5->frame_control;
 u8 VAR_7 = FUNC_5(VAR_4);
 u8 VAR_8;

 if (FUNC_6(FUNC_2(VAR_6)))
  VAR_8 = VAR_1;
 else if (FUNC_6(FUNC_4(VAR_6) || FUNC_3(VAR_6)))
  VAR_8 = VAR_2;
 else if (FUNC_1(VAR_7 >= FUNC_0(VAR_3)))
  VAR_8 = VAR_3[VAR_0];
 else
  VAR_8 = VAR_3[VAR_7];

 return VAR_8;
}
