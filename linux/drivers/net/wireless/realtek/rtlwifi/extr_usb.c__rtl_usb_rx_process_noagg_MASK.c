
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ len; int * data; } ;
struct rtl_stats {int crc; scalar_t__ rx_bufshift; scalar_t__ rx_drvinfo_size; int rate; int signal; } ;
struct TYPE_8__ {int num_rx_inperiod; } ;
struct TYPE_5__ {int rxbytesunicast; } ;
struct rtl_priv {TYPE_4__ link_info; TYPE_3__* cfg; TYPE_1__ stats; } ;
struct ieee80211_rx_status {int member_0; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int addr1; int frame_control; } ;
typedef int rx_status ;
typedef int __le16 ;
struct TYPE_7__ {TYPE_2__* ops; } ;
struct TYPE_6__ {int (* led_control ) (struct ieee80211_hw*,int ) ;int (* query_rx_desc ) (struct ieee80211_hw*,struct rtl_stats*,struct ieee80211_rx_status*,int *,struct sk_buff*) ;} ;


 int FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_hw*,struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,struct ieee80211_rx_status*,int) ;
 int FUNC_8 (struct ieee80211_hw*,struct sk_buff*,int) ;
 int FUNC_9 (struct ieee80211_hw*,struct sk_buff*) ;
 struct rtl_priv* FUNC_10 (struct ieee80211_hw*) ;
 int FUNC_11 (struct sk_buff*,scalar_t__) ;
 int FUNC_12 (struct ieee80211_hw*,struct rtl_stats*,struct ieee80211_rx_status*,int *,struct sk_buff*) ;
 int FUNC_13 (struct ieee80211_hw*,int ) ;

__attribute__((used)) static void FUNC_14(struct ieee80211_hw *VAR_2,
          struct sk_buff *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_10(VAR_2);
 u8 *VAR_5 = VAR_3->data;
 struct ieee80211_hdr *VAR_6;
 bool VAR_7 = 0;
 __le16 VAR_8;
 struct ieee80211_rx_status VAR_9 = {0};
 struct rtl_stats VAR_10 = {
  .signal = 0,
  .rate = 0,
 };

 FUNC_11(VAR_3, VAR_1);
 VAR_4->cfg->ops->query_rx_desc(VAR_2, &VAR_10, &VAR_9, VAR_5, VAR_3);
 FUNC_11(VAR_3, (VAR_10.rx_drvinfo_size + VAR_10.rx_bufshift));
 VAR_6 = (struct ieee80211_hdr *)(VAR_3->data);
 VAR_8 = VAR_6->frame_control;
 if (!VAR_10.crc) {
  FUNC_7(FUNC_0(VAR_3), &VAR_9, sizeof(VAR_9));

  if (FUNC_4(VAR_6->addr1)) {
           ;
  } else if (FUNC_5(VAR_6->addr1)) {

  } else {
   VAR_7 = 1;
   VAR_4->stats.rxbytesunicast += VAR_3->len;
  }

  if (FUNC_2(VAR_8)) {
   VAR_4->cfg->ops->led_control(VAR_2, VAR_0);

   if (VAR_7)
    VAR_4->link_info.num_rx_inperiod++;
  }


  FUNC_9(VAR_2, VAR_3);

  if (FUNC_6(FUNC_8(VAR_2, VAR_3, 0)))
   FUNC_3(VAR_2, VAR_3);
  else
   FUNC_1(VAR_3);
 } else {
  FUNC_1(VAR_3);
 }
}
