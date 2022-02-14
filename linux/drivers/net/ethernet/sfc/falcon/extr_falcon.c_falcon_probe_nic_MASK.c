
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct pci_dev {scalar_t__ bus; scalar_t__ devfn; } ;
struct falcon_nic_data {int stats_disable_count; struct pci_dev* pci_dev2; int stats_timer; struct ef4_nic* efx; } ;
struct TYPE_12__ {int * parent; } ;
struct TYPE_15__ {int name; TYPE_2__ dev; TYPE_8__* algo_data; int owner; } ;
struct TYPE_16__ {struct ef4_nic* data; } ;
struct falcon_board {TYPE_5__ i2c_adap; TYPE_3__* type; TYPE_8__ i2c_data; } ;
struct TYPE_17__ {int dma_addr; int addr; } ;
struct ef4_nic {int max_channels; int max_tx_channels; int timer_quantum_ns; int timer_max_ns; struct falcon_nic_data* nic_data; TYPE_9__ irq_status; int net_dev; TYPE_4__* pci_dev; TYPE_1__* type; struct ef4_nic* primary; } ;
typedef int ef4_oword_t ;
struct TYPE_14__ {int revision; scalar_t__ bus; scalar_t__ devfn; int dev; } ;
struct TYPE_13__ {int (* init ) (struct ef4_nic*) ;} ;
struct TYPE_11__ {int timer_period_max; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
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
 int FUNC_2 (struct ef4_nic*,int ) ;
 scalar_t__ FUNC_3 (struct ef4_nic*) ;
 int FUNC_4 (struct ef4_nic*,TYPE_9__*,int,int ) ;
 int FUNC_5 (struct ef4_nic*,TYPE_9__*) ;
 scalar_t__ FUNC_6 (struct ef4_nic*) ;
 int FUNC_7 (struct ef4_nic*,int *,int ) ;
 struct falcon_board* FUNC_8 (struct ef4_nic*) ;
 TYPE_8__ VAR_13 ;
 int FUNC_9 (struct ef4_nic*) ;
 int FUNC_10 (struct ef4_nic*) ;
 int VAR_14 ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (struct falcon_nic_data*) ;
 struct falcon_nic_data* FUNC_14 (int,int ) ;
 int FUNC_15 (TYPE_5__*,int ,int) ;
 int FUNC_16 (struct ef4_nic*,int ,int ,char*,int ,int ,int ) ;
 int FUNC_17 (struct ef4_nic*,int ,int ,char*) ;
 struct pci_dev* FUNC_18 (TYPE_4__*) ;
 int FUNC_19 (struct pci_dev*) ;
 struct pci_dev* FUNC_20 (int ,int ,struct pci_dev*) ;
 int VAR_15 ;
 int FUNC_21 (int ,char*,int) ;
 int FUNC_22 (struct ef4_nic*) ;
 int FUNC_23 (int *,int ,int ) ;
 scalar_t__ FUNC_24 (int ) ;

__attribute__((used)) static int FUNC_25(struct ef4_nic *VAR_16)
{
 struct falcon_nic_data *VAR_17;
 struct falcon_board *VAR_18;
 int VAR_19;

 VAR_16->primary = VAR_16;


 VAR_17 = FUNC_14(sizeof(*VAR_17), VAR_8);
 if (!VAR_17)
  return -VAR_4;
 VAR_16->nic_data = VAR_17;
 VAR_17->efx = VAR_16;

 VAR_19 = -VAR_3;

 if (FUNC_3(VAR_16) != 0) {
  FUNC_17(VAR_16, VAR_15, VAR_16->net_dev,
     "Falcon FPGA not supported\n");
  goto fail1;
 }

 if (FUNC_6(VAR_16) <= VAR_1) {
  ef4_oword_t VAR_20;
  struct pci_dev *VAR_21;
  u8 VAR_22 = VAR_16->pci_dev->revision;

  if ((VAR_22 == 0xff) || (VAR_22 == 0)) {
   FUNC_17(VAR_16, VAR_15, VAR_16->net_dev,
      "Falcon rev A0 not supported\n");
   goto fail1;
  }
  FUNC_7(VAR_16, &VAR_20, VAR_7);
  if (FUNC_1(VAR_20, VAR_6) == 0) {
   FUNC_17(VAR_16, VAR_15, VAR_16->net_dev,
      "Falcon rev A1 1G not supported\n");
   goto fail1;
  }
  if (FUNC_1(VAR_20, VAR_5) == 0) {
   FUNC_17(VAR_16, VAR_15, VAR_16->net_dev,
      "Falcon rev A1 PCI-X not supported\n");
   goto fail1;
  }

  VAR_21 = FUNC_18(VAR_16->pci_dev);
  while ((VAR_21 = FUNC_20(VAR_10,
          VAR_9,
          VAR_21))) {
   if (VAR_21->bus == VAR_16->pci_dev->bus &&
       VAR_21->devfn == VAR_16->pci_dev->devfn + 1) {
    VAR_17->pci_dev2 = VAR_21;
    break;
   }
  }
  if (!VAR_17->pci_dev2) {
   FUNC_17(VAR_16, VAR_15, VAR_16->net_dev,
      "failed to find secondary function\n");
   VAR_19 = -VAR_3;
   goto fail2;
  }
 }


 VAR_19 = FUNC_2(VAR_16, VAR_11);
 if (VAR_19) {
  FUNC_17(VAR_16, VAR_15, VAR_16->net_dev, "failed to reset NIC\n");
  goto fail3;
 }


 VAR_19 = FUNC_4(VAR_16, &VAR_16->irq_status, sizeof(ef4_oword_t),
      VAR_8);
 if (VAR_19)
  goto fail4;
 FUNC_0(VAR_16->irq_status.dma_addr & 0x0f);

 FUNC_16(VAR_16, VAR_15, VAR_16->net_dev,
    "INT_KER at %llx (virt %p phys %llx)\n",
    (u64)VAR_16->irq_status.dma_addr,
    VAR_16->irq_status.addr,
    (u64)FUNC_24(VAR_16->irq_status.addr));

 FUNC_10(VAR_16);


 VAR_19 = FUNC_9(VAR_16);
 if (VAR_19) {
  if (VAR_19 == -VAR_2)
   FUNC_17(VAR_16, VAR_15, VAR_16->net_dev, "NVRAM is invalid\n");
  goto fail5;
 }

 VAR_16->max_channels = (FUNC_6(VAR_16) <= VAR_1 ? 4 :
        VAR_0);
 VAR_16->max_tx_channels = VAR_16->max_channels;
 VAR_16->timer_quantum_ns = 4968;
 VAR_16->timer_max_ns = VAR_16->type->timer_period_max *
       VAR_16->timer_quantum_ns;


 VAR_18 = FUNC_8(VAR_16);
 VAR_18->i2c_adap.owner = VAR_12;
 VAR_18->i2c_data = VAR_13;
 VAR_18->i2c_data.data = VAR_16;
 VAR_18->i2c_adap.algo_data = &VAR_18->i2c_data;
 VAR_18->i2c_adap.dev.parent = &VAR_16->pci_dev->dev;
 FUNC_21(VAR_18->i2c_adap.name, "SFC4000 GPIO",
  sizeof(VAR_18->i2c_adap.name));
 VAR_19 = FUNC_11(&VAR_18->i2c_adap);
 if (VAR_19)
  goto fail5;

 VAR_19 = FUNC_8(VAR_16)->type->init(VAR_16);
 if (VAR_19) {
  FUNC_17(VAR_16, VAR_15, VAR_16->net_dev,
     "failed to initialise board\n");
  goto fail6;
 }

 VAR_17->stats_disable_count = 1;
 FUNC_23(&VAR_17->stats_timer, VAR_14, 0);

 return 0;

 fail6:
 FUNC_12(&VAR_18->i2c_adap);
 FUNC_15(&VAR_18->i2c_adap, 0, sizeof(VAR_18->i2c_adap));
 fail5:
 FUNC_5(VAR_16, &VAR_16->irq_status);
 fail4:
 fail3:
 if (VAR_17->pci_dev2) {
  FUNC_19(VAR_17->pci_dev2);
  VAR_17->pci_dev2 = ((void*)0);
 }
 fail2:
 fail1:
 FUNC_13(VAR_16->nic_data);
 return VAR_19;
}
