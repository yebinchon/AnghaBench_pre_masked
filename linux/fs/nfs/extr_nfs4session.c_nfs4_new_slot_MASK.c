
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct nfs4_slot_table {int dummy; } ;
struct nfs4_slot {void* seq_nr_last_acked; void* seq_nr_highest_sent; void* seq_nr; void* slot_nr; struct nfs4_slot_table* table; } ;
typedef int gfp_t ;


 struct nfs4_slot* FUNC_0 (int,int ) ;

__attribute__((used)) static struct nfs4_slot *FUNC_1(struct nfs4_slot_table *VAR_0,
  u32 VAR_1, u32 VAR_2, gfp_t VAR_3)
{
 struct nfs4_slot *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_3);
 if (VAR_4) {
  VAR_4->table = VAR_0;
  VAR_4->slot_nr = VAR_1;
  VAR_4->seq_nr = VAR_2;
  VAR_4->seq_nr_highest_sent = VAR_2;
  VAR_4->seq_nr_last_acked = VAR_2 - 1;
 }
 return VAR_4;
}
