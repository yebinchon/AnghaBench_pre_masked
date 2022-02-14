
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hnae3_ae_dev {int reset_type; } ;
struct TYPE_3__ {scalar_t__ rst_fail_cnt; int rst_done_cnt; int hw_rst_done_cnt; int rst_cnt; } ;
struct hclgevf_dev {TYPE_1__ rst_stats; int last_reset_time; TYPE_2__* pdev; int reset_type; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct hclgevf_dev*,int ) ;
 int FUNC_2 (struct hclgevf_dev*) ;
 int FUNC_3 (struct hclgevf_dev*) ;
 int FUNC_4 (struct hclgevf_dev*) ;
 int FUNC_5 (struct hclgevf_dev*) ;
 int VAR_3 ;
 struct hnae3_ae_dev* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct hclgevf_dev *VAR_4)
{
 struct hnae3_ae_dev *VAR_5 = FUNC_6(VAR_4->pdev);
 int VAR_6;




 VAR_5->reset_type = VAR_4->reset_type;
 VAR_4->rst_stats.rst_cnt++;
 FUNC_7();


 VAR_6 = FUNC_1(VAR_4, VAR_0);
 if (VAR_6)
  goto err_reset_lock;

 FUNC_8();

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6)
  goto err_reset;




 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6) {

  FUNC_0(&VAR_4->pdev->dev,
   "VF failed(=%d) to fetch H/W reset completion status\n",
   VAR_6);
  goto err_reset;
 }

 VAR_4->rst_stats.hw_rst_done_cnt++;

 FUNC_7();


 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6) {
  FUNC_0(&VAR_4->pdev->dev, "failed to reset VF stack\n");
  goto err_reset_lock;
 }


 VAR_6 = FUNC_1(VAR_4, VAR_2);
 if (VAR_6)
  goto err_reset_lock;

 FUNC_8();

 VAR_4->last_reset_time = VAR_3;
 VAR_5->reset_type = VAR_1;
 VAR_4->rst_stats.rst_done_cnt++;
 VAR_4->rst_stats.rst_fail_cnt = 0;

 return VAR_6;
err_reset_lock:
 FUNC_8();
err_reset:
 FUNC_2(VAR_4);

 return VAR_6;
}
