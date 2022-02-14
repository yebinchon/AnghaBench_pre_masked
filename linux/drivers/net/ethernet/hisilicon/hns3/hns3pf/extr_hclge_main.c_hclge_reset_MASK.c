
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hnae3_ae_dev {int reset_type; } ;
struct TYPE_2__ {int reset_fail_cnt; int reset_done_cnt; int hw_reset_done_cnt; int reset_cnt; } ;
struct hclge_dev {int reset_type; int reset_request; int default_reset_request; TYPE_1__ rst_stats; int last_reset_time; int pdev; } ;
typedef enum hnae3_reset_type { ____Placeholder_hnae3_reset_type } hnae3_reset_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hclge_dev*) ;
 int FUNC_1 (struct hnae3_ae_dev*,int *) ;
 int FUNC_2 (struct hclge_dev*,int ) ;
 int FUNC_3 (struct hclge_dev*,int ) ;
 scalar_t__ FUNC_4 (struct hclge_dev*) ;
 int FUNC_5 (struct hclge_dev*) ;
 int FUNC_6 (struct hclge_dev*) ;
 int FUNC_7 (struct hclge_dev*) ;
 int FUNC_8 (struct hclge_dev*) ;
 int FUNC_9 (struct hclge_dev*) ;
 scalar_t__ FUNC_10 (struct hclge_dev*) ;
 int VAR_6 ;
 struct hnae3_ae_dev* FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int,int *) ;

__attribute__((used)) static void FUNC_15(struct hclge_dev *VAR_7)
{
 struct hnae3_ae_dev *VAR_8 = FUNC_11(VAR_7->pdev);
 enum hnae3_reset_type VAR_9;
 int VAR_10;




 VAR_8->reset_type = VAR_7->reset_type;
 VAR_7->rst_stats.reset_cnt++;

 VAR_10 = FUNC_3(VAR_7, VAR_1);
 if (VAR_10)
  goto err_reset;

 VAR_10 = FUNC_5(VAR_7);
 if (VAR_10)
  goto err_reset;

 FUNC_12();
 VAR_10 = FUNC_2(VAR_7, VAR_1);
 if (VAR_10)
  goto err_reset_lock;

 FUNC_13();

 VAR_10 = FUNC_7(VAR_7);
 if (VAR_10)
  goto err_reset;

 if (FUNC_10(VAR_7))
  goto err_reset;

 VAR_7->rst_stats.hw_reset_done_cnt++;

 VAR_10 = FUNC_3(VAR_7, VAR_4);
 if (VAR_10)
  goto err_reset;

 FUNC_12();

 VAR_10 = FUNC_8(VAR_7);
 if (VAR_10)
  goto err_reset_lock;

 FUNC_0(VAR_7);

 VAR_10 = FUNC_6(VAR_7);
 if (VAR_10)
  goto err_reset_lock;

 FUNC_13();

 VAR_10 = FUNC_3(VAR_7, VAR_2);



 if (VAR_10 &&
     VAR_7->rst_stats.reset_fail_cnt < VAR_0 - 1)
  goto err_reset;

 FUNC_12();

 VAR_10 = FUNC_2(VAR_7, VAR_5);
 if (VAR_10)
  goto err_reset_lock;

 FUNC_13();

 VAR_10 = FUNC_3(VAR_7, VAR_5);
 if (VAR_10)
  goto err_reset;

 VAR_7->last_reset_time = VAR_6;
 VAR_7->rst_stats.reset_fail_cnt = 0;
 VAR_7->rst_stats.reset_done_cnt++;
 VAR_8->reset_type = VAR_3;





 VAR_9 = FUNC_1(VAR_8,
         &VAR_7->default_reset_request);
 if (VAR_9 != VAR_3)
  FUNC_14(VAR_9, &VAR_7->reset_request);

 return;

err_reset_lock:
 FUNC_13();
err_reset:
 if (FUNC_4(VAR_7))
  FUNC_9(VAR_7);
}
