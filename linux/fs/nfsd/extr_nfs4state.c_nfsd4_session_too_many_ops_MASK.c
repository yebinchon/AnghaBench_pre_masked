
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {struct nfsd4_compoundargs* rq_argp; } ;
struct TYPE_2__ {scalar_t__ maxops; } ;
struct nfsd4_session {TYPE_1__ se_fchannel; } ;
struct nfsd4_compoundargs {scalar_t__ opcnt; } ;



__attribute__((used)) static bool FUNC_0(struct svc_rqst *VAR_0, struct nfsd4_session *VAR_1)
{
 struct nfsd4_compoundargs *VAR_2 = VAR_0->rq_argp;

 return VAR_2->opcnt > VAR_1->se_fchannel.maxops;
}
