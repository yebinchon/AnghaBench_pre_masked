
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_2__ {int data; } ;
struct nfsd4_session {TYPE_1__ se_sessionid; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int * FUNC_1 (struct xdr_stream*,int ) ;

__attribute__((used)) static void FUNC_2(struct xdr_stream *VAR_1,
         const struct nfsd4_session *VAR_2)
{
 __be32 *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 FUNC_0(VAR_3, VAR_2->se_sessionid.data,
     VAR_0);
}
