
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct iscsi_seq {size_t seq_send_order; } ;
struct iscsi_cmd {size_t seq_count; struct iscsi_seq* seq_list; } ;



struct iscsi_seq *FUNC_0(
 struct iscsi_cmd *VAR_0,
 u32 VAR_1)
{
 u32 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->seq_count; VAR_2++)
  if (VAR_0->seq_list[VAR_2].seq_send_order == VAR_1)
   return &VAR_0->seq_list[VAR_2];

 return ((void*)0);
}
