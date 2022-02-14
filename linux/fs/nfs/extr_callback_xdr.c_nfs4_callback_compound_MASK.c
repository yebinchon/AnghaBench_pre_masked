
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_7__ {TYPE_2__* head; } ;
struct TYPE_8__ {TYPE_1__* head; } ;
struct svc_rqst {int rq_resp; int rq_argp; TYPE_3__ rq_res; TYPE_4__ rq_arg; } ;
struct cb_process_state {scalar_t__ minorversion; int * clp; int net; int drc_status; } ;
struct cb_compound_hdr_res {scalar_t__* nops; scalar_t__* status; int tag; int taglen; int * member_0; } ;
struct cb_compound_hdr_arg {scalar_t__ minorversion; unsigned int nops; int tag; int taglen; int cb_ident; int member_0; } ;
typedef scalar_t__ __be32 ;
struct TYPE_6__ {int iov_len; scalar_t__ iov_base; } ;
struct TYPE_5__ {int iov_base; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct svc_rqst*) ;
 int FUNC_1 (int *,struct svc_rqst*) ;
 scalar_t__ FUNC_2 (struct xdr_stream*,struct cb_compound_hdr_arg*) ;
 scalar_t__ FUNC_3 (struct xdr_stream*,struct cb_compound_hdr_res*) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 int FUNC_5 (struct cb_process_state*) ;
 int * FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (unsigned int,struct svc_rqst*,struct xdr_stream*,int ,struct xdr_stream*,int ,struct cb_process_state*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_10 (struct svc_rqst*,int ) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct xdr_stream*,TYPE_4__*,int ,int *) ;
 int FUNC_13 (struct xdr_stream*,TYPE_3__*,scalar_t__*,int *) ;

__attribute__((used)) static __be32 FUNC_14(struct svc_rqst *VAR_6)
{
 struct cb_compound_hdr_arg VAR_7 = { 0 };
 struct cb_compound_hdr_res VAR_8 = { ((void*)0) };
 struct xdr_stream VAR_9, VAR_10;
 __be32 *VAR_11, VAR_12;
 struct cb_process_state VAR_13 = {
  .drc_status = 0,
  .clp = ((void*)0),
  .net = FUNC_0(VAR_6),
 };
 unsigned int VAR_14 = 0;

 FUNC_12(&VAR_9, &VAR_6->rq_arg,
   VAR_6->rq_arg.head[0].iov_base, ((void*)0));

 VAR_11 = (__be32*)((char *)VAR_6->rq_res.head[0].iov_base + VAR_6->rq_res.head[0].iov_len);
 FUNC_13(&VAR_10, &VAR_6->rq_res, VAR_11, ((void*)0));

 VAR_12 = FUNC_2(&VAR_9, &VAR_7);
 if (VAR_12 == FUNC_4(VAR_0))
  return VAR_3;

 if (VAR_7.minorversion == 0) {
  VAR_13.clp = FUNC_6(FUNC_0(VAR_6), VAR_7.cb_ident);
  if (!VAR_13.clp || !FUNC_1(VAR_13.clp, VAR_6)) {
   if (VAR_13.clp)
    FUNC_7(VAR_13.clp);
   goto out_invalidcred;
  }
 }

 VAR_13.minorversion = VAR_7.minorversion;
 VAR_8.taglen = VAR_7.taglen;
 VAR_8.tag = VAR_7.tag;
 if (FUNC_3(&VAR_10, &VAR_8) != 0) {
  if (VAR_13.clp)
   FUNC_7(VAR_13.clp);
  return VAR_5;
 }
 while (VAR_12 == 0 && VAR_14 != VAR_7.nops) {
  VAR_12 = FUNC_9(VAR_14, VAR_6, &VAR_9,
        VAR_6->rq_argp, &VAR_10, VAR_6->rq_resp,
        &VAR_13);
  VAR_14++;
 }



 if (FUNC_11(VAR_12 == FUNC_4(VAR_1))) {
  VAR_12 = FUNC_4(VAR_0);
  VAR_14--;
 }

 *VAR_8.status = VAR_12;
 *VAR_8.nops = FUNC_4(VAR_14);
 FUNC_5(&VAR_13);
 FUNC_7(VAR_13.clp);
 return VAR_4;

out_invalidcred:
 FUNC_8("NFS: NFSv4 callback contains invalid cred\n");
 return FUNC_10(VAR_6, VAR_2);
}
