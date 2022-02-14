
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qlcnic_info_le {void* max_tx_bw; void* min_tx_bw; void* max_rx_ques; void* max_tx_ques; int max_mac_filters; int capabilities; void* switch_mode; void* phys_port; void* op_mode; void* pci_func; } ;
struct qlcnic_info {int pci_func; int op_mode; int phys_port; int switch_mode; int max_tx_ques; int max_rx_ques; int min_tx_bw; int max_tx_bw; int max_mac_filters; int capabilities; } ;
struct TYPE_5__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ req; } ;
struct qlcnic_adapter {TYPE_3__* pdev; TYPE_1__* ahw; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {scalar_t__ op_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int) ;
 void* FUNC_5 (int *,size_t,int *,int ) ;
 int FUNC_6 (int *,size_t,void*,int ) ;
 int FUNC_7 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_8 (struct qlcnic_cmd_args*) ;
 int FUNC_9 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

int FUNC_10(struct qlcnic_adapter *VAR_6,
        struct qlcnic_info *VAR_7)
{
 int VAR_8 = -VAR_0;
 dma_addr_t VAR_9;
 void *VAR_10;
 struct qlcnic_cmd_args VAR_11;
 struct qlcnic_info_le *VAR_12;
 size_t VAR_13 = sizeof(struct qlcnic_info_le);

 if (VAR_6->ahw->op_mode != VAR_4)
  return VAR_8;

 VAR_10 = FUNC_5(&VAR_6->pdev->dev, VAR_13,
        &VAR_9, VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_12 = VAR_10;

 VAR_12->pci_func = FUNC_2(VAR_7->pci_func);
 VAR_12->op_mode = FUNC_2(VAR_7->op_mode);
 VAR_12->phys_port = FUNC_2(VAR_7->phys_port);
 VAR_12->switch_mode = FUNC_2(VAR_7->switch_mode);
 VAR_12->capabilities = FUNC_3(VAR_7->capabilities);
 VAR_12->max_mac_filters = VAR_7->max_mac_filters;
 VAR_12->max_tx_ques = FUNC_2(VAR_7->max_tx_ques);
 VAR_12->max_rx_ques = FUNC_2(VAR_7->max_rx_ques);
 VAR_12->min_tx_bw = FUNC_2(VAR_7->min_tx_bw);
 VAR_12->max_tx_bw = FUNC_2(VAR_7->max_tx_bw);

 VAR_8 = FUNC_7(&VAR_11, VAR_6, VAR_3);
 if (VAR_8)
  goto out_free_dma;

 VAR_11.req.arg[1] = FUNC_1(VAR_9);
 VAR_11.req.arg[2] = FUNC_0(VAR_9);
 VAR_11.req.arg[3] = ((VAR_7->pci_func << 16) | VAR_13);
 VAR_8 = FUNC_9(VAR_6, &VAR_11);

 if (VAR_8 != VAR_5) {
  FUNC_4(&VAR_6->pdev->dev,
   "Failed to set nic info%d\n", VAR_8);
  VAR_8 = -VAR_0;
 }

 FUNC_8(&VAR_11);
out_free_dma:
 FUNC_6(&VAR_6->pdev->dev, VAR_13, VAR_10,
     VAR_9);

 return VAR_8;
}
