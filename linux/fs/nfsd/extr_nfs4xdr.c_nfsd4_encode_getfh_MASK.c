
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_2__ {unsigned int fh_size; int fh_base; } ;
struct svc_fh {TYPE_1__ fh_handle; } ;
struct nfsd4_compoundres {struct xdr_stream xdr; } ;
typedef int __be32 ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *,unsigned int) ;
 int * FUNC_1 (struct xdr_stream*,unsigned int) ;

__attribute__((used)) static __be32
FUNC_2(struct nfsd4_compoundres *VAR_1, __be32 VAR_2, struct svc_fh **VAR_3)
{
 struct xdr_stream *VAR_4 = &VAR_1->xdr;
 struct svc_fh *VAR_5 = *VAR_3;
 unsigned int VAR_6;
 __be32 *VAR_7;

 VAR_6 = VAR_5->fh_handle.fh_size;
 VAR_7 = FUNC_1(VAR_4, VAR_6 + 4);
 if (!VAR_7)
  return VAR_0;
 VAR_7 = FUNC_0(VAR_7, &VAR_5->fh_handle.fh_base, VAR_6);
 return 0;
}
