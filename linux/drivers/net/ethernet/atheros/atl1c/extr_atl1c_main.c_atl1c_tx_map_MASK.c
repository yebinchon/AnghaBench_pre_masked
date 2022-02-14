
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ data; } ;
struct atl1c_tpd_desc {int word1; void* buffer_len; void* buffer_addr; } ;
struct atl1c_buffer {scalar_t__ length; void* dma; struct sk_buff* skb; } ;
struct atl1c_adapter {TYPE_2__* pdev; } ;
typedef int skb_frag_t ;
typedef enum atl1c_trans_queue { ____Placeholder_atl1c_trans_queue } atl1c_trans_queue ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {scalar_t__ nr_frags; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct atl1c_buffer*,int ) ;
 int FUNC_1 (struct atl1c_buffer*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct atl1c_tpd_desc* FUNC_2 (struct atl1c_adapter*,int) ;
 struct atl1c_buffer* FUNC_3 (struct atl1c_adapter*,struct atl1c_tpd_desc*) ;
 void* FUNC_4 (scalar_t__) ;
 void* FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (int *,void*) ;
 int FUNC_7 (struct atl1c_tpd_desc*,struct atl1c_tpd_desc*,int) ;
 int FUNC_8 (TYPE_2__*,void*) ;
 void* FUNC_9 (TYPE_2__*,scalar_t__,scalar_t__,int ) ;
 void* FUNC_10 (int *,int *,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 TYPE_1__* FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 (struct sk_buff*) ;
 scalar_t__ FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct atl1c_adapter *VAR_9,
        struct sk_buff *VAR_10, struct atl1c_tpd_desc *VAR_11,
   enum atl1c_trans_queue VAR_12)
{
 struct atl1c_tpd_desc *VAR_13 = ((void*)0);
 struct atl1c_buffer *VAR_14 = ((void*)0);
 u16 VAR_15 = FUNC_12(VAR_10);
 u16 VAR_16 = 0;
 u16 VAR_17 = 0;
 u16 VAR_18 = 0;
 u16 VAR_19;
 u16 VAR_20;
 int VAR_21;

 VAR_19 = FUNC_13(VAR_10)->nr_frags;
 VAR_21 = (VAR_11->word1 >> VAR_8) & VAR_7;
 if (VAR_21) {

  VAR_16 = VAR_18 = FUNC_14(VAR_10) + FUNC_15(VAR_10);
  VAR_13 = VAR_11;

  VAR_14 = FUNC_3(VAR_9, VAR_13);
  VAR_14->length = VAR_16;
  VAR_14->dma = FUNC_9(VAR_9->pdev,
     VAR_10->data, VAR_18, VAR_5);
  if (FUNC_16(FUNC_8(VAR_9->pdev,
         VAR_14->dma)))
   goto err_dma;
  FUNC_0(VAR_14, VAR_0);
  FUNC_1(VAR_14, VAR_2,
   VAR_3);
  VAR_17 += VAR_16;
  VAR_13->buffer_addr = FUNC_5(VAR_14->dma);
  VAR_13->buffer_len = FUNC_4(VAR_14->length);
 }

 if (VAR_17 < VAR_15) {


  if (VAR_17 == 0)
   VAR_13 = VAR_11;
  else {
   VAR_13 = FUNC_2(VAR_9, VAR_12);
   FUNC_7(VAR_13, VAR_11, sizeof(struct atl1c_tpd_desc));
  }
  VAR_14 = FUNC_3(VAR_9, VAR_13);
  VAR_14->length = VAR_15 - VAR_17;
  VAR_14->dma =
   FUNC_9(VAR_9->pdev, VAR_10->data + VAR_17,
     VAR_14->length, VAR_5);
  if (FUNC_16(FUNC_8(VAR_9->pdev,
         VAR_14->dma)))
   goto err_dma;

  FUNC_0(VAR_14, VAR_0);
  FUNC_1(VAR_14, VAR_2,
   VAR_3);
  VAR_13->buffer_addr = FUNC_5(VAR_14->dma);
  VAR_13->buffer_len = FUNC_4(VAR_14->length);
 }

 for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {
  skb_frag_t *VAR_22 = &FUNC_13(VAR_10)->frags[VAR_20];

  VAR_13 = FUNC_2(VAR_9, VAR_12);
  FUNC_7(VAR_13, VAR_11, sizeof(struct atl1c_tpd_desc));

  VAR_14 = FUNC_3(VAR_9, VAR_13);
  VAR_14->length = FUNC_11(VAR_22);
  VAR_14->dma = FUNC_10(&VAR_9->pdev->dev,
          VAR_22, 0,
          VAR_14->length,
          VAR_4);
  if (FUNC_6(&VAR_9->pdev->dev, VAR_14->dma))
   goto err_dma;

  FUNC_0(VAR_14, VAR_0);
  FUNC_1(VAR_14, VAR_1,
   VAR_3);
  VAR_13->buffer_addr = FUNC_5(VAR_14->dma);
  VAR_13->buffer_len = FUNC_4(VAR_14->length);
 }


 VAR_13->word1 |= 1 << VAR_6;


 VAR_14->skb = VAR_10;

 return 0;

err_dma:
 VAR_14->dma = 0;
 VAR_14->length = 0;
 return -1;
}
