
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ena_ring {int ena_com_io_cq; int ena_com_io_sq; int cpu; int ring_size; } ;
struct ena_com_dev {int dummy; } ;
struct ena_com_create_io_ctx {int numa_node; int queue_size; int msix_vector; int mem_queue_type; int direction; int qid; } ;
struct ena_adapter {int netdev; struct ena_ring* rx_ring; struct ena_com_dev* ena_dev; } ;
typedef int ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ena_com_dev*,struct ena_com_create_io_ctx*) ;
 int FUNC_4 (struct ena_com_dev*,int ) ;
 int FUNC_5 (struct ena_com_dev*,int ,int *,int *) ;
 int FUNC_6 (int ,int ) ;
 int VAR_2 ;
 int FUNC_7 (struct ena_com_create_io_ctx*,int,int) ;
 int FUNC_8 (struct ena_adapter*,int ,int ,char*,int,int) ;

__attribute__((used)) static int FUNC_9(struct ena_adapter *VAR_3, int VAR_4)
{
 struct ena_com_dev *VAR_5;
 struct ena_com_create_io_ctx VAR_6;
 struct ena_ring *VAR_7;
 u32 VAR_8;
 u16 VAR_9;
 int VAR_10;

 VAR_5 = VAR_3->ena_dev;

 VAR_7 = &VAR_3->rx_ring[VAR_4];
 VAR_8 = FUNC_0(VAR_4);
 VAR_9 = FUNC_1(VAR_4);

 FUNC_7(&VAR_6, 0x0, sizeof(VAR_6));

 VAR_6.qid = VAR_9;
 VAR_6.direction = VAR_1;
 VAR_6.mem_queue_type = VAR_0;
 VAR_6.msix_vector = VAR_8;
 VAR_6.queue_size = VAR_7->ring_size;
 VAR_6.numa_node = FUNC_2(VAR_7->cpu);

 VAR_10 = FUNC_3(VAR_5, &VAR_6);
 if (VAR_10) {
  FUNC_8(VAR_3, VAR_2, VAR_3->netdev,
     "Failed to create I/O RX queue num %d rc: %d\n",
     VAR_4, VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_5(VAR_5, VAR_9,
         &VAR_7->ena_com_io_sq,
         &VAR_7->ena_com_io_cq);
 if (VAR_10) {
  FUNC_8(VAR_3, VAR_2, VAR_3->netdev,
     "Failed to get RX queue handlers. RX queue num %d rc: %d\n",
     VAR_4, VAR_10);
  FUNC_4(VAR_5, VAR_9);
  return VAR_10;
 }

 FUNC_6(VAR_7->ena_com_io_cq, VAR_6.numa_node);

 return VAR_10;
}
