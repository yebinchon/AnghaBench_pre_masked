
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct ena_rx_buffer {int ena_buf; } ;
struct TYPE_2__ {int refil_partial; } ;
struct ena_ring {size_t next_to_use; size_t* free_ids; int ena_com_io_sq; int qid; int netdev; int syncp; TYPE_1__ rx_stats; int ring_size; int adapter; struct ena_rx_buffer* rx_buffer_info; } ;


 size_t FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ena_ring*,struct ena_rx_buffer*,int) ;
 int FUNC_2 (int ,int *,size_t) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,int ,int ,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct ena_ring*,size_t) ;

__attribute__((used)) static int FUNC_11(struct ena_ring *VAR_4, u32 VAR_5)
{
 u16 VAR_6, VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_6 = VAR_4->next_to_use;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  struct ena_rx_buffer *VAR_10;

  VAR_7 = VAR_4->free_ids[VAR_6];
  VAR_9 = FUNC_10(VAR_4, VAR_7);
  if (FUNC_9(VAR_9 < 0))
   break;

  VAR_10 = &VAR_4->rx_buffer_info[VAR_7];


  VAR_9 = FUNC_1(VAR_4, VAR_10,
           VAR_0 | VAR_1);
  if (FUNC_9(VAR_9 < 0)) {
   FUNC_6(VAR_4->adapter, VAR_2, VAR_4->netdev,
       "failed to alloc buffer for rx queue %d\n",
       VAR_4->qid);
   break;
  }
  VAR_9 = FUNC_2(VAR_4->ena_com_io_sq,
      &VAR_10->ena_buf,
      VAR_7);
  if (FUNC_9(VAR_9)) {
   FUNC_6(VAR_4->adapter, VAR_3, VAR_4->netdev,
       "failed to add buffer for rx queue %d\n",
       VAR_4->qid);
   break;
  }
  VAR_6 = FUNC_0(VAR_6,
         VAR_4->ring_size);
 }

 if (FUNC_9(VAR_8 < VAR_5)) {
  FUNC_7(&VAR_4->syncp);
  VAR_4->rx_stats.refil_partial++;
  FUNC_8(&VAR_4->syncp);
  FUNC_5(VAR_4->netdev,
       "refilled rx qid %d with only %d buffers (from %d)\n",
       VAR_4->qid, VAR_8, VAR_5);
 }


 if (FUNC_4(VAR_8))
  FUNC_3(VAR_4->ena_com_io_sq);

 VAR_4->next_to_use = VAR_6;

 return VAR_8;
}
