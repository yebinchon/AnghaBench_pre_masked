
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {struct mwifiex_pcie_card_reg* reg; } ;
struct pcie_service_card {int txbd_ring_size; scalar_t__ txbd_ring_pbase; int txbd_ring_vbase; int dev; int txbd_rdptr; scalar_t__ txbd_wrptr; TYPE_1__ pcie; } ;
struct mwifiex_pfu_buf_desc {int dummy; } ;
struct mwifiex_pcie_card_reg {scalar_t__ pfu_enabled; int tx_rollover_ind; } ;
struct mwifiex_pcie_buf_desc {int dummy; } ;
struct mwifiex_adapter {struct pcie_service_card* card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mwifiex_adapter*,int ,char*,int,...) ;
 int FUNC_1 (struct mwifiex_adapter*) ;
 int FUNC_2 (int ,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct mwifiex_adapter *VAR_5)
{
 struct pcie_service_card *VAR_6 = VAR_5->card;
 const struct mwifiex_pcie_card_reg *VAR_7 = VAR_6->pcie.reg;






 VAR_6->txbd_wrptr = 0;

 if (VAR_7->pfu_enabled)
  VAR_6->txbd_rdptr = 0;
 else
  VAR_6->txbd_rdptr |= VAR_7->tx_rollover_ind;



 if (VAR_7->pfu_enabled)
  VAR_6->txbd_ring_size = sizeof(struct mwifiex_pfu_buf_desc) *
           VAR_4;
 else
  VAR_6->txbd_ring_size = sizeof(struct mwifiex_pcie_buf_desc) *
           VAR_4;

 FUNC_0(VAR_5, VAR_3,
      "info: txbd_ring: Allocating %d bytes\n",
      VAR_6->txbd_ring_size);
 VAR_6->txbd_ring_vbase = FUNC_2(VAR_6->dev,
           VAR_6->txbd_ring_size,
           &VAR_6->txbd_ring_pbase);
 if (!VAR_6->txbd_ring_vbase) {
  FUNC_0(VAR_5, VAR_2,
       "allocate consistent memory (%d bytes) failed!\n",
       VAR_6->txbd_ring_size);
  return -VAR_1;
 }
 FUNC_0(VAR_5, VAR_0,
      "info: txbd_ring - base: %p, pbase: %#x:%x, len: %x\n",
      VAR_6->txbd_ring_vbase, (unsigned int)VAR_6->txbd_ring_pbase,
      (u32)((u64)VAR_6->txbd_ring_pbase >> 32),
      VAR_6->txbd_ring_size);

 return FUNC_1(VAR_5);
}
