
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scm_request {int retries; scalar_t__ error; } ;
struct scm_device {int dummy; } ;
typedef scalar_t__ blk_status_t ;


 int FUNC_0 (struct scm_request*) ;
 int FUNC_1 (struct scm_request*) ;
 int FUNC_2 (struct scm_request*) ;

void FUNC_3(struct scm_device *VAR_0, void *VAR_1, blk_status_t VAR_2)
{
 struct scm_request *VAR_3 = VAR_1;

 VAR_3->error = VAR_2;
 if (VAR_2) {
  FUNC_0(VAR_3);
  if (VAR_3->retries-- > 0) {
   FUNC_1(VAR_3);
   return;
  }
 }

 FUNC_2(VAR_3);
}
