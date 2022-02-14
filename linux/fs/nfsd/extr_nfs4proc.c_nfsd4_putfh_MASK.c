
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfsd4_putfh {int pf_fhlen; int pf_fhval; } ;
union nfsd4_op_u {struct nfsd4_putfh putfh; } ;
struct svc_rqst {int dummy; } ;
struct TYPE_4__ {int fh_base; int fh_size; } ;
struct TYPE_5__ {TYPE_1__ fh_handle; } ;
struct nfsd4_compound_state {TYPE_2__ current_fh; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct svc_rqst*,TYPE_2__*,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static __be32
FUNC_3(struct svc_rqst *VAR_1, struct nfsd4_compound_state *VAR_2,
     union nfsd4_op_u *VAR_3)
{
 struct nfsd4_putfh *VAR_4 = &VAR_3->putfh;

 FUNC_0(&VAR_2->current_fh);
 VAR_2->current_fh.fh_handle.fh_size = VAR_4->pf_fhlen;
 FUNC_2(&VAR_2->current_fh.fh_handle.fh_base, VAR_4->pf_fhval,
        VAR_4->pf_fhlen);
 return FUNC_1(VAR_1, &VAR_2->current_fh, 0, VAR_0);
}
