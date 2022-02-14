
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct tasklet_completion_status {int tmf_state; } ;
struct asd_ascb {int completion; struct tasklet_completion_status* uldd_task; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct asd_ascb* VAR_1 ;
 int FUNC_1 (int ) ;
 struct asd_ascb* FUNC_2 (int ,struct timer_list*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_3)
{
 struct asd_ascb *VAR_4 = FUNC_2(VAR_4, VAR_3, VAR_2);
 struct tasklet_completion_status *VAR_5 = VAR_4->uldd_task;

 FUNC_0("tmf timed out\n");
 VAR_5->tmf_state = VAR_0;
 FUNC_1(VAR_4->completion);
}
