
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_info_le {int max_mtu; int capabilities; int max_rx_ques; int max_tx_ques; int switch_mode; int phys_port; int max_tx_bw; int min_tx_bw; int op_mode; int pci_func; } ;
struct qlcnic_info {void* max_mtu; int capabilities; void* max_rx_ques; void* max_tx_ques; void* switch_mode; void* phys_port; void* max_tx_bw; void* min_tx_bw; void* op_mode; void* pci_func; } ;
struct TYPE_3__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_2__* pdev; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*,int) ;
 void* FUNC_3 (int *,size_t,int *,int ) ;
 int FUNC_4 (int *,size_t,void*,int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_8 (struct qlcnic_cmd_args*) ;
 int FUNC_9 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

int FUNC_10(struct qlcnic_adapter *VAR_5,
        struct qlcnic_info *VAR_6, u8 VAR_7)
{
 int VAR_8;
 dma_addr_t VAR_9;
 const struct qlcnic_info_le *VAR_10;
 void *VAR_11;
 struct qlcnic_cmd_args VAR_12;
 size_t VAR_13 = sizeof(struct qlcnic_info_le);

 VAR_11 = FUNC_3(&VAR_5->pdev->dev, VAR_13,
        &VAR_9, VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_10 = VAR_11;

 VAR_8 = FUNC_7(&VAR_12, VAR_5, VAR_3);
 if (VAR_8)
  goto out_free_dma;

 VAR_12.req.arg[1] = FUNC_1(VAR_9);
 VAR_12.req.arg[2] = FUNC_0(VAR_9);
 VAR_12.req.arg[3] = (VAR_7 << 16 | VAR_13);
 VAR_8 = FUNC_9(VAR_5, &VAR_12);
 if (VAR_8 != VAR_4) {
  FUNC_2(&VAR_5->pdev->dev,
   "Failed to get nic info%d\n", VAR_8);
  VAR_8 = -VAR_0;
 } else {
  VAR_6->pci_func = FUNC_5(VAR_10->pci_func);
  VAR_6->op_mode = FUNC_5(VAR_10->op_mode);
  VAR_6->min_tx_bw = FUNC_5(VAR_10->min_tx_bw);
  VAR_6->max_tx_bw = FUNC_5(VAR_10->max_tx_bw);
  VAR_6->phys_port = FUNC_5(VAR_10->phys_port);
  VAR_6->switch_mode = FUNC_5(VAR_10->switch_mode);
  VAR_6->max_tx_ques = FUNC_5(VAR_10->max_tx_ques);
  VAR_6->max_rx_ques = FUNC_5(VAR_10->max_rx_ques);
  VAR_6->capabilities = FUNC_6(VAR_10->capabilities);
  VAR_6->max_mtu = FUNC_5(VAR_10->max_mtu);
 }

 FUNC_8(&VAR_12);
out_free_dma:
 FUNC_4(&VAR_5->pdev->dev, VAR_13, VAR_11,
     VAR_9);

 return VAR_8;
}
