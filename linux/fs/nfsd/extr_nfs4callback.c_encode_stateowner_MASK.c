
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_4__ {int len; int data; } ;
struct nfs4_stateowner {TYPE_2__ so_owner; TYPE_1__* so_client; } ;
typedef int __be32 ;
struct TYPE_3__ {int cl_clientid; } ;


 int FUNC_0 (int *,int ,int ) ;
 int * FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (struct xdr_stream*,int ) ;

__attribute__((used)) static void FUNC_3(struct xdr_stream *VAR_0, struct nfs4_stateowner *VAR_1)
{
 __be32 *VAR_2;

 VAR_2 = FUNC_2(VAR_0, 8 + 4 + VAR_1->so_owner.len);
 VAR_2 = FUNC_1(VAR_2, &VAR_1->so_client->cl_clientid, 8);
 FUNC_0(VAR_2, VAR_1->so_owner.data, VAR_1->so_owner.len);
}
