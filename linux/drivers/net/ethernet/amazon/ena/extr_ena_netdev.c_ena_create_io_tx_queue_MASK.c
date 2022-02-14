
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ena_ring {int ena_com_io_cq; int ena_com_io_sq; int cpu; int ring_size; } ;
struct ena_com_dev {int tx_mem_queue_type; } ;
struct ena_com_create_io_ctx {int numa_node; int queue_size; int msix_vector; int mem_queue_type; int qid; int direction; } ;
struct ena_adapter {int netdev; struct ena_ring* tx_ring; struct ena_com_dev* ena_dev; } ;
typedef int ctx ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ena_com_dev*,struct ena_com_create_io_ctx*) ;
 int FUNC_4 (struct ena_com_dev*,int ) ;
 int FUNC_5 (struct ena_com_dev*,int ,int *,int *) ;
 int FUNC_6 (int ,int ) ;
 int VAR_1 ;
 int FUNC_7 (struct ena_com_create_io_ctx*,int,int) ;
 int FUNC_8 (struct ena_adapter*,int ,int ,char*,int,int) ;

__attribute__((used)) static int FUNC_9(struct ena_adapter *VAR_2, int VAR_3)
{
 struct ena_com_create_io_ctx VAR_4;
 struct ena_com_dev *VAR_5;
 struct ena_ring *VAR_6;
 u32 VAR_7;
 u16 VAR_8;
 int VAR_9;

 VAR_5 = VAR_2->ena_dev;

 VAR_6 = &VAR_2->tx_ring[VAR_3];
 VAR_7 = FUNC_0(VAR_3);
 VAR_8 = FUNC_1(VAR_3);

 FUNC_7(&VAR_4, 0x0, sizeof(VAR_4));

 VAR_4.direction = VAR_0;
 VAR_4.qid = VAR_8;
 VAR_4.mem_queue_type = VAR_5->tx_mem_queue_type;
 VAR_4.msix_vector = VAR_7;
 VAR_4.queue_size = VAR_6->ring_size;
 VAR_4.numa_node = FUNC_2(VAR_6->cpu);

 VAR_9 = FUNC_3(VAR_5, &VAR_4);
 if (VAR_9) {
  FUNC_8(VAR_2, VAR_1, VAR_2->netdev,
     "Failed to create I/O TX queue num %d rc: %d\n",
     VAR_3, VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_5(VAR_5, VAR_8,
         &VAR_6->ena_com_io_sq,
         &VAR_6->ena_com_io_cq);
 if (VAR_9) {
  FUNC_8(VAR_2, VAR_1, VAR_2->netdev,
     "Failed to get TX queue handlers. TX queue num %d rc: %d\n",
     VAR_3, VAR_9);
  FUNC_4(VAR_5, VAR_8);
  return VAR_9;
 }

 FUNC_6(VAR_6->ena_com_io_cq, VAR_4.numa_node);
 return VAR_9;
}
