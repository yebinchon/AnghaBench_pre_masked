
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd4_sessionid {scalar_t__ reserved; scalar_t__ sequence; int clientid; } ;
struct TYPE_2__ {scalar_t__ data; } ;
struct nfsd4_session {TYPE_1__ se_sessionid; struct nfs4_client* se_client; } ;
struct nfs4_client {int cl_clientid; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct nfsd4_session *VAR_1)
{
 struct nfs4_client *VAR_2 = VAR_1->se_client;
 struct nfsd4_sessionid *VAR_3;

 VAR_3 = (struct nfsd4_sessionid *)VAR_1->se_sessionid.data;
 VAR_3->clientid = VAR_2->cl_clientid;
 VAR_3->sequence = VAR_0++;
 VAR_3->reserved = 0;
}
