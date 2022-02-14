
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_pkt_buf_alloc {int dummy; } ;
struct hclge_dev {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct hclge_dev*,struct hclge_pkt_buf_alloc*) ;

__attribute__((used)) static int FUNC_2(struct hclge_dev *VAR_0,
     struct hclge_pkt_buf_alloc *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (VAR_2)
  FUNC_0(&VAR_0->pdev->dev, "tx buffer alloc failed %d\n", VAR_2);

 return VAR_2;
}
