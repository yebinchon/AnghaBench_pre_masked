
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_compound_state {struct nfs4_stateowner* replay_owner; } ;
struct nfs4_stateowner {int so_seqid; scalar_t__ so_is_open_owner; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (struct nfsd4_compound_state*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct nfs4_stateowner*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct nfsd4_compound_state *VAR_1, __be32 VAR_2)
{
 struct nfs4_stateowner *VAR_3 = VAR_1->replay_owner;

 if (VAR_2 == VAR_0)
  return;

 if (!FUNC_4(FUNC_1(VAR_2))) {
  FUNC_0(VAR_1);
  return;
 }
 if (!VAR_3)
  return;
 if (VAR_3->so_is_open_owner)
  FUNC_3(FUNC_2(VAR_3));
 VAR_3->so_seqid++;
 return;
}
