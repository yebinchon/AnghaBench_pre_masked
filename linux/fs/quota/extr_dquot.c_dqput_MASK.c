
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {size_t type; } ;
struct dquot {int dq_free; int dq_count; TYPE_2__* dq_sb; int dq_flags; TYPE_4__ dq_id; } ;
struct TYPE_6__ {TYPE_1__* dq_op; } ;
struct TYPE_5__ {int (* write_dquot ) (struct dquot*) ;int (* release_dquot ) (struct dquot*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct dquot*) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct dquot*) ;
 int VAR_3 ;
 int FUNC_7 (int *,TYPE_4__) ;
 int VAR_4 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct dquot*) ;
 int FUNC_10 (TYPE_2__*,char*,int,...) ;
 int * VAR_5 ;
 int FUNC_11 (TYPE_2__*,size_t) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct dquot*) ;
 int FUNC_15 (struct dquot*) ;
 scalar_t__ FUNC_16 (int ,int *) ;
 int FUNC_17 (int *) ;

void FUNC_18(struct dquot *VAR_6)
{
 int VAR_7;

 if (!VAR_6)
  return;
 FUNC_5(VAR_0);
we_slept:
 FUNC_12(&VAR_2);
 if (FUNC_3(&VAR_6->dq_count) > 1) {

  FUNC_2(&VAR_6->dq_count);

  if (!FUNC_11(VAR_6->dq_sb, VAR_6->dq_id.type) &&
      FUNC_3(&VAR_6->dq_count) == 1)
   FUNC_17(&VAR_3);
  FUNC_13(&VAR_2);
  return;
 }

 if (FUNC_6(VAR_6)) {
  FUNC_13(&VAR_2);

  VAR_7 = VAR_6->dq_sb->dq_op->write_dquot(VAR_6);
  if (VAR_7 < 0) {
   FUNC_10(VAR_6->dq_sb, "Can't write quota structure"
        " (error %d). Quota may get out of sync!",
        VAR_7);




   FUNC_4(VAR_6);
  }
  goto we_slept;
 }
 if (FUNC_16(VAR_1, &VAR_6->dq_flags)) {
  FUNC_13(&VAR_2);
  VAR_6->dq_sb->dq_op->release_dquot(VAR_6);
  goto we_slept;
 }
 FUNC_2(&VAR_6->dq_count);




 FUNC_9(VAR_6);
 FUNC_13(&VAR_2);
}
