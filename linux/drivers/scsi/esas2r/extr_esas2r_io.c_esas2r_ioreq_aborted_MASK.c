
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct esas2r_request {scalar_t__ timeout; int req_stat; int req_list; } ;
struct esas2r_adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct esas2r_request*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

bool FUNC_4(struct esas2r_adapter *VAR_2, struct esas2r_request *VAR_3,
     u8 VAR_4)
{
 FUNC_1();
 FUNC_0("rq:%p", VAR_3);
 FUNC_3(&VAR_3->req_list);
 if (VAR_3->timeout > VAR_0) {




  VAR_3->req_stat = VAR_1;
  FUNC_2();
  return 1;
 }

 VAR_3->req_stat = VAR_4;
 FUNC_2();
 return 1;
}
