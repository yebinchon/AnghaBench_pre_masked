
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int lock; scalar_t__ next_to_use; scalar_t__ next_to_clean; } ;
struct TYPE_7__ {int lock; scalar_t__ next_to_use; scalar_t__ next_to_clean; } ;
struct TYPE_9__ {TYPE_2__ csq; TYPE_1__ crq; } ;
struct TYPE_11__ {TYPE_3__ cmq; } ;
struct hclge_dev {int state; TYPE_4__* pdev; int fw_version; TYPE_5__ hw; } ;
struct TYPE_10__ {int dev; } ;


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
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int ,int ,int ,int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*,int *) ;
 int FUNC_6 (struct hclge_dev*) ;
 scalar_t__ FUNC_7 (struct hclge_dev*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct hclge_dev *VAR_10)
{
 u32 VAR_11;
 int VAR_12;

 FUNC_11(&VAR_10->hw.cmq.csq.lock);
 FUNC_10(&VAR_10->hw.cmq.crq.lock);

 VAR_10->hw.cmq.csq.next_to_clean = 0;
 VAR_10->hw.cmq.csq.next_to_use = 0;
 VAR_10->hw.cmq.crq.next_to_clean = 0;
 VAR_10->hw.cmq.crq.next_to_use = 0;

 FUNC_4(&VAR_10->hw);

 FUNC_12(&VAR_10->hw.cmq.crq.lock);
 FUNC_13(&VAR_10->hw.cmq.csq.lock);

 FUNC_0(VAR_1, &VAR_10->state);




 if ((FUNC_7(VAR_10))) {
  VAR_12 = -VAR_0;
  goto err_cmd_init;
 }

 VAR_12 = FUNC_5(&VAR_10->hw, &VAR_11);
 if (VAR_12) {
  FUNC_1(&VAR_10->pdev->dev,
   "firmware version query failed %d\n", VAR_12);
  goto err_cmd_init;
 }
 VAR_10->fw_version = VAR_11;

 FUNC_2(&VAR_10->pdev->dev, "The firmware version is %lu.%lu.%lu.%lu\n",
   FUNC_8(VAR_11, VAR_8,
     VAR_9),
   FUNC_8(VAR_11, VAR_6,
     VAR_7),
   FUNC_8(VAR_11, VAR_4,
     VAR_5),
   FUNC_8(VAR_11, VAR_2,
     VAR_3));




 VAR_12 = FUNC_6(VAR_10);
 if (VAR_12)
  FUNC_3(&VAR_10->pdev->dev,
    "Firmware compatible features not enabled(%d).\n",
    VAR_12);

 return 0;

err_cmd_init:
 FUNC_9(VAR_1, &VAR_10->state);

 return VAR_12;
}
