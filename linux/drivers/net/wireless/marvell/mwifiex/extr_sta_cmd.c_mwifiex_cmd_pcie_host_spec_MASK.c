
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct pcie_service_card {scalar_t__ sleep_cookie_pbase; scalar_t__ sleep_cookie_vbase; scalar_t__ evtbd_ring_pbase; scalar_t__ rxbd_ring_pbase; scalar_t__ txbd_ring_pbase; } ;
struct mwifiex_private {TYPE_2__* adapter; } ;
struct host_cmd_ds_pcie_details {void* sleep_cookie_addr_lo; void* sleep_cookie_addr_hi; void* evtbd_count; void* evtbd_addr_hi; void* evtbd_addr_lo; void* rxbd_count; void* rxbd_addr_hi; void* rxbd_addr_lo; void* txbd_count; void* txbd_addr_hi; void* txbd_addr_lo; } ;
struct TYPE_3__ {struct host_cmd_ds_pcie_details pcie_host_spec; } ;
struct host_cmd_ds_command {scalar_t__ result; void* size; void* command; TYPE_1__ params; } ;
struct TYPE_4__ {struct pcie_service_card* card; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_0 (scalar_t__) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct host_cmd_ds_pcie_details*,int ,int) ;
 int FUNC_3 (TYPE_2__*,int ,char*,void*) ;

__attribute__((used)) static int
FUNC_4(struct mwifiex_private *VAR_6,
      struct host_cmd_ds_command *VAR_7, u16 VAR_8)
{
 struct host_cmd_ds_pcie_details *VAR_9 =
     &VAR_7->params.pcie_host_spec;
 struct pcie_service_card *VAR_10 = VAR_6->adapter->card;

 VAR_7->command = FUNC_0(VAR_1);
 VAR_7->size = FUNC_0(sizeof(struct
     host_cmd_ds_pcie_details) + VAR_5);
 VAR_7->result = 0;

 FUNC_2(VAR_9, 0, sizeof(struct host_cmd_ds_pcie_details));

 if (VAR_8 != VAR_0)
  return 0;


 VAR_9->txbd_addr_lo = FUNC_1((u32)(VAR_10->txbd_ring_pbase));
 VAR_9->txbd_addr_hi =
   FUNC_1((u32)(((u64)VAR_10->txbd_ring_pbase) >> 32));
 VAR_9->txbd_count = FUNC_1(VAR_4);
 VAR_9->rxbd_addr_lo = FUNC_1((u32)(VAR_10->rxbd_ring_pbase));
 VAR_9->rxbd_addr_hi =
   FUNC_1((u32)(((u64)VAR_10->rxbd_ring_pbase) >> 32));
 VAR_9->rxbd_count = FUNC_1(VAR_4);
 VAR_9->evtbd_addr_lo = FUNC_1((u32)(VAR_10->evtbd_ring_pbase));
 VAR_9->evtbd_addr_hi =
   FUNC_1((u32)(((u64)VAR_10->evtbd_ring_pbase) >> 32));
 VAR_9->evtbd_count = FUNC_1(VAR_3);
 if (VAR_10->sleep_cookie_vbase) {
  VAR_9->sleep_cookie_addr_lo =
    FUNC_1((u32)(VAR_10->sleep_cookie_pbase));
  VAR_9->sleep_cookie_addr_hi = FUNC_1((u32)(((u64)
     (VAR_10->sleep_cookie_pbase)) >> 32));
  FUNC_3(VAR_6->adapter, VAR_2,
       "sleep_cook_lo phy addr: 0x%x\n",
       VAR_9->sleep_cookie_addr_lo);
 }

 return 0;
}
