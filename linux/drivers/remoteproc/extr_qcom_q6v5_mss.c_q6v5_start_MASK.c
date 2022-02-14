
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {scalar_t__ priv; } ;
struct q6v5 {int running; int mpss_size; int mpss_phys; int mpss_perm; scalar_t__ dump_segment_mask; int dev; int mba_size; int mba_phys; int mba_perm; int q6v5; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct q6v5*) ;
 int FUNC_5 (struct q6v5*) ;
 int FUNC_6 (struct q6v5*) ;
 int FUNC_7 (struct q6v5*,int *,int,int ,int ) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct rproc *VAR_1)
{
 struct q6v5 *VAR_2 = (struct q6v5 *)VAR_1->priv;
 int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_2(VAR_2->dev, "MBA booted, loading mpss\n");

 VAR_4 = FUNC_6(VAR_2);
 if (VAR_4)
  goto reclaim_mpss;

 VAR_4 = FUNC_8(&VAR_2->q6v5, FUNC_3(5000));
 if (VAR_4 == -VAR_0) {
  FUNC_1(VAR_2->dev, "start timed out\n");
  goto reclaim_mpss;
 }

 VAR_3 = FUNC_7(VAR_2, &VAR_2->mba_perm, 0,
      VAR_2->mba_phys,
      VAR_2->mba_size);
 if (VAR_3)
  FUNC_1(VAR_2->dev,
   "Failed to reclaim mba buffer system may become unstable\n");


 VAR_2->dump_segment_mask = 0;
 VAR_2->running = 1;

 return 0;

reclaim_mpss:
 VAR_3 = FUNC_7(VAR_2, &VAR_2->mpss_perm,
      0, VAR_2->mpss_phys,
      VAR_2->mpss_size);
 FUNC_0(VAR_3);
 FUNC_5(VAR_2);

 return VAR_4;
}
