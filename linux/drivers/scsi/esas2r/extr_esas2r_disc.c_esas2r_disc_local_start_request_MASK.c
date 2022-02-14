
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_request {int req_list; } ;
struct esas2r_adapter {int active_list; } ;


 int FUNC_0 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(struct esas2r_adapter *VAR_0,
         struct esas2r_request *VAR_1)
{
 FUNC_1();

 FUNC_3(&VAR_1->req_list, &VAR_0->active_list);

 FUNC_0(VAR_0, VAR_1);

 FUNC_2();

 return;
}
