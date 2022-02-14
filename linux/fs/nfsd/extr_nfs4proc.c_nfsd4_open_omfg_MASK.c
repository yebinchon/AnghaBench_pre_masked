
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct nfsd4_open {int op_xdr_error; } ;
struct TYPE_2__ {struct nfsd4_open open; } ;
struct nfsd4_op {TYPE_1__ u; int status; } ;
struct nfsd4_compound_state {int dummy; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (struct nfsd4_compound_state*) ;
 int FUNC_1 (struct svc_rqst*,struct nfsd4_compound_state*,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static __be32 FUNC_4(struct svc_rqst *VAR_0, struct nfsd4_compound_state *VAR_1, struct nfsd4_op *VAR_2)
{
 struct nfsd4_open *VAR_3 = &VAR_2->u.open;

 if (!FUNC_3(FUNC_2(VAR_2->status)))
  return VAR_2->status;
 if (FUNC_0(VAR_1))
  return VAR_2->status;
 VAR_3->op_xdr_error = VAR_2->status;
 return FUNC_1(VAR_0, VAR_1, &VAR_2->u);
}
