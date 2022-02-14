
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_request {scalar_t__ req_stat; scalar_t__ timeout; int * interrupt_cx; } ;
struct esas2r_adapter {struct esas2r_request general_req; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_1 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_2 (struct esas2r_adapter*) ;
 int FUNC_3 (struct esas2r_adapter*) ;
 int FUNC_4 (struct esas2r_adapter*) ;
 int FUNC_5 (struct esas2r_adapter*,struct esas2r_request*) ;

void FUNC_6(struct esas2r_adapter *VAR_4)
{
 struct esas2r_request *VAR_5 = &VAR_4->general_req;



 FUNC_4(VAR_4);







 FUNC_2(VAR_4);

 if (VAR_5->interrupt_cx == ((void*)0))
  return;

 if (VAR_5->req_stat == VAR_2
     && VAR_5->timeout <= VAR_0) {

  FUNC_5(VAR_4, VAR_5);

  if (VAR_5->req_stat == VAR_3) {
   FUNC_0(VAR_4, VAR_5);
   FUNC_3(VAR_4);
   return;
  }
 }

 if (VAR_5->req_stat == VAR_1
     || VAR_5->req_stat == VAR_2)
  return;

 FUNC_1(VAR_4, VAR_5);
}
