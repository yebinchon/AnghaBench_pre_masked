
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_rqst {int rq_nvec; TYPE_1__* rq_iov; } ;
struct TYPE_2__ {scalar_t__ iov_base; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;

void
FUNC_2(struct smb_rqst *VAR_1)
{
 int VAR_2;
 if (VAR_1 && VAR_1->rq_iov) {
  FUNC_0(VAR_1->rq_iov[0].iov_base);
  for (VAR_2 = 1; VAR_2 < VAR_1->rq_nvec; VAR_2++)
   if (VAR_1->rq_iov[VAR_2].iov_base != VAR_0)
    FUNC_1(VAR_1->rq_iov[VAR_2].iov_base);
 }
}
