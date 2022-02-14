
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rqst {scalar_t__ rq_iov; } ;


 int FUNC_0 (struct smb_rqst*) ;
 int FUNC_1 (struct smb_rqst*) ;

__attribute__((used)) static void
FUNC_2(struct smb_rqst *VAR_0)
{
 if (VAR_0[1].rq_iov)
  FUNC_1(&VAR_0[1]);
 if (VAR_0[2].rq_iov)
  FUNC_0(&VAR_0[2]);
}
