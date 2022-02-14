
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fc; } ;
union p80211_hdr {TYPE_1__ a3; } ;
struct wlandevice {int hostwep; struct hfa384x* priv; } ;
struct sk_buff {int dummy; } ;
struct p80211_metawep {int dummy; } ;
struct hfa384x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hfa384x*,struct sk_buff*,union p80211_hdr*,struct p80211_metawep*) ;

__attribute__((used)) static int FUNC_3(struct wlandevice *VAR_2, struct sk_buff *VAR_3,
        union p80211_hdr *VAR_4,
        struct p80211_metawep *VAR_5)
{
 struct hfa384x *VAR_6 = VAR_2->priv;


 if ((VAR_2->hostwep & (VAR_1 | VAR_0)) ==
     VAR_1) {
  VAR_4->a3.fc |= FUNC_1(FUNC_0(1));
 }

 return FUNC_2(VAR_6, VAR_3, VAR_4, VAR_5);
}
