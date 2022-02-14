
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nfsd_file {int nf_file; } ;
struct nfsd4_fallocate {int falloc_length; int falloc_offset; int falloc_stateid; } ;
struct nfsd4_compound_state {int current_fh; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct svc_rqst*,struct nfsd4_compound_state*,int *,int *,int ,struct nfsd_file**) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct svc_rqst*,int *,int ,int ,int ,int) ;
 int FUNC_3 (struct nfsd_file*) ;

__attribute__((used)) static __be32
FUNC_4(struct svc_rqst *VAR_2, struct nfsd4_compound_state *VAR_3,
  struct nfsd4_fallocate *VAR_4, int VAR_5)
{
 __be32 VAR_6;
 struct nfsd_file *VAR_7;

 VAR_6 = FUNC_1(VAR_2, VAR_3, &VAR_3->current_fh,
         &VAR_4->falloc_stateid,
         VAR_0, &VAR_7);
 if (VAR_6 != VAR_1) {
  FUNC_0("NFSD: nfsd4_fallocate: couldn't process stateid!\n");
  return VAR_6;
 }

 VAR_6 = FUNC_2(VAR_2, &VAR_3->current_fh, VAR_7->nf_file,
         VAR_4->falloc_offset,
         VAR_4->falloc_length,
         VAR_5);
 FUNC_3(VAR_7);
 return VAR_6;
}
