
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_request {int timeout; struct esas2r_disc_context* interrupt_cx; int comp_cb; } ;
struct esas2r_disc_context {int dummy; } ;
struct esas2r_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct esas2r_adapter*,struct esas2r_request*,int ,int ,int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_2 (struct esas2r_request*,struct esas2r_adapter*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static bool FUNC_5(struct esas2r_adapter *VAR_2,
           struct esas2r_request *VAR_3)
{
 struct esas2r_disc_context *VAR_4 =
  (struct esas2r_disc_context *)VAR_3->interrupt_cx;
 bool VAR_5;

 FUNC_3();

 FUNC_2(VAR_3, VAR_2);

 FUNC_0(VAR_2,
        VAR_3,
        VAR_0,
        0,
        0,
        0,
        ((void*)0));

 VAR_3->comp_cb = VAR_1;

 VAR_3->timeout = 30000;
 VAR_3->interrupt_cx = VAR_4;

 VAR_5 = FUNC_1(VAR_2, VAR_3);

 FUNC_4();

 return VAR_5;
}
