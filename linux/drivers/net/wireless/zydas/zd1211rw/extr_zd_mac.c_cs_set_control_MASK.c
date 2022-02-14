
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zd_mac {int dummy; } ;
struct zd_ctrlset {int control; } ;
struct TYPE_4__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_2__ control; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct zd_mac *VAR_9, struct zd_ctrlset *VAR_10,
                    struct ieee80211_hdr *VAR_11,
                    struct ieee80211_tx_info *VAR_12)
{






 VAR_10->control = 0;


 if (VAR_12->flags & VAR_0)
  VAR_10->control |= VAR_4;


 if (VAR_12->flags & VAR_1)
  VAR_10->control |= VAR_5;


 if (FUNC_0(VAR_11->frame_control))
  VAR_10->control |= VAR_6;

 if (VAR_12->control.rates[0].flags & VAR_3)
  VAR_10->control |= VAR_7;

 if (VAR_12->control.rates[0].flags & VAR_2)
  VAR_10->control |= VAR_8;


}
