
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct svc_fh {int fh_dentry; int fh_export; } ;
struct nfsd4_getattr {int ga_bmval; struct svc_fh* ga_fhp; } ;
struct nfsd4_compoundres {int rqstp; struct xdr_stream xdr; } ;
typedef int __be32 ;


 int FUNC_0 (struct xdr_stream*,struct svc_fh*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static __be32
FUNC_1(struct nfsd4_compoundres *VAR_0, __be32 VAR_1, struct nfsd4_getattr *VAR_2)
{
 struct svc_fh *VAR_3 = VAR_2->ga_fhp;
 struct xdr_stream *VAR_4 = &VAR_0->xdr;

 return FUNC_0(VAR_4, VAR_3, VAR_3->fh_export, VAR_3->fh_dentry,
        VAR_2->ga_bmval, VAR_0->rqstp, 0);
}
