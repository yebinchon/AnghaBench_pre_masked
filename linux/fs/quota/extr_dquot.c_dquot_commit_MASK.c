
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct quota_info {TYPE_2__** ops; } ;
struct TYPE_3__ {size_t type; } ;
struct dquot {int dq_lock; TYPE_1__ dq_id; int dq_flags; int dq_sb; } ;
struct TYPE_4__ {int (* commit_dqblk ) (struct dquot*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dquot*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct quota_info* FUNC_3 (int ) ;
 int FUNC_4 (struct dquot*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

int FUNC_6(struct dquot *VAR_2)
{
 int VAR_3 = 0;
 struct quota_info *VAR_4 = FUNC_3(VAR_2->dq_sb);

 FUNC_1(&VAR_2->dq_lock);
 if (!FUNC_0(VAR_2))
  goto out_lock;


 if (FUNC_5(VAR_0, &VAR_2->dq_flags))
  VAR_3 = VAR_4->ops[VAR_2->dq_id.type]->commit_dqblk(VAR_2);
 else
  VAR_3 = -VAR_1;
out_lock:
 FUNC_2(&VAR_2->dq_lock);
 return VAR_3;
}
