
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct ieee80211_tx_info {scalar_t__ rate_driver_data; } ;
struct ieee80211_hdr {int dummy; } ;
struct carl9170_tx_info {scalar_t__ timeout; } ;
struct ar9170 {int dummy; } ;
struct TYPE_4__ {int phy_control; int mac_control; } ;
struct TYPE_3__ {int cookie; } ;
struct _carl9170_tx_superframe {TYPE_2__ f; TYPE_1__ s; scalar_t__ frame_data; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,int ,int ,char*,char const*,struct sk_buff*,int ,int ,int ,int ,int ,int ) ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct ieee80211_hdr*) ;
 int FUNC_3 (struct ieee80211_hdr*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct ar9170 *VAR_1,
 struct sk_buff *VAR_2, const char *VAR_3, char *VAR_4,
 ssize_t *VAR_5, ssize_t VAR_6)
{
 struct _carl9170_tx_superframe *VAR_7 = (void *) VAR_2->data;
 struct ieee80211_tx_info *VAR_8 = FUNC_1(VAR_2);
 struct carl9170_tx_info *VAR_9 = (void *) VAR_8->rate_driver_data;
 struct ieee80211_hdr *VAR_10 = (void *) VAR_7->frame_data;

 FUNC_0(VAR_4, *VAR_5, VAR_6, "%s %p, c:%2x, DA:%pM, sq:%4d, mc:%.4x, "
     "pc:%.8x, to:%d ms\n", VAR_3, VAR_2, VAR_7->s.cookie,
     FUNC_3(VAR_10), FUNC_2(VAR_10),
     FUNC_5(VAR_7->f.mac_control), FUNC_6(VAR_7->f.phy_control),
     FUNC_4(VAR_0 - VAR_9->timeout));
}
