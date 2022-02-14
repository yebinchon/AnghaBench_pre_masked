
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ io_base; int rx_desc_num; int tx_desc_num; int buf_size; int * ae_algo; } ;
struct hclgevf_tqp {int index; TYPE_2__ q; int * dev; } ;
struct TYPE_6__ {scalar_t__ io_base; } ;
struct hclgevf_dev {int num_tqps; TYPE_3__ hw; int num_rx_desc; int num_tx_desc; int rx_buf_len; TYPE_1__* pdev; struct hclgevf_tqp* htqp; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct hclgevf_tqp* FUNC_0 (int *,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct hclgevf_dev *VAR_5)
{
 struct hclgevf_tqp *VAR_6;
 int VAR_7;

 VAR_5->htqp = FUNC_0(&VAR_5->pdev->dev, VAR_5->num_tqps,
      sizeof(struct hclgevf_tqp), VAR_1);
 if (!VAR_5->htqp)
  return -VAR_0;

 VAR_6 = VAR_5->htqp;

 for (VAR_7 = 0; VAR_7 < VAR_5->num_tqps; VAR_7++) {
  VAR_6->dev = &VAR_5->pdev->dev;
  VAR_6->index = VAR_7;

  VAR_6->q.ae_algo = &VAR_4;
  VAR_6->q.buf_size = VAR_5->rx_buf_len;
  VAR_6->q.tx_desc_num = VAR_5->num_tx_desc;
  VAR_6->q.rx_desc_num = VAR_5->num_rx_desc;
  VAR_6->q.io_base = VAR_5->hw.io_base + VAR_2 +
   VAR_7 * VAR_3;

  VAR_6++;
 }

 return 0;
}
