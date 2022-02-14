
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs_lowner {int s_dev; int id; int clientid; } ;
typedef int __be32 ;


 void* FUNC_0 (int) ;
 int * FUNC_1 (struct xdr_stream*,int) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,char*,int) ;

__attribute__((used)) static void FUNC_4(struct xdr_stream *VAR_0, const struct nfs_lowner *VAR_1)
{
 __be32 *VAR_2;

 VAR_2 = FUNC_1(VAR_0, 32);
 VAR_2 = FUNC_2(VAR_2, VAR_1->clientid);
 *VAR_2++ = FUNC_0(20);
 VAR_2 = FUNC_3(VAR_2, "lock id:", 8);
 *VAR_2++ = FUNC_0(VAR_1->s_dev);
 FUNC_2(VAR_2, VAR_1->id);
}
