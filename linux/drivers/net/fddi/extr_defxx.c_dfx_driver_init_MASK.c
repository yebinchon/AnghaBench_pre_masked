
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct net_device {int * dev_addr; int irq; } ;
struct device {int dummy; } ;
typedef scalar_t__ resource_size_t ;
typedef int dma_addr_t ;
typedef int __le32 ;
struct TYPE_7__ {int req_ttrt; int rcv_bufs_to_post; char* kmalloced; int kmalloced_dma; char* descr_block_virt; int descr_block_phys; char* cmd_req_virt; int cmd_req_phys; char* cmd_rsp_virt; int cmd_rsp_phys; char* rcv_block_virt; int rcv_block_phys; char* cons_block_virt; int cons_block_phys; struct device* bus_dev; int * factory_mac_addr; int burst_size; int full_duplex_enb; } ;
typedef char PI_DMA_CMD_RSP ;
typedef char PI_DMA_CMD_REQ ;
typedef char PI_DESCR_BLOCK ;
typedef char PI_CONSUMER_BLOCK ;
typedef TYPE_1__ DFX_board_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ,int ,int ,int *) ;
 int FUNC_10 (TYPE_1__*,int ,int ) ;
 char* FUNC_11 (struct device*,int,int*,int ) ;
 int FUNC_12 (int *,int *,int) ;
 TYPE_1__* FUNC_13 (struct net_device*) ;
 int FUNC_14 (char*,char const*,char*,char*,long long,int ,int *) ;
 int FUNC_15 (char*,char const*) ;

__attribute__((used)) static int FUNC_16(struct net_device *VAR_18, const char *VAR_19,
      resource_size_t VAR_20)
{
 DFX_board_t *VAR_21 = FUNC_13(VAR_18);
 struct device *VAR_22 = VAR_21->bus_dev;
 int VAR_23 = FUNC_5(VAR_22);
 int VAR_24 = FUNC_2(VAR_22);
 int VAR_25 = FUNC_3(VAR_22);
 int VAR_26 = VAR_2 || VAR_25;
 int VAR_27;
 char *VAR_28, *VAR_29;
 dma_addr_t VAR_30, VAR_31;
 u32 VAR_32;
 __le32 VAR_33;
 char *VAR_34 = ((void*)0);

 FUNC_1("In dfx_driver_init...\n");



 FUNC_7(VAR_18);
 VAR_21->full_duplex_enb = VAR_16;
 VAR_21->req_ttrt = 8 * 12500;
 VAR_21->burst_size = VAR_13;
 VAR_21->rcv_bufs_to_post = VAR_17;
 FUNC_6(VAR_21);



 FUNC_10(VAR_21, VAR_14, VAR_8);



 (void) FUNC_8(VAR_21, VAR_12);



 if (FUNC_9(VAR_21, VAR_9, VAR_11, 0,
     &VAR_32) != VAR_1) {
  FUNC_15("%s: Could not read adapter factory MAC address!\n",
         VAR_19);
  return VAR_0;
 }
 VAR_33 = FUNC_4(VAR_32);
 FUNC_12(&VAR_21->factory_mac_addr[0], &VAR_33, sizeof(u32));

 if (FUNC_9(VAR_21, VAR_9, VAR_10, 0,
     &VAR_32) != VAR_1) {
  FUNC_15("%s: Could not read adapter factory MAC address!\n",
         VAR_19);
  return VAR_0;
 }
 VAR_33 = FUNC_4(VAR_32);
 FUNC_12(&VAR_21->factory_mac_addr[4], &VAR_33, sizeof(u16));
 FUNC_12(VAR_18->dev_addr, VAR_21->factory_mac_addr, VAR_3);
 if (VAR_25)
  VAR_34 = "DEFTA";
 if (VAR_24)
  VAR_34 = "DEFEA";
 if (VAR_23)
  VAR_34 = "DEFPA";
 FUNC_14("%s: %s at %s addr = 0x%llx, IRQ = %d, Hardware addr = %pMF\n",
  VAR_19, VAR_34, VAR_26 ? "MMIO" : "I/O",
  (long long)VAR_20, VAR_18->irq, VAR_18->dev_addr);






 VAR_27 = sizeof(PI_DESCR_BLOCK) +
     VAR_6 +
     VAR_7 +

     (VAR_21->rcv_bufs_to_post * VAR_15) +

     sizeof(PI_CONSUMER_BLOCK) +
     (VAR_5 - 1);
 VAR_21->kmalloced = VAR_28 = FUNC_11(VAR_21->bus_dev, VAR_27,
         &VAR_21->kmalloced_dma,
         VAR_4);
 if (VAR_28 == ((void*)0))
  return VAR_0;

 VAR_30 = VAR_21->kmalloced_dma;
 VAR_31 = FUNC_0(VAR_30, VAR_5);
 VAR_29 = VAR_28 + (VAR_31 - VAR_30);



 VAR_21->descr_block_virt = (PI_DESCR_BLOCK *) VAR_29;
 VAR_21->descr_block_phys = VAR_31;
 VAR_29 += sizeof(PI_DESCR_BLOCK);
 VAR_31 += sizeof(PI_DESCR_BLOCK);



 VAR_21->cmd_req_virt = (PI_DMA_CMD_REQ *) VAR_29;
 VAR_21->cmd_req_phys = VAR_31;
 VAR_29 += VAR_6;
 VAR_31 += VAR_6;



 VAR_21->cmd_rsp_virt = (PI_DMA_CMD_RSP *) VAR_29;
 VAR_21->cmd_rsp_phys = VAR_31;
 VAR_29 += VAR_7;
 VAR_31 += VAR_7;



 VAR_21->rcv_block_virt = VAR_29;
 VAR_21->rcv_block_phys = VAR_31;


 VAR_29 += (VAR_21->rcv_bufs_to_post * VAR_15);
 VAR_31 += (VAR_21->rcv_bufs_to_post * VAR_15);




 VAR_21->cons_block_virt = (PI_CONSUMER_BLOCK *) VAR_29;
 VAR_21->cons_block_phys = VAR_31;



 FUNC_1("%s: Descriptor block virt = %p, phys = %pad\n",
     VAR_19, VAR_21->descr_block_virt, &VAR_21->descr_block_phys);
 FUNC_1("%s: Command Request buffer virt = %p, phys = %pad\n",
     VAR_19, VAR_21->cmd_req_virt, &VAR_21->cmd_req_phys);
 FUNC_1("%s: Command Response buffer virt = %p, phys = %pad\n",
     VAR_19, VAR_21->cmd_rsp_virt, &VAR_21->cmd_rsp_phys);
 FUNC_1("%s: Receive buffer block virt = %p, phys = %pad\n",
     VAR_19, VAR_21->rcv_block_virt, &VAR_21->rcv_block_phys);
 FUNC_1("%s: Consumer block virt = %p, phys = %pad\n",
     VAR_19, VAR_21->cons_block_virt, &VAR_21->cons_block_phys);

 return VAR_1;
}
