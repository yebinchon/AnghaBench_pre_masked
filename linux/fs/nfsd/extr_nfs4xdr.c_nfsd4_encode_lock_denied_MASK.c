
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct xdr_stream {int dummy; } ;
struct xdr_netobj {int * data; scalar_t__ len; } ;
struct nfsd4_lock_denied {int ld_clientid; int ld_type; int ld_length; int ld_start; struct xdr_netobj ld_owner; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *,int *,scalar_t__) ;
 int * FUNC_5 (int *,int *,int) ;
 int * FUNC_6 (struct xdr_stream*,scalar_t__) ;

__attribute__((used)) static __be32
FUNC_7(struct xdr_stream *VAR_2, struct nfsd4_lock_denied *VAR_3)
{
 struct xdr_netobj *VAR_4 = &VAR_3->ld_owner;
 __be32 *VAR_5;

again:
 VAR_5 = FUNC_6(VAR_2, 32 + FUNC_0(VAR_4->len));
 if (!VAR_5) {




  if (VAR_4->len) {
   FUNC_2(VAR_4->data);
   VAR_4->len = 0;
   VAR_4->data = ((void*)0);
   goto again;
  }
  return VAR_1;
 }
 VAR_5 = FUNC_3(VAR_5, VAR_3->ld_start);
 VAR_5 = FUNC_3(VAR_5, VAR_3->ld_length);
 *VAR_5++ = FUNC_1(VAR_3->ld_type);
 if (VAR_4->len) {
  VAR_5 = FUNC_5(VAR_5, &VAR_3->ld_clientid, 8);
  VAR_5 = FUNC_4(VAR_5, VAR_4->data, VAR_4->len);
  FUNC_2(VAR_4->data);
 } else {
  VAR_5 = FUNC_3(VAR_5, (u64)0);
  *VAR_5++ = FUNC_1(0);
 }
 return VAR_0;
}
