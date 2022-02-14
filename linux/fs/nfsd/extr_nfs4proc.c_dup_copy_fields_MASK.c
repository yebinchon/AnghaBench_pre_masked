
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_copy {int cp_stateid; void* nf_src; void* nf_dst; int cp_clp; int fh; int cp_res; int cp_synchronous; int cp_count; int cp_dst_pos; int cp_src_pos; } ;


 int FUNC_0 (int *,int *,int) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(struct nfsd4_copy *VAR_0, struct nfsd4_copy *VAR_1)
{
 VAR_1->cp_src_pos = VAR_0->cp_src_pos;
 VAR_1->cp_dst_pos = VAR_0->cp_dst_pos;
 VAR_1->cp_count = VAR_0->cp_count;
 VAR_1->cp_synchronous = VAR_0->cp_synchronous;
 FUNC_0(&VAR_1->cp_res, &VAR_0->cp_res, sizeof(VAR_0->cp_res));
 FUNC_0(&VAR_1->fh, &VAR_0->fh, sizeof(VAR_0->fh));
 VAR_1->cp_clp = VAR_0->cp_clp;
 VAR_1->nf_dst = FUNC_1(VAR_0->nf_dst);
 VAR_1->nf_src = FUNC_1(VAR_0->nf_src);
 FUNC_0(&VAR_1->cp_stateid, &VAR_0->cp_stateid, sizeof(VAR_0->cp_stateid));
}
