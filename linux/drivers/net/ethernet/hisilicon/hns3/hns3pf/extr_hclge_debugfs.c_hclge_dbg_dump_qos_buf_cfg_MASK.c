
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hclge_tx_buff_alloc_cmd {int * tx_pkt_buff; } ;
struct hclge_rx_priv_wl_buf {TYPE_4__* tc_wl; } ;
struct hclge_rx_priv_buff_cmd {int shared_buf; int * buf_num; } ;
struct TYPE_6__ {int low; int high; } ;
struct hclge_rx_com_wl {TYPE_2__ com_wl; } ;
struct hclge_rx_com_thrd {TYPE_1__* com_thrd; } ;
struct hclge_dev {TYPE_3__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; int flag; } ;
typedef enum hclge_opcode_type { ____Placeholder_hclge_opcode_type } hclge_opcode_type ;
struct TYPE_8__ {int low; int high; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_5__ {int low; int high; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,struct hclge_desc*,int) ;
 int FUNC_4 (struct hclge_desc*,int,int) ;
 int FUNC_5 (struct hclge_dev*) ;

__attribute__((used)) static void FUNC_6(struct hclge_dev *VAR_9)
{
 struct hclge_tx_buff_alloc_cmd *VAR_10;
 struct hclge_rx_priv_buff_cmd *VAR_11;
 struct hclge_rx_priv_wl_buf *VAR_12;
 struct hclge_rx_com_wl *VAR_13;
 struct hclge_rx_com_thrd *VAR_14;
 struct hclge_rx_com_wl *VAR_15;
 enum hclge_opcode_type VAR_16;
 struct hclge_desc VAR_17[2];
 int VAR_18, VAR_19;

 VAR_16 = VAR_7;
 FUNC_4(VAR_17, VAR_16, 1);
 VAR_19 = FUNC_3(&VAR_9->hw, VAR_17, 1);
 if (VAR_19)
  goto err_qos_cmd_send;

 FUNC_2(&VAR_9->pdev->dev, "dump qos buf cfg\n");

 VAR_10 = (struct hclge_tx_buff_alloc_cmd *)VAR_17[0].data;
 for (VAR_18 = 0; VAR_18 < VAR_1; VAR_18++)
  FUNC_2(&VAR_9->pdev->dev, "tx_packet_buf_tc_%d: 0x%x\n", VAR_18,
    VAR_10->tx_pkt_buff[VAR_18]);

 VAR_16 = VAR_5;
 FUNC_4(VAR_17, VAR_16, 1);
 VAR_19 = FUNC_3(&VAR_9->hw, VAR_17, 1);
 if (VAR_19)
  goto err_qos_cmd_send;

 FUNC_2(&VAR_9->pdev->dev, "\n");
 VAR_11 = (struct hclge_rx_priv_buff_cmd *)VAR_17[0].data;
 for (VAR_18 = 0; VAR_18 < VAR_1; VAR_18++)
  FUNC_2(&VAR_9->pdev->dev, "rx_packet_buf_tc_%d: 0x%x\n", VAR_18,
    VAR_11->buf_num[VAR_18]);

 FUNC_2(&VAR_9->pdev->dev, "rx_share_buf: 0x%x\n",
   VAR_11->shared_buf);

 VAR_16 = VAR_3;
 FUNC_4(VAR_17, VAR_16, 1);
 VAR_19 = FUNC_3(&VAR_9->hw, VAR_17, 1);
 if (VAR_19)
  goto err_qos_cmd_send;

 VAR_15 = (struct hclge_rx_com_wl *)VAR_17[0].data;
 FUNC_2(&VAR_9->pdev->dev, "\n");
 FUNC_2(&VAR_9->pdev->dev, "rx_com_wl: high: 0x%x, low: 0x%x\n",
   VAR_15->com_wl.high, VAR_15->com_wl.low);

 VAR_16 = VAR_4;
 FUNC_4(VAR_17, VAR_16, 1);
 VAR_19 = FUNC_3(&VAR_9->hw, VAR_17, 1);
 if (VAR_19)
  goto err_qos_cmd_send;

 VAR_13 = (struct hclge_rx_com_wl *)VAR_17[0].data;
 FUNC_2(&VAR_9->pdev->dev,
   "rx_global_packet_cnt: high: 0x%x, low: 0x%x\n",
   VAR_13->com_wl.high, VAR_13->com_wl.low);
 FUNC_2(&VAR_9->pdev->dev, "\n");

 if (!FUNC_5(VAR_9)) {
  FUNC_2(&VAR_9->pdev->dev,
    "Only DCB-supported dev supports rx priv wl\n");
  return;
 }
 VAR_16 = VAR_6;
 FUNC_4(&VAR_17[0], VAR_16, 1);
 VAR_17[0].flag |= FUNC_0(VAR_0);
 FUNC_4(&VAR_17[1], VAR_16, 1);
 VAR_19 = FUNC_3(&VAR_9->hw, VAR_17, 2);
 if (VAR_19)
  goto err_qos_cmd_send;

 VAR_12 = (struct hclge_rx_priv_wl_buf *)VAR_17[0].data;
 for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18++)
  FUNC_2(&VAR_9->pdev->dev,
    "rx_priv_wl_tc_%d: high: 0x%x, low: 0x%x\n", VAR_18,
    VAR_12->tc_wl[VAR_18].high, VAR_12->tc_wl[VAR_18].low);

 VAR_12 = (struct hclge_rx_priv_wl_buf *)VAR_17[1].data;
 for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18++)
  FUNC_2(&VAR_9->pdev->dev,
    "rx_priv_wl_tc_%d: high: 0x%x, low: 0x%x\n",
    VAR_18 + VAR_8,
    VAR_12->tc_wl[VAR_18].high, VAR_12->tc_wl[VAR_18].low);

 VAR_16 = VAR_2;
 FUNC_4(&VAR_17[0], VAR_16, 1);
 VAR_17[0].flag |= FUNC_0(VAR_0);
 FUNC_4(&VAR_17[1], VAR_16, 1);
 VAR_19 = FUNC_3(&VAR_9->hw, VAR_17, 2);
 if (VAR_19)
  goto err_qos_cmd_send;

 FUNC_2(&VAR_9->pdev->dev, "\n");
 VAR_14 = (struct hclge_rx_com_thrd *)VAR_17[0].data;
 for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18++)
  FUNC_2(&VAR_9->pdev->dev,
    "rx_com_thrd_tc_%d: high: 0x%x, low: 0x%x\n", VAR_18,
    VAR_14->com_thrd[VAR_18].high,
    VAR_14->com_thrd[VAR_18].low);

 VAR_14 = (struct hclge_rx_com_thrd *)VAR_17[1].data;
 for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18++)
  FUNC_2(&VAR_9->pdev->dev,
    "rx_com_thrd_tc_%d: high: 0x%x, low: 0x%x\n",
    VAR_18 + VAR_8,
    VAR_14->com_thrd[VAR_18].high,
    VAR_14->com_thrd[VAR_18].low);
 return;

err_qos_cmd_send:
 FUNC_1(&VAR_9->pdev->dev,
  "dump qos buf cfg fail(0x%x), ret = %d\n", VAR_16, VAR_19);
}
