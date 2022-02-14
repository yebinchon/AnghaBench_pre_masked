
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_read {scalar_t__ rd_offset; int * rd_fhp; struct svc_rqst* rd_rqstp; int * rd_nf; int rd_stateid; int rd_length; } ;
union nfsd4_op_u {struct nfsd4_read read; } ;
struct svc_rqst {int rq_flags; } ;
struct nfsd4_compound_state {int current_fh; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct svc_rqst*,struct nfsd4_compound_state*,int *,int *,int ,int **) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct svc_rqst*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct svc_rqst*,int *,scalar_t__,int ) ;

__attribute__((used)) static __be32
FUNC_5(struct svc_rqst *VAR_5, struct nfsd4_compound_state *VAR_6,
    union nfsd4_op_u *VAR_7)
{
 struct nfsd4_read *VAR_8 = &VAR_7->read;
 __be32 VAR_9;

 VAR_8->rd_nf = ((void*)0);
 if (VAR_8->rd_offset >= VAR_0)
  return VAR_4;

 FUNC_4(VAR_5, &VAR_6->current_fh,
         VAR_8->rd_offset, VAR_8->rd_length);
 if (!FUNC_3(VAR_5))
  FUNC_0(VAR_2, &VAR_5->rq_flags);


 VAR_9 = FUNC_2(VAR_5, VAR_6, &VAR_6->current_fh,
     &VAR_8->rd_stateid, VAR_1,
     &VAR_8->rd_nf);
 if (VAR_9) {
  FUNC_1("NFSD: nfsd4_read: couldn't process stateid!\n");
  goto out;
 }
 VAR_9 = VAR_3;
out:
 VAR_8->rd_rqstp = VAR_5;
 VAR_8->rd_fhp = &VAR_6->current_fh;
 return VAR_9;
}
