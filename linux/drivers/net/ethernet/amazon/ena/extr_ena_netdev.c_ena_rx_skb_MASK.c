
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct sk_buff {int * data_len; struct ena_rx_buffer* len; int protocol; } ;
struct ena_rx_buffer {int page_offset; int * page; int ena_buf; } ;
struct ena_ring {size_t rx_copybreak; size_t* free_ids; struct ena_rx_buffer* rx_buffer_info; int ring_size; int netdev; int adapter; int dev; } ;
struct ena_com_rx_buf_info {size_t len; size_t req_id; } ;
struct TYPE_2__ {int nr_frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t,scalar_t__,int ) ;
 size_t FUNC_1 (size_t,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,size_t,int ) ;
 int FUNC_3 (int ,int ,size_t,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 struct sk_buff* FUNC_6 (struct ena_ring*,int) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ,int ,int ,char*,struct ena_rx_buffer*,int *) ;
 int FUNC_10 (int ,int ,int ,char*) ;
 int VAR_3 ;
 void* FUNC_11 (int *) ;
 int FUNC_12 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (struct sk_buff*,int ,int *,int,size_t,int ) ;
 int FUNC_14 (struct sk_buff*,void*,size_t) ;
 int FUNC_15 (struct sk_buff*,size_t) ;
 TYPE_1__* FUNC_16 (struct sk_buff*) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_18(struct ena_ring *VAR_6,
      struct ena_com_rx_buf_info *VAR_7,
      u32 VAR_8,
      u16 *VAR_9)
{
 struct sk_buff *VAR_10;
 struct ena_rx_buffer *VAR_11;
 u16 VAR_12, VAR_13, VAR_14 = 0;
 void *VAR_15;

 VAR_12 = VAR_7[VAR_14].len;
 VAR_13 = VAR_7[VAR_14].req_id;
 VAR_11 = &VAR_6->rx_buffer_info[VAR_13];

 if (FUNC_17(!VAR_11->page)) {
  FUNC_10(VAR_6->adapter, VAR_4, VAR_6->netdev,
     "Page is NULL\n");
  return ((void*)0);
 }

 FUNC_9(VAR_6->adapter, VAR_5, VAR_6->netdev,
    "rx_info %p page %p\n",
    VAR_11, VAR_11->page);


 VAR_15 = FUNC_11(VAR_11->page) + VAR_11->page_offset;
 FUNC_12(VAR_15 + VAR_2);

 if (VAR_12 <= VAR_6->rx_copybreak) {
  VAR_10 = FUNC_6(VAR_6, 0);
  if (FUNC_17(!VAR_10))
   return ((void*)0);

  FUNC_9(VAR_6->adapter, VAR_5, VAR_6->netdev,
     "rx allocated small packet. len %d. data_len %d\n",
     VAR_10->len, VAR_10->data_len);


  FUNC_2(VAR_6->dev,
     FUNC_4(&VAR_11->ena_buf, VAR_3),
     VAR_12,
     VAR_0);
  FUNC_14(VAR_10, VAR_15, VAR_12);
  FUNC_3(VAR_6->dev,
        FUNC_4(&VAR_11->ena_buf, VAR_3),
        VAR_12,
        VAR_0);

  FUNC_15(VAR_10, VAR_12);
  VAR_10->protocol = FUNC_7(VAR_10, VAR_6->netdev);
  VAR_6->free_ids[*VAR_9] = VAR_13;
  *VAR_9 = FUNC_0(*VAR_9, VAR_8,
           VAR_6->ring_size);
  return VAR_10;
 }

 VAR_10 = FUNC_6(VAR_6, 1);
 if (FUNC_17(!VAR_10))
  return ((void*)0);

 do {
  FUNC_5(VAR_6->dev,
          FUNC_4(&VAR_11->ena_buf, VAR_3),
          VAR_1, VAR_0);

  FUNC_13(VAR_10, FUNC_16(VAR_10)->nr_frags, VAR_11->page,
    VAR_11->page_offset, VAR_12, VAR_1);

  FUNC_9(VAR_6->adapter, VAR_5, VAR_6->netdev,
     "rx skb updated. len %d. data_len %d\n",
     VAR_10->len, VAR_10->data_len);

  VAR_11->page = ((void*)0);

  VAR_6->free_ids[*VAR_9] = VAR_13;
  *VAR_9 =
   FUNC_1(*VAR_9,
          VAR_6->ring_size);
  if (FUNC_8(--VAR_8 == 0))
   break;

  VAR_14++;
  VAR_12 = VAR_7[VAR_14].len;
  VAR_13 = VAR_7[VAR_14].req_id;
  VAR_11 = &VAR_6->rx_buffer_info[VAR_13];
 } while (1);

 return VAR_10;
}
