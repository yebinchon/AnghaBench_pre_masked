
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_3__ {int data; } ;
struct TYPE_4__ {TYPE_1__ wr_verifier; int wr_stable_how; int wr_bytes_written; } ;
struct nfsd4_copy {TYPE_2__ cp_res; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int ,int) ;
 int * FUNC_4 (struct xdr_stream*,int) ;

__attribute__((used)) static void FUNC_5(struct xdr_stream *VAR_1,
     __be32 VAR_2,
     const struct nfsd4_copy *VAR_3)
{
 __be32 *VAR_4;

 VAR_4 = FUNC_4(VAR_1, 4);
 *VAR_4++ = VAR_2;
 if (!VAR_2) {
  VAR_4 = FUNC_4(VAR_1, 4 + 8 + 4 + VAR_0);
  VAR_4 = FUNC_1(VAR_4);
  VAR_4 = FUNC_2(VAR_4, VAR_3->cp_res.wr_bytes_written);
  *VAR_4++ = FUNC_0(VAR_3->cp_res.wr_stable_how);
  VAR_4 = FUNC_3(VAR_4, VAR_3->cp_res.wr_verifier.data,
         VAR_0);
 } else {
  VAR_4 = FUNC_4(VAR_1, 8);

  VAR_4 = FUNC_2(VAR_4, 0);
 }
}
