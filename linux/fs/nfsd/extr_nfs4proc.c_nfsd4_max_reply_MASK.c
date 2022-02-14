
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct nfsd4_op {scalar_t__ opnum; scalar_t__ status; } ;
typedef int __be32 ;
struct TYPE_2__ {int (* op_rsize_bop ) (struct svc_rqst*,struct nfsd4_op*) ;} ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct nfsd4_op*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct svc_rqst*,struct nfsd4_op*) ;

int FUNC_3(struct svc_rqst *VAR_3, struct nfsd4_op *VAR_4)
{
 if (VAR_4->opnum == VAR_0 || VAR_4->status == VAR_1)
  return VAR_2 * sizeof(__be32);

 FUNC_0(FUNC_1(VAR_4)->op_rsize_bop == ((void*)0));
 return FUNC_1(VAR_4)->op_rsize_bop(VAR_3, VAR_4);
}
