
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hclgevf_cmq_ring {int flag; struct hclgevf_dev* dev; } ;
struct TYPE_4__ {struct hclgevf_cmq_ring crq; struct hclgevf_cmq_ring csq; } ;
struct hclgevf_hw {TYPE_2__ cmq; } ;
struct hclgevf_dev {TYPE_1__* pdev; struct hclgevf_hw hw; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,char*) ;
 int FUNC_1 (struct hclgevf_cmq_ring*) ;

__attribute__((used)) static int FUNC_2(struct hclgevf_dev *VAR_1, int VAR_2)
{
 struct hclgevf_hw *VAR_3 = &VAR_1->hw;
 struct hclgevf_cmq_ring *VAR_4 =
  (VAR_2 == VAR_0) ? &VAR_3->cmq.csq : &VAR_3->cmq.crq;
 int VAR_5;

 VAR_4->dev = VAR_1;
 VAR_4->flag = VAR_2;


 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  FUNC_0(&VAR_1->pdev->dev, "failed(%d) to alloc %s desc\n", VAR_5,
   (VAR_2 == VAR_0) ? "CSQ" : "CRQ");

 return VAR_5;
}
