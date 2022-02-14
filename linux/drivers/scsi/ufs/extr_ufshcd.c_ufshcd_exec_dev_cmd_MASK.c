
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ufshcd_lrb {scalar_t__ cmd; } ;
struct TYPE_4__ {int tag_wq; struct completion* complete; } ;
struct ufs_hba {int clk_scaling_lock; TYPE_2__ dev_cmd; TYPE_1__* host; struct ufshcd_lrb* lrb; } ;
struct completion {int dummy; } ;
typedef enum dev_cmd_type { ____Placeholder_dev_cmd_type } dev_cmd_type ;
struct TYPE_3__ {int host_lock; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct completion*) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (struct ufs_hba*,int,char*) ;
 int FUNC_6 (struct ufs_hba*,struct ufshcd_lrb*,int,int) ;
 int FUNC_7 (struct ufs_hba*,int*) ;
 int FUNC_8 (struct ufs_hba*,int) ;
 int FUNC_9 (struct ufs_hba*,int) ;
 int FUNC_10 (struct ufs_hba*,int,int) ;
 int FUNC_11 (struct ufs_hba*,struct ufshcd_lrb*,int) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 () ;

__attribute__((used)) static int FUNC_17(struct ufs_hba *VAR_0,
  enum dev_cmd_type VAR_1, int VAR_2)
{
 struct ufshcd_lrb *VAR_3;
 int VAR_4;
 int VAR_5;
 struct completion VAR_6;
 unsigned long VAR_7;

 FUNC_1(&VAR_0->clk_scaling_lock);






 FUNC_14(VAR_0->dev_cmd.tag_wq, FUNC_7(VAR_0, &VAR_5));

 FUNC_2(&VAR_6);
 VAR_3 = &VAR_0->lrb[VAR_5];
 FUNC_0(VAR_3->cmd);
 VAR_4 = FUNC_6(VAR_0, VAR_3, VAR_1, VAR_5);
 if (FUNC_12(VAR_4))
  goto out_put_tag;

 VAR_0->dev_cmd.complete = &VAR_6;

 FUNC_5(VAR_0, VAR_5, "query_send");

 FUNC_16();
 FUNC_3(VAR_0->host->host_lock, VAR_7);
 FUNC_10(VAR_0, VAR_5, (VAR_3->cmd ? 1 : 0));
 FUNC_9(VAR_0, VAR_5);
 FUNC_4(VAR_0->host->host_lock, VAR_7);

 VAR_4 = FUNC_11(VAR_0, VAR_3, VAR_2);

 FUNC_5(VAR_0, VAR_5,
   VAR_4 ? "query_complete_err" : "query_complete");

out_put_tag:
 FUNC_8(VAR_0, VAR_5);
 FUNC_15(&VAR_0->dev_cmd.tag_wq);
 FUNC_13(&VAR_0->clk_scaling_lock);
 return VAR_4;
}
