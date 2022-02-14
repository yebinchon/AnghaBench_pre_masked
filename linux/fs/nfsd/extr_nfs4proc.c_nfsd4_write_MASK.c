
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_write {scalar_t__ wr_offset; unsigned long wr_buflen; unsigned long wr_bytes_written; int wr_how_written; int wr_head; int wr_pagelist; int wr_verifier; int wr_stable_how; int wr_stateid; } ;
union nfsd4_op_u {struct nfsd4_write write; } ;
struct svc_rqst {int rq_vec; } ;
struct nfsd_file {int nf_file; } ;
struct nfsd4_compound_state {int current_fh; } ;
typedef int stateid_t ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct svc_rqst*) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (struct svc_rqst*,struct nfsd4_compound_state*,int *,int *,int ,struct nfsd_file**) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (struct nfsd_file*) ;
 scalar_t__ FUNC_7 (struct svc_rqst*,int *,int ,scalar_t__,int ,int,unsigned long*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (struct svc_rqst*,int ,int *,unsigned long) ;
 int FUNC_9 (struct svc_rqst*,int *,scalar_t__,unsigned long) ;
 int FUNC_10 (struct svc_rqst*,int *,scalar_t__,unsigned long) ;

__attribute__((used)) static __be32
FUNC_11(struct svc_rqst *VAR_4, struct nfsd4_compound_state *VAR_5,
     union nfsd4_op_u *VAR_6)
{
 struct nfsd4_write *VAR_7 = &VAR_6->write;
 stateid_t *VAR_8 = &VAR_7->wr_stateid;
 struct nfsd_file *VAR_9 = ((void*)0);
 __be32 VAR_10 = VAR_2;
 unsigned long VAR_11;
 int VAR_12;

 if (VAR_7->wr_offset >= VAR_0)
  return VAR_3;

 VAR_11 = VAR_7->wr_buflen;
 FUNC_10(VAR_4, &VAR_5->current_fh,
          VAR_7->wr_offset, VAR_11);
 VAR_10 = FUNC_5(VAR_4, VAR_5, &VAR_5->current_fh,
      VAR_8, VAR_1, &VAR_9);
 if (VAR_10) {
  FUNC_3("NFSD: nfsd4_write: couldn't process stateid!\n");
  return VAR_10;
 }

 VAR_7->wr_how_written = VAR_7->wr_stable_how;
 FUNC_4(&VAR_7->wr_verifier, FUNC_1(VAR_4));

 VAR_12 = FUNC_8(VAR_4, VAR_7->wr_pagelist,
          &VAR_7->wr_head, VAR_7->wr_buflen);
 FUNC_2(VAR_12 > FUNC_0(VAR_4->rq_vec));

 VAR_10 = FUNC_7(VAR_4, &VAR_5->current_fh, VAR_9->nf_file,
    VAR_7->wr_offset, VAR_4->rq_vec, VAR_12, &VAR_11,
    VAR_7->wr_how_written);
 FUNC_6(VAR_9);

 VAR_7->wr_bytes_written = VAR_11;
 FUNC_9(VAR_4, &VAR_5->current_fh,
         VAR_7->wr_offset, VAR_11);
 return VAR_10;
}
