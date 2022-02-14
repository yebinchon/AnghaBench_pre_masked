
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlb_client_info {scalar_t__ vlan_id; int * slave; scalar_t__ assigned; void* used_prev; void* used_next; } ;


 void* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct rlb_client_info *VAR_1)
{
 VAR_1->used_next = VAR_0;
 VAR_1->used_prev = VAR_0;
 VAR_1->assigned = 0;
 VAR_1->slave = ((void*)0);
 VAR_1->vlan_id = 0;
}
