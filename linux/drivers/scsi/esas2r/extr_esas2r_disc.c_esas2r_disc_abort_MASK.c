
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_request {scalar_t__ interrupt_cx; } ;
struct esas2r_disc_context {int state; } ;
struct esas2r_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct esas2r_adapter *VAR_1,
         struct esas2r_request *VAR_2)
{
 struct esas2r_disc_context *VAR_3 =
  (struct esas2r_disc_context *)VAR_2->interrupt_cx;

 FUNC_0();



 VAR_3->state = VAR_0;

 FUNC_1();
}
