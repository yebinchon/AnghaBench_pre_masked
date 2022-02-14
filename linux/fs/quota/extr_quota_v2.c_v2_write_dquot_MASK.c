
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct quota_info {int dqio_sem; } ;
struct TYPE_3__ {int type; } ;
struct dquot {TYPE_1__ dq_id; int dq_sb; int dq_off; } ;
struct TYPE_4__ {int dqi_priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct dquot*) ;
 TYPE_2__* FUNC_3 (int ,int ) ;
 struct quota_info* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct dquot *VAR_0)
{
 struct quota_info *VAR_1 = FUNC_4(VAR_0->dq_sb);
 int VAR_2;
 bool VAR_3 = 0;







 if (!VAR_0->dq_off) {
  VAR_3 = 1;
  FUNC_1(&VAR_1->dqio_sem);
 } else {
  FUNC_0(&VAR_1->dqio_sem);
 }
 VAR_2 = FUNC_2(
   FUNC_3(VAR_0->dq_sb, VAR_0->dq_id.type)->dqi_priv,
   VAR_0);
 if (VAR_3)
  FUNC_6(&VAR_1->dqio_sem);
 else
  FUNC_5(&VAR_1->dqio_sem);
 return VAR_2;
}
