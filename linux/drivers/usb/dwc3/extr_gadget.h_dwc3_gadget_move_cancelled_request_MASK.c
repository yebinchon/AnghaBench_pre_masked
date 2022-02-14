
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_request {int list; int status; struct dwc3_ep* dep; } ;
struct dwc3_ep {int cancelled_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static inline void FUNC_1(struct dwc3_request *VAR_1)
{
 struct dwc3_ep *VAR_2 = VAR_1->dep;

 VAR_1->status = VAR_0;
 FUNC_0(&VAR_1->list, &VAR_2->cancelled_list);
}
