
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_stream {int dummy; } ;
struct nfs4_cb_compound_hdr {void* nops; void* status; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_4(struct xdr_stream *VAR_1,
      struct nfs4_cb_compound_hdr *VAR_2)
{
 u32 VAR_3;
 __be32 *VAR_4;

 VAR_4 = FUNC_3(VAR_1, 4 + 4);
 if (FUNC_2(VAR_4 == ((void*)0)))
  goto out_overflow;
 VAR_2->status = FUNC_1(VAR_4++);

 VAR_3 = FUNC_1(VAR_4++);
 VAR_4 = FUNC_3(VAR_1, VAR_3 + 4);
 if (FUNC_2(VAR_4 == ((void*)0)))
  goto out_overflow;
 VAR_4 += FUNC_0(VAR_3);
 VAR_2->nops = FUNC_1(VAR_4);
 return 0;
out_overflow:
 return -VAR_0;
}
