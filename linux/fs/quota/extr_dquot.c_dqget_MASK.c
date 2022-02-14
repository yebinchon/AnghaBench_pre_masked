
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {TYPE_1__* dq_op; int s_user_ns; } ;
struct kqid {int type; } ;
struct dquot {int dq_sb; int dq_flags; int dq_count; struct kqid dq_id; } ;
struct TYPE_2__ {int (* acquire_dquot ) (struct dquot*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dquot* FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct dquot*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct dquot*) ;
 int FUNC_6 (int ) ;
 struct dquot* FUNC_7 (unsigned int,struct super_block*,struct kqid) ;
 struct dquot* FUNC_8 (struct super_block*,int ) ;
 unsigned int FUNC_9 (struct super_block*,struct kqid) ;
 int FUNC_10 (struct dquot*) ;
 int FUNC_11 (struct dquot*) ;
 int FUNC_12 (int ,struct kqid) ;
 int FUNC_13 (struct dquot*) ;
 int FUNC_14 (struct super_block*,int ) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct dquot*) ;
 int FUNC_20 (int ,int *) ;
 int FUNC_21 (struct dquot*) ;

struct dquot *FUNC_22(struct super_block *VAR_7, struct kqid VAR_8)
{
 unsigned int VAR_9 = FUNC_9(VAR_7, VAR_8);
 struct dquot *VAR_10, *VAR_11 = ((void*)0);

 if (!FUNC_12(VAR_7->s_user_ns, VAR_8))
  return FUNC_1(-VAR_3);

        if (!FUNC_14(VAR_7, VAR_8.type))
  return FUNC_1(-VAR_4);
we_slept:
 FUNC_17(&VAR_5);
 FUNC_17(&VAR_6);
 if (!FUNC_14(VAR_7, VAR_8.type)) {
  FUNC_18(&VAR_6);
  FUNC_18(&VAR_5);
  VAR_10 = FUNC_1(-VAR_4);
  goto out;
 }
 FUNC_18(&VAR_6);

 VAR_10 = FUNC_7(VAR_9, VAR_7, VAR_8);
 if (!VAR_10) {
  if (!VAR_11) {
   FUNC_18(&VAR_5);
   VAR_11 = FUNC_8(VAR_7, VAR_8.type);
   if (!VAR_11)
    FUNC_15();
   goto we_slept;
  }
  VAR_10 = VAR_11;
  VAR_11 = ((void*)0);
  VAR_10->dq_id = VAR_8;

  FUNC_11(VAR_10);

  FUNC_10(VAR_10);
  FUNC_18(&VAR_5);
  FUNC_6(VAR_1);
 } else {
  if (!FUNC_3(&VAR_10->dq_count))
   FUNC_13(VAR_10);
  FUNC_2(&VAR_10->dq_count);
  FUNC_18(&VAR_5);
  FUNC_6(VAR_0);
  FUNC_6(VAR_1);
 }


 FUNC_21(VAR_10);

 if (!FUNC_20(VAR_2, &VAR_10->dq_flags)) {
  int VAR_12;

  VAR_12 = VAR_7->dq_op->acquire_dquot(VAR_10);
  if (VAR_12 < 0) {
   FUNC_5(VAR_10);
   VAR_10 = FUNC_1(VAR_12);
   goto out;
  }
 }




 FUNC_16();



out:
 if (VAR_11)
  FUNC_4(VAR_11);

 return VAR_10;
}
