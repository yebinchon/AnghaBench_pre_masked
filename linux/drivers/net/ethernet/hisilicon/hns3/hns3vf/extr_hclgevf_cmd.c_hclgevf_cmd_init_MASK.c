
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int lock; scalar_t__ next_to_use; scalar_t__ next_to_clean; } ;
struct TYPE_9__ {int lock; scalar_t__ next_to_use; scalar_t__ next_to_clean; } ;
struct TYPE_11__ {TYPE_3__ csq; TYPE_2__ crq; } ;
struct TYPE_13__ {TYPE_4__ cmq; } ;
struct TYPE_8__ {int count; scalar_t__ tail; scalar_t__ head; struct hclgevf_dev* hdev; } ;
struct hclgevf_dev {int state; TYPE_5__* pdev; int fw_version; TYPE_6__ hw; TYPE_1__ arq; } ;
struct TYPE_12__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,int *) ;
 scalar_t__ FUNC_6 (struct hclgevf_dev*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct hclgevf_dev *VAR_10)
{
 u32 VAR_11;
 int VAR_12;

 FUNC_10(&VAR_10->hw.cmq.csq.lock);
 FUNC_9(&VAR_10->hw.cmq.crq.lock);


 VAR_10->arq.hdev = VAR_10;
 VAR_10->arq.head = 0;
 VAR_10->arq.tail = 0;
 FUNC_0(&VAR_10->arq.count, 0);
 VAR_10->hw.cmq.csq.next_to_clean = 0;
 VAR_10->hw.cmq.csq.next_to_use = 0;
 VAR_10->hw.cmq.crq.next_to_clean = 0;
 VAR_10->hw.cmq.crq.next_to_use = 0;

 FUNC_4(&VAR_10->hw);

 FUNC_11(&VAR_10->hw.cmq.crq.lock);
 FUNC_12(&VAR_10->hw.cmq.csq.lock);

 FUNC_1(VAR_1, &VAR_10->state);




 if (FUNC_6(VAR_10)) {
  VAR_12 = -VAR_0;
  goto err_cmd_init;
 }


 VAR_12 = FUNC_5(&VAR_10->hw, &VAR_11);
 if (VAR_12) {
  FUNC_2(&VAR_10->pdev->dev,
   "failed(%d) to query firmware version\n", VAR_12);
  goto err_cmd_init;
 }
 VAR_10->fw_version = VAR_11;

 FUNC_3(&VAR_10->pdev->dev, "The firmware version is %lu.%lu.%lu.%lu\n",
   FUNC_7(VAR_11, VAR_8,
     VAR_9),
   FUNC_7(VAR_11, VAR_6,
     VAR_7),
   FUNC_7(VAR_11, VAR_4,
     VAR_5),
   FUNC_7(VAR_11, VAR_2,
     VAR_3));

 return 0;

err_cmd_init:
 FUNC_8(VAR_1, &VAR_10->state);

 return VAR_12;
}
