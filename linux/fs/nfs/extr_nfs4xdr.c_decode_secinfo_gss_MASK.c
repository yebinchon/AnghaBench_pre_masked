
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct xdr_stream {int dummy; } ;
struct TYPE_3__ {int len; int data; } ;
struct TYPE_4__ {void* service; void* qop; TYPE_1__ oid; } ;
struct nfs4_secinfo4 {TYPE_2__ flavor_info; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int) ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_4(struct xdr_stream *VAR_3,
         struct nfs4_secinfo4 *VAR_4)
{
 u32 VAR_5;
 __be32 *VAR_6;

 VAR_6 = FUNC_3(VAR_3, 4);
 if (FUNC_2(!VAR_6))
  return -VAR_1;
 VAR_5 = FUNC_0(VAR_6);
 if (VAR_5 > VAR_2)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_3, VAR_5);
 if (FUNC_2(!VAR_6))
  return -VAR_1;
 FUNC_1(VAR_4->flavor_info.oid.data, VAR_6, VAR_5);
 VAR_4->flavor_info.oid.len = VAR_5;

 VAR_6 = FUNC_3(VAR_3, 8);
 if (FUNC_2(!VAR_6))
  return -VAR_1;
 VAR_4->flavor_info.qop = FUNC_0(VAR_6++);
 VAR_4->flavor_info.service = FUNC_0(VAR_6);

 return 0;
}
