
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct isci_request {int flags; } ;
struct isci_host {size_t task_context_entries; size_t* io_request_sequence; struct isci_request** reqs; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (int ,int *) ;

struct isci_request *FUNC_3(struct isci_host *VAR_1, u16 VAR_2)
{
 u16 VAR_3;
 u16 VAR_4;

 VAR_3 = FUNC_1(VAR_2);

 if (VAR_3 < VAR_1->task_context_entries) {
  struct isci_request *VAR_5 = VAR_1->reqs[VAR_3];

  if (FUNC_2(VAR_0, &VAR_5->flags)) {
   VAR_4 = FUNC_0(VAR_2);

   if (VAR_4 == VAR_1->io_request_sequence[VAR_3])
    return VAR_5;
  }
 }

 return ((void*)0);
}
