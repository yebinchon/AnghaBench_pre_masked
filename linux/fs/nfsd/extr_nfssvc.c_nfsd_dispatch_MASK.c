
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* head; } ;
struct TYPE_6__ {TYPE_1__* head; } ;
struct svc_rqst {int rq_vers; scalar_t__ rq_proc; int rq_cachetype; int rq_flags; TYPE_4__ rq_res; TYPE_2__ rq_arg; struct svc_procedure* rq_procinfo; } ;
struct svc_procedure {scalar_t__ (* pc_func ) (struct svc_rqst*) ;int (* pc_encode ) (struct svc_rqst*,scalar_t__*) ;int (* pc_decode ) (struct svc_rqst*,scalar_t__*) ;int pc_cachetype; } ;
typedef scalar_t__ __be32 ;
struct TYPE_7__ {int iov_len; scalar_t__* iov_base; } ;
struct TYPE_5__ {scalar_t__ iov_base; } ;




 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int,scalar_t__) ;
 scalar_t__ FUNC_2 (struct svc_rqst*,struct svc_procedure const*) ;
 int FUNC_3 (struct svc_rqst*) ;
 int FUNC_4 (struct svc_rqst*,int ,scalar_t__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct svc_rqst*,scalar_t__*) ;
 scalar_t__ FUNC_6 (struct svc_rqst*) ;
 int FUNC_7 (struct svc_rqst*,scalar_t__*) ;
 scalar_t__ FUNC_8 (int ,int *) ;

int
FUNC_9(struct svc_rqst *VAR_5, __be32 *VAR_6)
{
 const struct svc_procedure *VAR_7;
 __be32 VAR_8;
 __be32 *VAR_9;

 FUNC_0("nfsd_dispatch: vers %d proc %d\n",
    VAR_5->rq_vers, VAR_5->rq_proc);
 VAR_7 = VAR_5->rq_procinfo;

 if (FUNC_2(VAR_5, VAR_7)) {
  FUNC_0("nfsd: NFSv%d argument too large\n", VAR_5->rq_vers);
  *VAR_6 = VAR_3;
  return 1;
 }




 VAR_5->rq_cachetype = VAR_7->pc_cachetype;

 if (VAR_7->pc_decode &&
     !VAR_7->pc_decode(VAR_5, (__be32*)VAR_5->rq_arg.head[0].iov_base)) {
  FUNC_0("nfsd: failed to decode arguments!\n");
  *VAR_6 = VAR_3;
  return 1;
 }


 switch (FUNC_3(VAR_5)) {
 case 129:
  return 0;
 case 128:
  return 1;
 case 130:;

 }




 VAR_9 = VAR_5->rq_res.head[0].iov_base
  + VAR_5->rq_res.head[0].iov_len;
 VAR_5->rq_res.head[0].iov_len += sizeof(__be32);


 VAR_8 = VAR_7->pc_func(VAR_5);
 VAR_8 = FUNC_1(VAR_5->rq_vers, VAR_8);
 if (VAR_8 == VAR_2 || FUNC_8(VAR_1, &VAR_5->rq_flags)) {
  FUNC_0("nfsd: Dropping request; may be revisited later\n");
  FUNC_4(VAR_5, VAR_0, ((void*)0));
  return 0;
 }

 if (VAR_5->rq_proc != 0)
  *VAR_9++ = VAR_8;




 if (!(VAR_8 && VAR_5->rq_vers == 2)) {
  if (VAR_7->pc_encode && !VAR_7->pc_encode(VAR_5, VAR_9)) {

   FUNC_0("nfsd: failed to encode result!\n");
   FUNC_4(VAR_5, VAR_0, ((void*)0));
   *VAR_6 = VAR_4;
   return 1;
  }
 }


 FUNC_4(VAR_5, VAR_5->rq_cachetype, VAR_6 + 1);
 return 1;
}
