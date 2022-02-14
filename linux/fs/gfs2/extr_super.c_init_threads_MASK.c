
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct gfs2_sbd {struct task_struct* sd_logd_process; struct task_struct* sd_quotad_process; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct gfs2_sbd*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct task_struct* FUNC_3 (int ,struct gfs2_sbd*,char*) ;
 int FUNC_4 (struct task_struct*) ;

__attribute__((used)) static int FUNC_5(struct gfs2_sbd *VAR_2)
{
 struct task_struct *VAR_3;
 int VAR_4 = 0;

 VAR_3 = FUNC_3(VAR_0, VAR_2, "gfs2_logd");
 if (FUNC_0(VAR_3)) {
  VAR_4 = FUNC_1(VAR_3);
  FUNC_2(VAR_2, "can't start logd thread: %d\n", VAR_4);
  return VAR_4;
 }
 VAR_2->sd_logd_process = VAR_3;

 VAR_3 = FUNC_3(VAR_1, VAR_2, "gfs2_quotad");
 if (FUNC_0(VAR_3)) {
  VAR_4 = FUNC_1(VAR_3);
  FUNC_2(VAR_2, "can't start quotad thread: %d\n", VAR_4);
  goto fail;
 }
 VAR_2->sd_quotad_process = VAR_3;
 return 0;

fail:
 FUNC_4(VAR_2->sd_logd_process);
 VAR_2->sd_logd_process = ((void*)0);
 return VAR_4;
}
