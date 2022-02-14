
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_clone {int cl_count; int cl_dst_pos; int cl_src_pos; int cl_dst_stateid; int cl_src_stateid; } ;
union nfsd4_op_u {struct nfsd4_clone clone; } ;
struct svc_rqst {int dummy; } ;
struct nfsd_file {int nf_file; } ;
struct nfsd4_compound_state {int dummy; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct svc_rqst*,struct nfsd4_compound_state*,int *,struct nfsd_file**,int *,struct nfsd_file**) ;
 int FUNC_2 (struct nfsd_file*) ;

__attribute__((used)) static __be32
FUNC_3(struct svc_rqst *VAR_0, struct nfsd4_compound_state *VAR_1,
  union nfsd4_op_u *VAR_2)
{
 struct nfsd4_clone *VAR_3 = &VAR_2->clone;
 struct nfsd_file *VAR_4, *VAR_5;
 __be32 VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_1, &VAR_3->cl_src_stateid, &VAR_4,
       &VAR_3->cl_dst_stateid, &VAR_5);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_0(VAR_4->nf_file, VAR_3->cl_src_pos,
   VAR_5->nf_file, VAR_3->cl_dst_pos, VAR_3->cl_count);

 FUNC_2(VAR_5);
 FUNC_2(VAR_4);
out:
 return VAR_6;
}
