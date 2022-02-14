
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct nfsd4_compoundres {struct xdr_stream xdr; } ;
struct TYPE_2__ {int data; } ;
struct nfsd4_commit {TYPE_1__ co_verf; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int ,int ) ;
 int * FUNC_1 (struct xdr_stream*,int ) ;

__attribute__((used)) static __be32
FUNC_2(struct nfsd4_compoundres *VAR_2, __be32 VAR_3, struct nfsd4_commit *VAR_4)
{
 struct xdr_stream *VAR_5 = &VAR_2->xdr;
 __be32 *VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_0);
 if (!VAR_6)
  return VAR_1;
 VAR_6 = FUNC_0(VAR_6, VAR_4->co_verf.data,
      VAR_0);
 return 0;
}
