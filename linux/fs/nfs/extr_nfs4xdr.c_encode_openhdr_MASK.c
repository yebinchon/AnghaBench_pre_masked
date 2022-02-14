
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_4__ {int uniquifier; int create_time; } ;
struct nfs_openargs {TYPE_2__ id; TYPE_1__* server; int clientid; int share_access; int seqid; } ;
typedef int __be32 ;
struct TYPE_3__ {int s_dev; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (struct xdr_stream*,int ) ;
 int FUNC_2 (struct xdr_stream*,int ) ;
 int * FUNC_3 (struct xdr_stream*,int) ;
 int * FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *,char*,int) ;

__attribute__((used)) static inline void FUNC_6(struct xdr_stream *VAR_0, const struct nfs_openargs *VAR_1)
{
 __be32 *VAR_2;




 FUNC_1(VAR_0, VAR_1->seqid);
 FUNC_2(VAR_0, VAR_1->share_access);
 VAR_2 = FUNC_3(VAR_0, 36);
 VAR_2 = FUNC_4(VAR_2, VAR_1->clientid);
 *VAR_2++ = FUNC_0(24);
 VAR_2 = FUNC_5(VAR_2, "open id:", 8);
 *VAR_2++ = FUNC_0(VAR_1->server->s_dev);
 *VAR_2++ = FUNC_0(VAR_1->id.uniquifier);
 FUNC_4(VAR_2, VAR_1->id.create_time);
}
