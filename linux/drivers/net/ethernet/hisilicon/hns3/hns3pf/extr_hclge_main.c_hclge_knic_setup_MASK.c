
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u16 ;
struct hnae3_queue {int dummy; } ;
struct hnae3_knic_private_info {int tqp; int rx_buf_len; void* num_rx_desc; void* num_tx_desc; } ;
struct hnae3_handle {struct hnae3_knic_private_info kinfo; } ;
struct hclge_vport {struct hclge_dev* back; struct hnae3_handle nic; } ;
struct hclge_dev {TYPE_1__* pdev; int rx_buf_len; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,void*,int,int ) ;
 int FUNC_2 (struct hclge_vport*,void*) ;

__attribute__((used)) static int FUNC_3(struct hclge_vport *VAR_2, u16 VAR_3,
       u16 VAR_4, u16 VAR_5)

{
 struct hnae3_handle *VAR_6 = &VAR_2->nic;
 struct hnae3_knic_private_info *VAR_7 = &VAR_6->kinfo;
 struct hclge_dev *VAR_8 = VAR_2->back;
 int VAR_9;

 VAR_7->num_tx_desc = VAR_4;
 VAR_7->num_rx_desc = VAR_5;

 VAR_7->rx_buf_len = VAR_8->rx_buf_len;

 VAR_7->tqp = FUNC_1(&VAR_8->pdev->dev, VAR_3,
      sizeof(struct hnae3_queue *), VAR_1);
 if (!VAR_7->tqp)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_2, VAR_3);
 if (VAR_9)
  FUNC_0(&VAR_8->pdev->dev, "fail to assign TQPs %d.\n", VAR_9);

 return VAR_9;
}
