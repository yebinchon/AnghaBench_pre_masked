
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_session {int dummy; } ;
struct nfs4_sessionid {int dummy; } ;
struct net {int dummy; } ;
typedef scalar_t__ __be32 ;


 struct nfsd4_session* FUNC_0 (struct nfs4_sessionid*,struct net*) ;
 scalar_t__ FUNC_1 (struct nfsd4_session*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static struct nfsd4_session *
FUNC_2(struct nfs4_sessionid *VAR_1, struct net *VAR_2,
  __be32 *VAR_3)
{
 struct nfsd4_session *VAR_4;
 __be32 VAR_5 = VAR_0;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_4)
  goto out;
 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  VAR_4 = ((void*)0);
out:
 *VAR_3 = VAR_5;
 return VAR_4;
}
