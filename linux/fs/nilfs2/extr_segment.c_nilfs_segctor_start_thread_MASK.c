
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct nilfs_sc_info {int * sc_task; int sc_wait_task; int sc_super; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 int VAR_0 ;
 int FUNC_1 (struct task_struct*) ;
 struct task_struct* FUNC_2 (int ,struct nilfs_sc_info*,char*) ;
 int FUNC_3 (int ,int ,char*,int) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct nilfs_sc_info *VAR_2)
{
 struct task_struct *VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_2, "segctord");
 if (FUNC_0(VAR_3)) {
  int VAR_4 = FUNC_1(VAR_3);

  FUNC_3(VAR_2->sc_super, VAR_0,
     "error %d creating segctord thread", VAR_4);
  return VAR_4;
 }
 FUNC_4(VAR_2->sc_wait_task, VAR_2->sc_task != ((void*)0));
 return 0;
}
