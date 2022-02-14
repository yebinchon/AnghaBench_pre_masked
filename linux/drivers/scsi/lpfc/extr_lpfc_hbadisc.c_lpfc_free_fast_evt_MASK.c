
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {int fast_event_count; } ;
struct lpfc_fast_path_event {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct lpfc_fast_path_event*) ;

void
FUNC_2(struct lpfc_hba *VAR_0,
  struct lpfc_fast_path_event *VAR_1) {

 FUNC_0(&VAR_0->fast_event_count);
 FUNC_1(VAR_1);
}
