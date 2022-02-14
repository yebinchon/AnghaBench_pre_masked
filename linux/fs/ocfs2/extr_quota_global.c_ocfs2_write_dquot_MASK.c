
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct TYPE_4__ {int type; } ;
struct dquot {int dq_sb; TYPE_2__ dq_id; } ;
typedef int handle_t ;
struct TYPE_3__ {int dqio_sem; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_2__) ;
 int VAR_1 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ocfs2_super*,int *) ;
 int FUNC_7 (struct dquot*) ;
 int * FUNC_8 (struct ocfs2_super*,int ) ;
 TYPE_1__* FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct dquot *VAR_2)
{
 handle_t *VAR_3;
 struct ocfs2_super *VAR_4 = FUNC_1(VAR_2->dq_sb);
 int VAR_5 = 0;

 FUNC_10(FUNC_4(&VAR_1, VAR_2->dq_id),
    VAR_2->dq_id.type);

 VAR_3 = FUNC_8(VAR_4, VAR_0);
 if (FUNC_0(VAR_3)) {
  VAR_5 = FUNC_2(VAR_3);
  FUNC_5(VAR_5);
  goto out;
 }
 FUNC_3(&FUNC_9(VAR_2->dq_sb)->dqio_sem);
 VAR_5 = FUNC_7(VAR_2);
 FUNC_11(&FUNC_9(VAR_2->dq_sb)->dqio_sem);
 FUNC_6(VAR_4, VAR_3);
out:
 return VAR_5;
}
