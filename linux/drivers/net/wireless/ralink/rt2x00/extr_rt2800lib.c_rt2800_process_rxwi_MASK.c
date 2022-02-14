
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rxdone_entry_desc {int signal; scalar_t__ rate_mode; int rssi; int dev_flags; int bw; int enc_flags; void* size; void* cipher; } ;
struct queue_entry {TYPE_1__* queue; TYPE_2__* skb; } ;
typedef int __le32 ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {int winfo_size; int rt2x00dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int) ;
 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;

void FUNC_4(struct queue_entry *VAR_10,
    struct rxdone_entry_desc *VAR_11)
{
 __le32 *VAR_12 = (__le32 *) VAR_10->skb->data;
 u32 VAR_13;

 VAR_13 = FUNC_1(VAR_12, 0);

 VAR_11->cipher = FUNC_2(VAR_13, VAR_4);
 VAR_11->size = FUNC_2(VAR_13, VAR_3);

 VAR_13 = FUNC_1(VAR_12, 1);

 if (FUNC_2(VAR_13, VAR_8))
  VAR_11->enc_flags |= VAR_9;

 if (FUNC_2(VAR_13, VAR_5))
  VAR_11->bw = VAR_0;




 VAR_11->dev_flags |= VAR_2;
 VAR_11->signal = FUNC_2(VAR_13, VAR_6);
 VAR_11->rate_mode = FUNC_2(VAR_13, VAR_7);




 if (VAR_11->rate_mode == VAR_1)
  VAR_11->signal &= ~0x8;

 VAR_13 = FUNC_1(VAR_12, 2);




 VAR_11->rssi = FUNC_0(VAR_10->queue->rt2x00dev, VAR_13);



 FUNC_3(VAR_10->skb, VAR_10->queue->winfo_size);
}
