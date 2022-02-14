
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd4_compound_state {struct nfs4_stateowner* replay_owner; } ;
struct TYPE_2__ {int rp_mutex; } ;
struct nfs4_stateowner {TYPE_1__ so_replay; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nfs4_stateowner*) ;

void FUNC_2(struct nfsd4_compound_state *VAR_0)
{
 struct nfs4_stateowner *VAR_1 = VAR_0->replay_owner;

 if (VAR_1 != ((void*)0)) {
  VAR_0->replay_owner = ((void*)0);
  FUNC_0(&VAR_1->so_replay.rp_mutex);
  FUNC_1(VAR_1);
 }
}
