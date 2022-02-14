
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct txentry_desc {int dummy; } ;
struct skb_frame_desc {int desc_len; int desc; int flags; } ;
struct rt2x00_dev {int dummy; } ;
struct queue_entry {TYPE_2__* skb; int flags; int entry_idx; TYPE_1__* queue; } ;
struct TYPE_7__ {unsigned int len; int data; } ;
struct TYPE_6__ {int winfo_size; struct rt2x00_dev* rt2x00dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 struct skb_frame_desc* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,int const) ;
 unsigned int FUNC_4 (unsigned int,int) ;
 unsigned int FUNC_5 (struct rt2x00_dev*,int ) ;
 int FUNC_6 (struct rt2x00_dev*,unsigned int,int ,unsigned int) ;
 int FUNC_7 (struct rt2x00_dev*,int ) ;
 int FUNC_8 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_9 (struct rt2x00_dev*) ;
 int FUNC_10 (struct queue_entry*,struct txentry_desc*) ;
 int FUNC_11 (struct rt2x00_dev*,char*) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (struct rt2x00_dev*,int ,struct queue_entry*) ;
 scalar_t__ FUNC_14 (TYPE_2__*,unsigned int) ;
 int FUNC_15 (TYPE_2__*,int const) ;

void FUNC_16(struct queue_entry *VAR_5, struct txentry_desc *VAR_6)
{
 struct rt2x00_dev *VAR_7 = VAR_5->queue->rt2x00dev;
 struct skb_frame_desc *VAR_8 = FUNC_2(VAR_5->skb);
 unsigned int VAR_9;
 unsigned int VAR_10;
 u32 VAR_11, VAR_12;
 const int VAR_13 = VAR_5->queue->winfo_size;





 VAR_12 = FUNC_7(VAR_7, VAR_0);
 VAR_11 = VAR_12;
 FUNC_12(&VAR_12, VAR_1, 0);
 FUNC_8(VAR_7, VAR_0, VAR_12);




 FUNC_3(FUNC_15(VAR_5->skb, VAR_13), 0, VAR_13);




 VAR_8->flags |= VAR_4;
 VAR_8->desc = VAR_5->skb->data;
 VAR_8->desc_len = VAR_13;




 FUNC_10(VAR_5, VAR_6);




 FUNC_13(VAR_7, VAR_2, VAR_5);




 VAR_10 = FUNC_4(VAR_5->skb->len, 4) - VAR_5->skb->len;
 if (VAR_10 && FUNC_14(VAR_5->skb, VAR_10)) {
  FUNC_11(VAR_7, "Failure padding beacon, aborting\n");

  VAR_5->skb = ((void*)0);
  FUNC_8(VAR_7, VAR_0, VAR_11);
  return;
 }

 VAR_9 = FUNC_5(VAR_7, VAR_5->entry_idx);

 FUNC_6(VAR_7, VAR_9, VAR_5->skb->data,
       VAR_5->skb->len + VAR_10);
 FUNC_0(VAR_3, &VAR_5->flags);




 FUNC_9(VAR_7);




 FUNC_8(VAR_7, VAR_0, VAR_11);




 FUNC_1(VAR_5->skb);
 VAR_5->skb = ((void*)0);
}
