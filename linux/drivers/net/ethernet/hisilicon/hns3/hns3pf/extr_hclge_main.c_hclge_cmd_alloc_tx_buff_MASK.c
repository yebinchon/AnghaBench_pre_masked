
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct hclge_tx_buff_alloc_cmd {int * tx_pkt_buff; } ;
struct hclge_pkt_buf_alloc {TYPE_1__* priv_buf; } ;
struct hclge_dev {TYPE_2__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int tx_buf_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct hclge_dev *VAR_4,
        struct hclge_pkt_buf_alloc *VAR_5)
{



 struct hclge_tx_buff_alloc_cmd *VAR_6;
 struct hclge_desc VAR_7;
 int VAR_8;
 u8 VAR_9;

 VAR_6 = (struct hclge_tx_buff_alloc_cmd *)VAR_7.data;

 FUNC_3(&VAR_7, VAR_3, 0);
 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  u32 VAR_10 = VAR_5->priv_buf[VAR_9].tx_buf_size;

  VAR_6->tx_pkt_buff[VAR_9] =
   FUNC_0((VAR_10 >> 7) |
         FUNC_0(15));
 }

 VAR_8 = FUNC_2(&VAR_4->hw, &VAR_7, 1);
 if (VAR_8)
  FUNC_1(&VAR_4->pdev->dev, "tx buffer alloc cmd failed %d.\n",
   VAR_8);

 return VAR_8;
}
