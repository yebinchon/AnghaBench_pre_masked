
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_ol_stateid {int dummy; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (struct nfs4_ol_stateid*,int) ;
 scalar_t__ FUNC_1 (struct nfs4_ol_stateid*) ;

__attribute__((used)) static __be32
FUNC_2(struct nfs4_ol_stateid *VAR_0, int VAR_1)
{
 __be32 VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  return VAR_2;
 return FUNC_0(VAR_0, VAR_1);
}
