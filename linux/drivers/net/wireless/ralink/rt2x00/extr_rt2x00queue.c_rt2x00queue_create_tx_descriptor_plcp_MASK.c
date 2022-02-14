
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int signal; int service; unsigned int length_high; unsigned int length_low; int ifs; } ;
struct TYPE_6__ {TYPE_2__ plcp; } ;
struct txentry_desc {TYPE_3__ u; int flags; } ;
struct sk_buff {int len; } ;
struct rt2x00_rate {int plcp; int flags; int bitrate; } ;
struct rt2x00_dev {int dummy; } ;
struct ieee80211_tx_rate {int flags; } ;
struct TYPE_4__ {struct ieee80211_tx_rate* rates; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int,int) ;
 unsigned int FUNC_1 (unsigned int,int) ;
 struct ieee80211_tx_info* FUNC_2 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct rt2x00_dev*,struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct rt2x00_dev *VAR_5,
        struct sk_buff *VAR_6,
        struct txentry_desc *VAR_7,
        const struct rt2x00_rate *VAR_8)
{
 struct ieee80211_tx_info *VAR_9 = FUNC_2(VAR_6);
 struct ieee80211_tx_rate *VAR_10 = &VAR_9->control.rates[0];
 unsigned int VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;






 if (FUNC_4(VAR_1, &VAR_7->flags))
  VAR_7->u.plcp.ifs = VAR_3;
 else
  VAR_7->u.plcp.ifs = VAR_4;


 VAR_11 = VAR_6->len + 4;
 VAR_11 += FUNC_3(VAR_5, VAR_6);





 VAR_7->u.plcp.signal = VAR_8->plcp;
 VAR_7->u.plcp.service = 0x04;

 if (VAR_8->flags & VAR_0) {
  VAR_7->u.plcp.length_high = (VAR_11 >> 6) & 0x3f;
  VAR_7->u.plcp.length_low = VAR_11 & 0x3f;
 } else {



  VAR_13 = FUNC_1(VAR_11, VAR_8->bitrate);
  VAR_12 = FUNC_0(VAR_11, VAR_8->bitrate);

  if (VAR_13 != 0) {
   VAR_12++;




   if (VAR_8->bitrate == 110 && VAR_13 <= 30)
    VAR_7->u.plcp.service |= 0x80;
  }

  VAR_7->u.plcp.length_high = (VAR_12 >> 8) & 0xff;
  VAR_7->u.plcp.length_low = VAR_12 & 0xff;





  if (VAR_10->flags & VAR_2)
   VAR_7->u.plcp.signal |= 0x08;
 }
}
