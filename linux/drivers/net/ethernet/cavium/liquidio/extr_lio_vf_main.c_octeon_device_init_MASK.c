
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ (* enable_io_queues ) (struct octeon_device*) ;int (* enable_interrupt ) (struct octeon_device*,int ) ;scalar_t__ (* setup_mbox ) (struct octeon_device*) ;scalar_t__ (* setup_device_regs ) (struct octeon_device*) ;} ;
struct TYPE_5__ {int rings_per_vf; } ;
struct octeon_device {int rev_id; int num_oqs; int status; TYPE_3__** droq; TYPE_4__* pci_dev; TYPE_2__ fn_list; TYPE_1__ sriov_info; int app_mode; int chip_id; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int pkts_credit_reg; int max_count; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct octeon_device*) ;
 scalar_t__ FUNC_2 (struct octeon_device*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int ,int ) ;
 scalar_t__ FUNC_5 (struct octeon_device*) ;
 scalar_t__ FUNC_6 (struct octeon_device*,int ) ;
 scalar_t__ FUNC_7 (struct octeon_device*) ;
 scalar_t__ FUNC_8 (struct octeon_device*) ;
 scalar_t__ FUNC_9 (struct octeon_device*) ;
 scalar_t__ FUNC_10 (struct octeon_device*) ;
 scalar_t__ FUNC_11 (struct octeon_device*,int ) ;
 scalar_t__ FUNC_12 (struct octeon_device*) ;
 scalar_t__ FUNC_13 (struct octeon_device*) ;
 scalar_t__ FUNC_14 (struct octeon_device*) ;
 int FUNC_15 (TYPE_4__*,int,int*) ;
 scalar_t__ FUNC_16 (struct octeon_device*) ;
 scalar_t__ FUNC_17 (struct octeon_device*) ;
 int FUNC_18 (struct octeon_device*,int ) ;
 int FUNC_19 (struct octeon_device*,int ) ;
 scalar_t__ FUNC_20 (struct octeon_device*) ;
 int FUNC_21 (int ,int ) ;

__attribute__((used)) static int FUNC_22(struct octeon_device *VAR_19)
{
 u32 VAR_20;
 int VAR_21;

 FUNC_0(&VAR_19->status, VAR_4);




 if (FUNC_8(VAR_19))
  return 1;
 FUNC_0(&VAR_19->status, VAR_14);

 VAR_19->chip_id = VAR_3;
 FUNC_15(VAR_19->pci_dev, 8, &VAR_20);
 VAR_19->rev_id = VAR_20 & 0xff;

 if (FUNC_2(VAR_19))
  return 1;

 FUNC_0(&VAR_19->status, VAR_15);

 VAR_19->app_mode = VAR_0;




 if (FUNC_7(VAR_19))
  return 1;

 FUNC_0(&VAR_19->status, VAR_6);

 if (FUNC_9(VAR_19)) {
  FUNC_3(&VAR_19->pci_dev->dev, "setting io queues off failed\n");
  return 1;
 }

 if (VAR_19->fn_list.setup_device_regs(VAR_19)) {
  FUNC_3(&VAR_19->pci_dev->dev, "device registers configuration failed\n");
  return 1;
 }


 if (FUNC_14(VAR_19)) {
  FUNC_3(&VAR_19->pci_dev->dev, "sc buffer pool allocation failed\n");
  return 1;
 }
 FUNC_0(&VAR_19->status, VAR_18);


 if (FUNC_10(VAR_19)) {
  FUNC_3(&VAR_19->pci_dev->dev, "instruction queue initialization failed\n");
  return 1;
 }
 FUNC_0(&VAR_19->status, VAR_9);




 if (FUNC_13(VAR_19)) {
  FUNC_3(&VAR_19->pci_dev->dev, "Response list allocation failed\n");
  return 1;
 }
 FUNC_0(&VAR_19->status, VAR_16);

 if (FUNC_12(VAR_19)) {
  FUNC_3(&VAR_19->pci_dev->dev, "Output queue initialization failed\n");
  return 1;
 }
 FUNC_0(&VAR_19->status, VAR_7);

 if (VAR_19->fn_list.setup_mbox(VAR_19)) {
  FUNC_3(&VAR_19->pci_dev->dev, "Mailbox setup failed\n");
  return 1;
 }
 FUNC_0(&VAR_19->status, VAR_12);

 if (FUNC_6(VAR_19, VAR_19->sriov_info.rings_per_vf)) {
  FUNC_3(&VAR_19->pci_dev->dev, "ioq vector allocation failed\n");
  return 1;
 }
 FUNC_0(&VAR_19->status, VAR_13);

 FUNC_4(&VAR_19->pci_dev->dev, "OCTEON_CN23XX VF Version: %s, %d ioqs\n",
   VAR_1, VAR_19->sriov_info.rings_per_vf);


 if (FUNC_11(VAR_19, VAR_19->sriov_info.rings_per_vf))
  return 1;

 FUNC_0(&VAR_19->status, VAR_10);
 VAR_19->fn_list.enable_interrupt(VAR_19, VAR_2);

 if (FUNC_1(VAR_19))
  return 1;






 VAR_19->fn_list.enable_interrupt(VAR_19, VAR_2);



 if (VAR_19->fn_list.enable_io_queues(VAR_19)) {
  FUNC_3(&VAR_19->pci_dev->dev, "enabling io queues failed\n");
  return 1;
 }

 FUNC_0(&VAR_19->status, VAR_11);

 FUNC_0(&VAR_19->status, VAR_8);




 for (VAR_21 = 0; VAR_21 < VAR_19->num_oqs; VAR_21++)
  FUNC_21(VAR_19->droq[VAR_21]->max_count, VAR_19->droq[VAR_21]->pkts_credit_reg);



 FUNC_0(&VAR_19->status, VAR_5);

 FUNC_0(&VAR_19->status, VAR_17);

 if (FUNC_5(VAR_19))
  return 1;

 return 0;
}
