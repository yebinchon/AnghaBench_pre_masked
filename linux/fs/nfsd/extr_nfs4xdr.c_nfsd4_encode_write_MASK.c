
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_2__ {int data; } ;
struct nfsd4_write {TYPE_1__ wr_verifier; int wr_how_written; int wr_bytes_written; } ;
struct nfsd4_compoundres {struct xdr_stream xdr; } ;
typedef int __be32 ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;
 int * FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static __be32
FUNC_3(struct nfsd4_compoundres *VAR_2, __be32 VAR_3, struct nfsd4_write *VAR_4)
{
 struct xdr_stream *VAR_5 = &VAR_2->xdr;
 __be32 *VAR_6;

 VAR_6 = FUNC_2(VAR_5, 16);
 if (!VAR_6)
  return VAR_1;
 *VAR_6++ = FUNC_0(VAR_4->wr_bytes_written);
 *VAR_6++ = FUNC_0(VAR_4->wr_how_written);
 VAR_6 = FUNC_1(VAR_6, VAR_4->wr_verifier.data,
      VAR_0);
 return 0;
}
