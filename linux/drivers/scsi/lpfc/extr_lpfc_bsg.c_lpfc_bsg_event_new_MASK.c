
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct lpfc_bsg_event {int reg_id; int kref; int wq; int * dd_data; int wait_time_stamp; void* req_id; void* type_mask; int events_to_see; int events_to_get; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 struct lpfc_bsg_event* FUNC_3 (int,int ) ;

__attribute__((used)) static struct lpfc_bsg_event *
FUNC_4(uint32_t VAR_2, int VAR_3, uint32_t VAR_4)
{
 struct lpfc_bsg_event *VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0);

 if (!VAR_5)
  return ((void*)0);

 FUNC_0(&VAR_5->events_to_get);
 FUNC_0(&VAR_5->events_to_see);
 VAR_5->type_mask = VAR_2;
 VAR_5->req_id = VAR_4;
 VAR_5->reg_id = VAR_3;
 VAR_5->wait_time_stamp = VAR_1;
 VAR_5->dd_data = ((void*)0);
 FUNC_1(&VAR_5->wq);
 FUNC_2(&VAR_5->kref);
 return VAR_5;
}
