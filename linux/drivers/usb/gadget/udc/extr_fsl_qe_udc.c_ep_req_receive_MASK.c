
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qe_req {int dummy; } ;
struct qe_ep {scalar_t__ state; scalar_t__ has_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qe_ep*,struct qe_req*) ;
 int FUNC_1 (struct qe_ep*) ;

__attribute__((used)) static int FUNC_2(struct qe_ep *VAR_1, struct qe_req *VAR_2)
{
 if (VAR_1->state == VAR_0) {
  if (VAR_1->has_data <= 0) {

   FUNC_1(VAR_1);
  } else {

   FUNC_0(VAR_1, VAR_2);
  }
 }

 return 0;
}
