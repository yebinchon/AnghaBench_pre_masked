
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct txentry_desc {int flags; } ;
struct skb_frame_desc {int desc_len; int * desc; int flags; } ;
struct queue_entry {TYPE_1__* queue; TYPE_2__* skb; } ;
typedef int __le32 ;
struct TYPE_4__ {int len; scalar_t__ data; } ;
struct TYPE_3__ {int winfo_size; } ;


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
 struct skb_frame_desc* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct queue_entry *VAR_10,
        struct txentry_desc *VAR_11)
{
 struct skb_frame_desc *VAR_12 = FUNC_0(VAR_10->skb);
 __le32 *VAR_13 = (__le32 *) VAR_10->skb->data;
 u32 VAR_14;




 VAR_14 = FUNC_2(VAR_13, 0);






 FUNC_4(&VAR_14, VAR_8,
      FUNC_1(VAR_10->skb->len, 4) - VAR_3);
 FUNC_4(&VAR_14, VAR_9,
      !FUNC_5(VAR_1, &VAR_11->flags));
 FUNC_4(&VAR_14, VAR_4, 2);
 FUNC_4(&VAR_14, VAR_5, 0);
 FUNC_4(&VAR_14, VAR_6, 0);
 FUNC_4(&VAR_14, VAR_7,
      FUNC_5(VAR_0, &VAR_11->flags));
 FUNC_3(VAR_13, 0, VAR_14);




 VAR_12->flags |= VAR_2;
 VAR_12->desc = VAR_13;
 VAR_12->desc_len = VAR_3 + VAR_10->queue->winfo_size;
}
