
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd4_compoundres {int xdr; } ;
struct TYPE_2__ {int data; } ;
struct nfsd42_write_res {int wr_stable_how; TYPE_1__ wr_verifier; int wr_bytes_written; int cb_stateid; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__* FUNC_2 (scalar_t__*,int ) ;
 scalar_t__* FUNC_3 (scalar_t__*,int ,int) ;
 scalar_t__* FUNC_4 (int *,int) ;

__attribute__((used)) static __be32
FUNC_5(struct nfsd4_compoundres *VAR_3,
  struct nfsd42_write_res *VAR_4, bool VAR_5)
{
 __be32 *VAR_6;
 VAR_6 = FUNC_4(&VAR_3->xdr, 4);
 if (!VAR_6)
  return VAR_2;

 if (VAR_5)
  *VAR_6++ = FUNC_0(0);
 else {
  __be32 VAR_7;
  *VAR_6++ = FUNC_0(1);
  VAR_7 = FUNC_1(&VAR_3->xdr, &VAR_4->cb_stateid);
  if (VAR_7)
   return VAR_7;
 }
 VAR_6 = FUNC_4(&VAR_3->xdr, 8 + 4 + VAR_0);
 if (!VAR_6)
  return VAR_2;

 VAR_6 = FUNC_2(VAR_6, VAR_4->wr_bytes_written);
 *VAR_6++ = FUNC_0(VAR_4->wr_stable_how);
 VAR_6 = FUNC_3(VAR_6, VAR_4->wr_verifier.data,
        VAR_0);
 return VAR_1;
}
