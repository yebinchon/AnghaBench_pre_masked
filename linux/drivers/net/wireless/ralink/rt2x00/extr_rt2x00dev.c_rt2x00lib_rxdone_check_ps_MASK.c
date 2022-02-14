
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct rxdone_entry_desc {int dev_flags; } ;
struct rt2x00_dev {int sleep_work; int workqueue; int flags; int aid; int last_beacon; TYPE_2__* hw; } ;
struct ieee80211_tim_ie {int bitmap_ctrl; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ conf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ieee80211_tim_ie*,int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int *) ;
 int* FUNC_4 (scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct rt2x00_dev *VAR_6,
          struct sk_buff *VAR_7,
          struct rxdone_entry_desc *VAR_8)
{
 struct ieee80211_hdr *VAR_9 = (void *) VAR_7->data;
 struct ieee80211_tim_ie *VAR_10;
 u8 *VAR_11;
 u8 VAR_12;
 bool VAR_13;




 if (FUNC_2(!FUNC_1(VAR_9->frame_control) ||
     !(VAR_6->hw->conf.flags & VAR_2)))
  return;


 if (VAR_7->len <= 40 + VAR_1)
  return;


 if (!(VAR_8->dev_flags & VAR_3) ||
     !VAR_6->aid)
  return;

 VAR_6->last_beacon = VAR_5;

 VAR_11 = FUNC_4(VAR_7->data, VAR_7->len - VAR_1, VAR_4);
 if (!VAR_11)
  return;

 if (VAR_11[1] < sizeof(*VAR_10))
  return;

 VAR_12 = VAR_11[1];
 VAR_10 = (struct ieee80211_tim_ie *) &VAR_11[2];




 VAR_13 = FUNC_0(VAR_10, VAR_12, VAR_6->aid);


 VAR_13 |= (VAR_10->bitmap_ctrl & 0x01);

 if (!VAR_13 && !FUNC_5(VAR_0, &VAR_6->flags))
  FUNC_3(VAR_6->workqueue, &VAR_6->sleep_work);
}
