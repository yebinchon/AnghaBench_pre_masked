
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cb_stateid; } ;
struct nfsd4_copy {int copy_task; TYPE_3__* cp_clp; int copies; int cp_stateid; TYPE_2__ cp_res; int refcount; int cp_synchronous; int fh; int nf_dst; int cp_dst_stateid; int nf_src; int cp_src_stateid; } ;
union nfsd4_op_u {struct nfsd4_copy copy; } ;
struct svc_rqst {int dummy; } ;
struct nfsd_net {int dummy; } ;
struct TYPE_4__ {int fh_handle; } ;
struct nfsd4_compound_state {TYPE_1__ current_fh; TYPE_3__* clp; } ;
struct knfsd_fh {int dummy; } ;
typedef scalar_t__ __be32 ;
struct TYPE_6__ {int async_lock; int async_copies; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct svc_rqst*) ;
 int FUNC_2 (struct nfsd4_copy*) ;
 int FUNC_3 (struct nfsd4_copy*,struct nfsd4_copy*) ;
 int FUNC_4 (struct nfsd4_copy*) ;
 int FUNC_5 (int ,struct nfsd4_copy*,char*,char*) ;
 struct nfsd4_copy* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *,int) ;
 struct nfsd_net* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct nfsd_net*,struct nfsd4_copy*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_11 (struct nfsd4_copy*,int) ;
 scalar_t__ FUNC_12 (struct svc_rqst*,struct nfsd4_compound_state*,int *,int *,int *,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static __be32
FUNC_18(struct svc_rqst *VAR_5, struct nfsd4_compound_state *VAR_6,
  union nfsd4_op_u *VAR_7)
{
 struct nfsd4_copy *VAR_8 = &VAR_7->copy;
 __be32 VAR_9;
 struct nfsd4_copy *VAR_10 = ((void*)0);

 VAR_9 = FUNC_12(VAR_5, VAR_6, &VAR_8->cp_src_stateid,
       &VAR_8->nf_src, &VAR_8->cp_dst_stateid,
       &VAR_8->nf_dst);
 if (VAR_9)
  goto out;

 VAR_8->cp_clp = VAR_6->clp;
 FUNC_8(&VAR_8->fh, &VAR_6->current_fh.fh_handle,
  sizeof(struct knfsd_fh));
 if (!VAR_8->cp_synchronous) {
  struct nfsd_net *VAR_11 = FUNC_9(FUNC_1(VAR_5), VAR_4);

  VAR_9 = FUNC_13(-VAR_0);
  VAR_10 = FUNC_6(sizeof(struct nfsd4_copy), VAR_1);
  if (!VAR_10)
   goto out;
  if (!FUNC_10(VAR_11, VAR_8)) {
   FUNC_4(VAR_10);
   goto out;
  }
  FUNC_14(&VAR_10->refcount, 1);
  FUNC_8(&VAR_8->cp_res.cb_stateid, &VAR_8->cp_stateid,
   sizeof(VAR_8->cp_stateid));
  FUNC_3(VAR_8, VAR_10);
  VAR_10->copy_task = FUNC_5(VAR_3,
    VAR_10, "%s", "copy thread");
  if (FUNC_0(VAR_10->copy_task))
   goto out_err;
  FUNC_15(&VAR_10->cp_clp->async_lock);
  FUNC_7(&VAR_10->copies,
    &VAR_10->cp_clp->async_copies);
  FUNC_16(&VAR_10->cp_clp->async_lock);
  FUNC_17(VAR_10->copy_task);
  VAR_9 = VAR_2;
 } else
  VAR_9 = FUNC_11(VAR_8, 1);
out:
 return VAR_9;
out_err:
 FUNC_2(VAR_10);
 goto out;
}
