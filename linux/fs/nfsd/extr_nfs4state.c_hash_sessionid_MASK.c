
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_sessionid {int sequence; } ;
struct nfs4_sessionid {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(struct nfs4_sessionid *VAR_1)
{
 struct nfsd4_sessionid *VAR_2 = (struct nfsd4_sessionid *)VAR_1;

 return VAR_2->sequence % VAR_0;
}
