
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_rqst {TYPE_1__* rq_iov; } ;
struct TYPE_2__ {int iov_base; } ;


 int FUNC_0 (int ) ;

void
FUNC_1(struct smb_rqst *VAR_0)
{
 if (VAR_0 && VAR_0->rq_iov)
  FUNC_0(VAR_0->rq_iov[0].iov_base);
}
