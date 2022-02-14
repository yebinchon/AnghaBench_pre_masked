
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nfsd3_getaclres* rq_resp; } ;
struct nfsd3_getaclres {int acl_default; int acl_access; int fh; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct svc_rqst *VAR_0)
{
 struct nfsd3_getaclres *VAR_1 = VAR_0->rq_resp;

 FUNC_0(&VAR_1->fh);
 FUNC_1(VAR_1->acl_access);
 FUNC_1(VAR_1->acl_default);
}
