
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ena_eth_io_tx_cdesc {int dummy; } ;
struct ena_eth_io_rx_cdesc_base {int dummy; } ;
struct TYPE_2__ {void* virt_addr; int phys_addr; } ;
struct ena_com_io_cq {int cdesc_entry_size_in_bytes; scalar_t__ direction; size_t q_depth; int phase; scalar_t__ head; TYPE_1__ cdesc_addr; } ;
struct ena_com_dev {int dmadev; } ;
struct ena_com_create_io_ctx {int numa_node; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ,size_t,int *,int ) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct ena_com_dev *VAR_3,
         struct ena_com_create_io_ctx *VAR_4,
         struct ena_com_io_cq *VAR_5)
{
 size_t VAR_6;
 int VAR_7 = 0;

 FUNC_2(&VAR_5->cdesc_addr, 0x0, sizeof(VAR_5->cdesc_addr));


 VAR_5->cdesc_entry_size_in_bytes =
  (VAR_5->direction == VAR_0) ?
  sizeof(struct ena_eth_io_tx_cdesc) :
  sizeof(struct ena_eth_io_rx_cdesc_base);

 VAR_6 = VAR_5->cdesc_entry_size_in_bytes * VAR_5->q_depth;

 VAR_7 = FUNC_0(VAR_3->dmadev);
 FUNC_4(VAR_3->dmadev, VAR_4->numa_node);
 VAR_5->cdesc_addr.virt_addr =
  FUNC_1(VAR_3->dmadev, VAR_6,
       &VAR_5->cdesc_addr.phys_addr, VAR_2);
 FUNC_4(VAR_3->dmadev, VAR_7);
 if (!VAR_5->cdesc_addr.virt_addr) {
  VAR_5->cdesc_addr.virt_addr =
   FUNC_1(VAR_3->dmadev, VAR_6,
        &VAR_5->cdesc_addr.phys_addr,
        VAR_2);
 }

 if (!VAR_5->cdesc_addr.virt_addr) {
  FUNC_3("memory allocation failed\n");
  return -VAR_1;
 }

 VAR_5->phase = 1;
 VAR_5->head = 0;

 return 0;
}
