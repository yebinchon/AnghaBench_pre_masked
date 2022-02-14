
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct fc_rport {struct request_queue* rqst_q; } ;


 int FUNC_0 (struct request_queue*,int) ;

__attribute__((used)) static void
FUNC_1(struct fc_rport *VAR_0)
{
 struct request_queue *VAR_1 = VAR_0->rqst_q;

 if (VAR_1)
  FUNC_0(VAR_1, 1);
}
