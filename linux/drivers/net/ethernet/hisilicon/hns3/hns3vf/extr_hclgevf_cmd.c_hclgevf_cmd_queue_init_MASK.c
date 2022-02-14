
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {void* desc_num; int lock; } ;
struct TYPE_6__ {void* desc_num; int lock; } ;
struct TYPE_8__ {TYPE_5__ csq; TYPE_1__ crq; int tx_timeout; } ;
struct TYPE_9__ {TYPE_3__ cmq; } ;
struct hclgevf_dev {TYPE_4__ hw; TYPE_2__* pdev; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct hclgevf_dev*,int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct hclgevf_dev *VAR_4)
{
 int VAR_5;


 FUNC_3(&VAR_4->hw.cmq.csq.lock);
 FUNC_3(&VAR_4->hw.cmq.crq.lock);

 VAR_4->hw.cmq.tx_timeout = VAR_0;
 VAR_4->hw.cmq.csq.desc_num = VAR_1;
 VAR_4->hw.cmq.crq.desc_num = VAR_1;

 VAR_5 = FUNC_1(VAR_4, VAR_3);
 if (VAR_5) {
  FUNC_0(&VAR_4->pdev->dev,
   "CSQ ring setup error %d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_1(VAR_4, VAR_2);
 if (VAR_5) {
  FUNC_0(&VAR_4->pdev->dev,
   "CRQ ring setup error %d\n", VAR_5);
  goto err_csq;
 }

 return 0;
err_csq:
 FUNC_2(&VAR_4->hw.cmq.csq);
 return VAR_5;
}
