
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfsd4_compound_state {int dummy; } ;
struct nfs4_stateowner {int so_seqid; } ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nfsd4_compound_state*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static __be32 FUNC_1(struct nfsd4_compound_state *VAR_3, struct nfs4_stateowner *VAR_4, u32 VAR_5)
{
 if (FUNC_0(VAR_3))
  return VAR_0;
 if (VAR_5 == VAR_4->so_seqid - 1)
  return VAR_2;
 if (VAR_5 == VAR_4->so_seqid)
  return VAR_0;
 return VAR_1;
}
