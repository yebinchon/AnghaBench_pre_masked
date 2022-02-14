
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hclge_cmq_ring {int ring_type; struct hclge_dev* dev; } ;
struct TYPE_4__ {struct hclge_cmq_ring crq; struct hclge_cmq_ring csq; } ;
struct hclge_hw {TYPE_2__ cmq; } ;
struct hclge_dev {TYPE_1__* pdev; struct hclge_hw hw; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*,int) ;
 int FUNC_1 (struct hclge_cmq_ring*) ;

__attribute__((used)) static int FUNC_2(struct hclge_dev *VAR_1, int VAR_2)
{
 struct hclge_hw *VAR_3 = &VAR_1->hw;
 struct hclge_cmq_ring *VAR_4 =
  (VAR_2 == VAR_0) ? &VAR_3->cmq.csq : &VAR_3->cmq.crq;
 int VAR_5;

 VAR_4->ring_type = VAR_2;
 VAR_4->dev = VAR_1;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5) {
  FUNC_0(&VAR_1->pdev->dev, "descriptor %s alloc error %d\n",
   (VAR_2 == VAR_0) ? "CSQ" : "CRQ", VAR_5);
  return VAR_5;
 }

 return 0;
}
