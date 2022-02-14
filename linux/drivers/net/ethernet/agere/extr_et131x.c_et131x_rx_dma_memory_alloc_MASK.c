
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct rx_status_block {int dummy; } ;
struct rx_ring {int psr_entries; size_t ps_ring_physaddr; size_t rx_status_bus; int recv_list; int num_rfd; void* rx_status_block; void* ps_ring_virtaddr; struct fbr_lookup** fbr; } ;
struct pkt_stat_desc {int dummy; } ;
struct fbr_lookup {int buffsize; int num_entries; size_t ring_physaddr; size_t* mem_physaddrs; size_t** virt; int * bus_low; int * bus_high; void** mem_virtaddrs; void* ring_virtaddr; } ;
struct fbr_desc {int dummy; } ;
struct et131x_adapter {int registry_jumbo_packet; TYPE_1__* pdev; struct rx_ring rx_ring; } ;
typedef size_t dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int *,char*,...) ;
 void* FUNC_2 (int *,int,size_t*,int ) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (size_t) ;

__attribute__((used)) static int FUNC_6(struct et131x_adapter *VAR_5)
{
 u8 VAR_6;
 u32 VAR_7, VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 struct rx_ring *VAR_12 = &VAR_5->rx_ring;
 struct fbr_lookup *VAR_13;


 VAR_12->fbr[0] = FUNC_3(sizeof(*VAR_13), VAR_2);
 if (VAR_12->fbr[0] == ((void*)0))
  return -VAR_0;
 VAR_12->fbr[1] = FUNC_3(sizeof(*VAR_13), VAR_2);
 if (VAR_12->fbr[1] == ((void*)0))
  return -VAR_0;
 if (VAR_5->registry_jumbo_packet < 2048) {
  VAR_12->fbr[0]->buffsize = 256;
  VAR_12->fbr[0]->num_entries = 512;
  VAR_12->fbr[1]->buffsize = 2048;
  VAR_12->fbr[1]->num_entries = 512;
 } else if (VAR_5->registry_jumbo_packet < 4096) {
  VAR_12->fbr[0]->buffsize = 512;
  VAR_12->fbr[0]->num_entries = 1024;
  VAR_12->fbr[1]->buffsize = 4096;
  VAR_12->fbr[1]->num_entries = 512;
 } else {
  VAR_12->fbr[0]->buffsize = 1024;
  VAR_12->fbr[0]->num_entries = 768;
  VAR_12->fbr[1]->buffsize = 16384;
  VAR_12->fbr[1]->num_entries = 128;
 }

 VAR_12->psr_entries = VAR_12->fbr[0]->num_entries +
          VAR_12->fbr[1]->num_entries;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_13 = VAR_12->fbr[VAR_6];

  VAR_9 = sizeof(struct fbr_desc) * VAR_13->num_entries;
  VAR_13->ring_virtaddr = FUNC_2(&VAR_5->pdev->dev,
       VAR_9,
       &VAR_13->ring_physaddr,
       VAR_2);
  if (!VAR_13->ring_virtaddr) {
   FUNC_1(&VAR_5->pdev->dev,
    "Cannot alloc memory for Free Buffer Ring %d\n",
    VAR_6);
   return -VAR_0;
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_13 = VAR_12->fbr[VAR_6];
  VAR_11 = (VAR_1 * VAR_13->buffsize);

  for (VAR_7 = 0; VAR_7 < VAR_13->num_entries / VAR_1; VAR_7++) {
   dma_addr_t VAR_14;

   VAR_13->mem_virtaddrs[VAR_7] = FUNC_2(
     &VAR_5->pdev->dev, VAR_11,
     &VAR_13->mem_physaddrs[VAR_7],
     VAR_2);

   if (!VAR_13->mem_virtaddrs[VAR_7]) {
    FUNC_1(&VAR_5->pdev->dev,
     "Could not alloc memory\n");
    return -VAR_0;
   }


   VAR_14 = VAR_13->mem_physaddrs[VAR_7];

   for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
    u32 VAR_15 = (VAR_7 * VAR_1) + VAR_8;




    VAR_13->virt[VAR_15] = (u8 *)VAR_13->mem_virtaddrs[VAR_7] +
         (VAR_8 * VAR_13->buffsize);




    VAR_13->bus_high[VAR_15] = FUNC_5(VAR_14);
    VAR_13->bus_low[VAR_15] = FUNC_4(VAR_14);
    VAR_14 += VAR_13->buffsize;
   }
  }
 }


 VAR_10 = sizeof(struct pkt_stat_desc) * VAR_12->psr_entries;

 VAR_12->ps_ring_virtaddr = FUNC_2(&VAR_5->pdev->dev,
        VAR_10,
        &VAR_12->ps_ring_physaddr,
        VAR_2);

 if (!VAR_12->ps_ring_virtaddr) {
  FUNC_1(&VAR_5->pdev->dev,
   "Cannot alloc memory for Packet Status Ring\n");
  return -VAR_0;
 }


 VAR_12->rx_status_block = FUNC_2(&VAR_5->pdev->dev,
         sizeof(struct rx_status_block),
         &VAR_12->rx_status_bus,
         VAR_2);
 if (!VAR_12->rx_status_block) {
  FUNC_1(&VAR_5->pdev->dev,
   "Cannot alloc memory for Status Block\n");
  return -VAR_0;
 }
 VAR_12->num_rfd = VAR_3;




 FUNC_0(&VAR_12->recv_list);
 return 0;
}
