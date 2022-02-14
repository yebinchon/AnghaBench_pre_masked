
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct TYPE_2__ {int ia_valid; scalar_t__ ia_size; } ;
struct nfsd4_open {int op_truncate; scalar_t__ op_claim_type; TYPE_1__ op_iattr; int op_cinfo; } ;
struct nfsd4_compound_state {struct svc_fh current_fh; } ;
struct nfsd4_change_info {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct svc_rqst*,struct svc_fh*,struct nfsd4_open*,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct nfsd4_compound_state*,struct nfsd4_open*,struct svc_fh*) ;

__attribute__((used)) static __be32
FUNC_3(struct svc_rqst *VAR_3, struct nfsd4_compound_state *VAR_4, struct nfsd4_open *VAR_5)
{
 struct svc_fh *VAR_6 = &VAR_4->current_fh;
 __be32 VAR_7;
 int VAR_8 = 0;





 FUNC_1(&VAR_5->op_cinfo, 0, sizeof(struct nfsd4_change_info));

 FUNC_2(VAR_4, VAR_5, VAR_6);

 VAR_5->op_truncate = (VAR_5->op_iattr.ia_valid & VAR_0) &&
  (VAR_5->op_iattr.ia_size == 0);
 if (VAR_5->op_claim_type == VAR_1)
  VAR_8 = VAR_2;

 VAR_7 = FUNC_0(VAR_3, VAR_6, VAR_5, VAR_8);

 return VAR_7;
}
