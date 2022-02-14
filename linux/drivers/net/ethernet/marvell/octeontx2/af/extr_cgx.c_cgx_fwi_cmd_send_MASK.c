
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct lmac {int cmd_pend; int cmd_lock; int resp; int lmac_id; int wq_cmd_cmplt; struct cgx* cgx; } ;
struct device {int dummy; } ;
struct cgx {int cgx_id; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct cgx*,int ,int ) ;
 int FUNC_3 (struct cgx*,int ,int ,int ) ;
 int FUNC_4 (struct device*,char*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int,int ) ;

__attribute__((used)) static int FUNC_10(u64 VAR_7, u64 *VAR_8, struct lmac *VAR_9)
{
 struct cgx *VAR_10 = VAR_9->cgx;
 struct device *VAR_11;
 int VAR_12 = 0;
 u64 VAR_13;


 VAR_12 = FUNC_6(&VAR_9->cmd_lock);
 if (VAR_12)
  return VAR_12;


 VAR_13 = FUNC_2(VAR_10, VAR_9->lmac_id, VAR_3);
 if (FUNC_0(VAR_4, VAR_13) != VAR_1) {
  VAR_12 = -VAR_5;
  goto unlock;
 }


 VAR_7 = FUNC_1(VAR_4, VAR_0, VAR_7);


 VAR_9->cmd_pend = 1;


 FUNC_3(VAR_10, VAR_9->lmac_id, VAR_3, VAR_7);


 if (!FUNC_9(VAR_9->wq_cmd_cmplt, !VAR_9->cmd_pend,
    FUNC_5(VAR_2))) {
  VAR_11 = &VAR_10->pdev->dev;
  FUNC_4(VAR_11, "cgx port %d:%d cmd timeout\n",
   VAR_10->cgx_id, VAR_9->lmac_id);
  VAR_12 = -VAR_6;
  goto unlock;
 }


 FUNC_8();
 *VAR_8 = VAR_9->resp;

unlock:
 FUNC_7(&VAR_9->cmd_lock);

 return VAR_12;
}
