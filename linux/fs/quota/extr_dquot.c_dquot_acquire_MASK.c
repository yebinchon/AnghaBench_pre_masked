
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct quota_info {TYPE_1__** ops; int * info; } ;
struct TYPE_4__ {size_t type; } ;
struct dquot {int dq_lock; int dq_flags; TYPE_2__ dq_id; int dq_sb; int dq_off; } ;
struct TYPE_3__ {int (* read_dqblk ) (struct dquot*) ;int (* commit_dqblk ) (struct dquot*) ;int (* write_file_info ) (int ,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct quota_info* FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (struct dquot*) ;
 int FUNC_7 (struct dquot*) ;
 int FUNC_8 (int ,size_t) ;
 int FUNC_9 (int ,int *) ;

int FUNC_10(struct dquot *VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0;
 struct quota_info *VAR_5 = FUNC_3(VAR_2->dq_sb);

 FUNC_1(&VAR_2->dq_lock);
 if (!FUNC_9(VAR_1, &VAR_2->dq_flags)) {
  VAR_3 = VAR_5->ops[VAR_2->dq_id.type]->read_dqblk(VAR_2);
  if (VAR_3 < 0)
   goto out_iolock;
 }

 FUNC_5();
 FUNC_4(VAR_1, &VAR_2->dq_flags);

 if (!FUNC_9(VAR_0, &VAR_2->dq_flags) && !VAR_2->dq_off) {
  VAR_3 = VAR_5->ops[VAR_2->dq_id.type]->commit_dqblk(VAR_2);

  if (FUNC_0(&VAR_5->info[VAR_2->dq_id.type])) {
   VAR_4 = VAR_5->ops[VAR_2->dq_id.type]->write_file_info(
     VAR_2->dq_sb, VAR_2->dq_id.type);
  }
  if (VAR_3 < 0)
   goto out_iolock;
  if (VAR_4 < 0) {
   VAR_3 = VAR_4;
   goto out_iolock;
  }
 }




 FUNC_5();
 FUNC_4(VAR_0, &VAR_2->dq_flags);
out_iolock:
 FUNC_2(&VAR_2->dq_lock);
 return VAR_3;
}
