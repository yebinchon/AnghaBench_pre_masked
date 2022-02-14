
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tasklet_completion_status {scalar_t__ dl_opcode; int tag; int tag_valid; int tmf_state; } ;
struct done_list_struct {scalar_t__ opcode; } ;
struct asd_ascb {int completion; int tag; int tag_valid; struct tasklet_completion_status* uldd_task; int timer; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct asd_ascb*) ;
 int FUNC_2 (struct asd_ascb*,struct done_list_struct*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct asd_ascb *VAR_1,
         struct done_list_struct *VAR_2)
{
 struct tasklet_completion_status *VAR_3;

 if (!FUNC_4(&VAR_1->timer))
  return;

 VAR_3 = VAR_1->uldd_task;
 FUNC_0("tmf tasklet complete\n");

 VAR_3->dl_opcode = VAR_2->opcode;

 if (VAR_2->opcode == VAR_0) {
  VAR_3->tmf_state = FUNC_2(VAR_1, VAR_2);
  VAR_3->tag_valid = VAR_1->tag_valid;
  VAR_3->tag = VAR_1->tag;
 }

 FUNC_3(VAR_1->completion);
 FUNC_1(VAR_1);
}
