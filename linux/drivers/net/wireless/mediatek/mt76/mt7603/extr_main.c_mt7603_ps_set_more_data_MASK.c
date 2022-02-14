
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int * data; } ;
struct ieee80211_hdr {int frame_control; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct sk_buff *VAR_2)
{
 struct ieee80211_hdr *VAR_3;

 VAR_3 = (struct ieee80211_hdr *)&VAR_2->data[VAR_1];
 VAR_3->frame_control |= FUNC_0(VAR_0);
}
