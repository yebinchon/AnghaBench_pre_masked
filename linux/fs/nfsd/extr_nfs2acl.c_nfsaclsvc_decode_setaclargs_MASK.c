
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct kvec* head; } ;
struct svc_rqst {TYPE_1__ rq_arg; struct nfsd3_setaclargs* rq_argp; } ;
struct nfsd3_setaclargs {int mask; int acl_default; int acl_access; int fh; } ;
struct kvec {scalar_t__ iov_base; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_1__*,unsigned int,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct svc_rqst*,int *) ;

__attribute__((used)) static int FUNC_4(struct svc_rqst *VAR_3, __be32 *VAR_4)
{
 struct nfsd3_setaclargs *VAR_5 = VAR_3->rq_argp;
 struct kvec *VAR_6 = VAR_3->rq_arg.head;
 unsigned int VAR_7;
 int VAR_8;

 VAR_4 = FUNC_0(VAR_4, &VAR_5->fh);
 if (!VAR_4)
  return 0;
 VAR_5->mask = FUNC_2(*VAR_4++);
 if (VAR_5->mask & ~VAR_1 ||
     !FUNC_3(VAR_3, VAR_4))
  return 0;

 VAR_7 = (char *)VAR_4 - (char *)VAR_6->iov_base;
 VAR_8 = FUNC_1(&VAR_3->rq_arg, VAR_7, ((void*)0),
     (VAR_5->mask & VAR_0) ?
     &VAR_5->acl_access : ((void*)0));
 if (VAR_8 > 0)
  VAR_8 = FUNC_1(&VAR_3->rq_arg, VAR_7 + VAR_8, ((void*)0),
      (VAR_5->mask & VAR_2) ?
      &VAR_5->acl_default : ((void*)0));
 return (VAR_8 > 0);
}
