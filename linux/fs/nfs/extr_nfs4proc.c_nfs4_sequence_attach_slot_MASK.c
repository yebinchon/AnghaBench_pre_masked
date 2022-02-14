
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_slot {int privileged; } ;
struct nfs4_sequence_res {struct nfs4_slot* sr_slot; } ;
struct nfs4_sequence_args {struct nfs4_slot* sa_slot; scalar_t__ sa_privileged; } ;



__attribute__((used)) static
void FUNC_0(struct nfs4_sequence_args *VAR_0,
  struct nfs4_sequence_res *VAR_1,
  struct nfs4_slot *VAR_2)
{
 if (!VAR_2)
  return;
 VAR_2->privileged = VAR_0->sa_privileged ? 1 : 0;
 VAR_0->sa_slot = VAR_2;

 VAR_1->sr_slot = VAR_2;
}
