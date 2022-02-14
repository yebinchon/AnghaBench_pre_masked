
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_frame_desc {int flags; int skb_dma; } ;
struct sk_buff {int len; int data; } ;
struct rt2x00_dev {int dev; } ;
struct queue_entry {struct data_queue* queue; } ;
struct data_queue {unsigned int data_size; unsigned int desc_size; unsigned int winfo_size; struct rt2x00_dev* rt2x00dev; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 struct skb_frame_desc* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct skb_frame_desc*,int ,int) ;
 scalar_t__ FUNC_6 (struct rt2x00_dev*,int ) ;
 scalar_t__ FUNC_7 (struct rt2x00_dev*) ;
 int FUNC_8 (struct sk_buff*,unsigned int) ;
 int FUNC_9 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_10 (int ) ;

struct sk_buff *FUNC_11(struct queue_entry *VAR_3, gfp_t VAR_4)
{
 struct data_queue *VAR_5 = VAR_3->queue;
 struct rt2x00_dev *VAR_6 = VAR_5->rt2x00dev;
 struct sk_buff *VAR_7;
 struct skb_frame_desc *VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10 = 0;
 unsigned int VAR_11 = 0;





 VAR_9 = VAR_5->data_size + VAR_5->desc_size + VAR_5->winfo_size;






 VAR_10 = 4;






 if (FUNC_7(VAR_6)) {
  VAR_10 += 8;
  VAR_11 += 8;
 }




 VAR_7 = FUNC_0(VAR_9 + VAR_10 + VAR_11, VAR_4);
 if (!VAR_7)
  return ((void*)0);





 FUNC_9(VAR_7, VAR_10);
 FUNC_8(VAR_7, VAR_9);




 VAR_8 = FUNC_4(VAR_7);
 FUNC_5(VAR_8, 0, sizeof(*VAR_8));

 if (FUNC_6(VAR_6, VAR_1)) {
  dma_addr_t VAR_12;

  VAR_12 = FUNC_2(VAR_6->dev, VAR_7->data, VAR_7->len,
      VAR_0);
  if (FUNC_10(FUNC_3(VAR_6->dev, VAR_12))) {
   FUNC_1(VAR_7);
   return ((void*)0);
  }

  VAR_8->skb_dma = VAR_12;
  VAR_8->flags |= VAR_2;
 }

 return VAR_7;
}
