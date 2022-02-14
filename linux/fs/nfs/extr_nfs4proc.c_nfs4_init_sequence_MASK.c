
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_sequence_res {int * sr_slot; } ;
struct nfs4_sequence_args {int sa_cache_this; int sa_privileged; int * sa_slot; } ;



void FUNC_0(struct nfs4_sequence_args *VAR_0,
   struct nfs4_sequence_res *VAR_1, int VAR_2,
   int VAR_3)
{
 VAR_0->sa_slot = ((void*)0);
 VAR_0->sa_cache_this = VAR_2;
 VAR_0->sa_privileged = VAR_3;

 VAR_1->sr_slot = ((void*)0);
}
