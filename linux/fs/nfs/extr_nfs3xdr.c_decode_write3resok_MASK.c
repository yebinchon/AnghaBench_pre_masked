
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct nfs_pgio_res {int count; TYPE_1__* verf; } ;
typedef int __be32 ;
struct TYPE_2__ {void* committed; int verifier; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct xdr_stream*,int *) ;
 int FUNC_2 (char*,void*) ;
 scalar_t__ FUNC_3 (int) ;
 int * FUNC_4 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_5(struct xdr_stream *VAR_2,
         struct nfs_pgio_res *VAR_3)
{
 __be32 *VAR_4;

 VAR_4 = FUNC_4(VAR_2, 4 + 4);
 if (FUNC_3(!VAR_4))
  return -VAR_0;
 VAR_3->count = FUNC_0(VAR_4++);
 VAR_3->verf->committed = FUNC_0(VAR_4++);
 if (FUNC_3(VAR_3->verf->committed > VAR_1))
  goto out_badvalue;
 if (FUNC_1(VAR_2, &VAR_3->verf->verifier))
  return -VAR_0;
 return VAR_3->count;
out_badvalue:
 FUNC_2("NFS: bad stable_how value: %u\n", VAR_3->verf->committed);
 return -VAR_0;
}
