
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct txdone_entry_desc {int retry; scalar_t__ flags; } ;
struct skb_frame_desc {int * sta; } ;
struct rt2x00_dev {int long_retry; int curr_band; struct rt2800_drv_data* drv_data; } ;
struct rt2800_drv_data {int ** wcid_to_sta; } ;
struct queue_entry {int skb; TYPE_1__* queue; } ;
typedef int __le32 ;
struct TYPE_2__ {struct rt2x00_dev* rt2x00dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,scalar_t__*) ;
 struct skb_frame_desc* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct skb_frame_desc*,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct queue_entry*,struct txdone_entry_desc*) ;
 int FUNC_9 (struct queue_entry*,struct txdone_entry_desc*) ;
 scalar_t__ FUNC_10 (int) ;

void FUNC_11(struct queue_entry *VAR_14, u32 VAR_15, __le32 *VAR_16,
    bool VAR_17)
{
 struct rt2x00_dev *VAR_18 = VAR_14->queue->rt2x00dev;
 struct rt2800_drv_data *VAR_19 = VAR_18->drv_data;
 struct skb_frame_desc *VAR_20 = FUNC_1(VAR_14->skb);
 struct txdone_entry_desc VAR_21;
 u32 VAR_22;
 u16 VAR_23, VAR_24;
 int VAR_25, VAR_26, VAR_27, VAR_28;




 VAR_21.flags = 0;
 VAR_22 = FUNC_6(VAR_16, 0);

 VAR_23 = FUNC_7(VAR_22, VAR_6);
 VAR_26 = FUNC_7(VAR_22, VAR_5);

 VAR_24 = FUNC_7(VAR_15, VAR_7);
 VAR_25 = FUNC_7(VAR_15, VAR_9);
 VAR_27 = FUNC_7(VAR_15, VAR_11);
 VAR_28 = FUNC_7(VAR_15, VAR_8);
 if (FUNC_10((VAR_25 == 1 && VAR_26 == 0 && VAR_24 != VAR_23)) || !VAR_17) {
  FUNC_5(VAR_20, VAR_15, VAR_18->curr_band);
  VAR_23 = VAR_24;
 }

 if (VAR_25 == 1 || VAR_26 == 1)
  FUNC_0(VAR_0, &VAR_21.flags);

 if (!VAR_28)
  FUNC_0(VAR_3, &VAR_21.flags);
 if (FUNC_7(VAR_15, VAR_10)) {




  FUNC_0(VAR_4, &VAR_21.flags);
  VAR_21.retry = ((VAR_23 > VAR_24) ? VAR_23 - VAR_24 : 0);
 } else {





  FUNC_0(VAR_1, &VAR_21.flags);
  VAR_21.retry = VAR_18->long_retry;
 }





 if (VAR_21.retry)
  FUNC_0(VAR_2, &VAR_21.flags);

 if (!VAR_17) {

  FUNC_3();
  if (FUNC_2(VAR_27 >= VAR_13 && VAR_27 <= VAR_12))
   VAR_20->sta = VAR_19->wcid_to_sta[VAR_27 - VAR_13];
  else
   VAR_20->sta = ((void*)0);
  FUNC_9(VAR_14, &VAR_21);
  FUNC_4();
 } else {
  FUNC_8(VAR_14, &VAR_21);
 }
}
