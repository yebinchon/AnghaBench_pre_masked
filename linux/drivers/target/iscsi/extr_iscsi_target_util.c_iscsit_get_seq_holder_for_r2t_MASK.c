
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct iscsi_seq {scalar_t__ type; scalar_t__ seq_send_order; } ;
struct iscsi_cmd {size_t seq_count; scalar_t__ seq_send_order; struct iscsi_seq* seq_list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;

struct iscsi_seq *FUNC_1(struct iscsi_cmd *VAR_1)
{
 u32 VAR_2;

 if (!VAR_1->seq_list) {
  FUNC_0("struct iscsi_cmd->seq_list is NULL!\n");
  return ((void*)0);
 }

 for (VAR_2 = 0; VAR_2 < VAR_1->seq_count; VAR_2++) {
  if (VAR_1->seq_list[VAR_2].type != VAR_0)
   continue;
  if (VAR_1->seq_list[VAR_2].seq_send_order == VAR_1->seq_send_order) {
   VAR_1->seq_send_order++;
   return &VAR_1->seq_list[VAR_2];
  }
 }

 return ((void*)0);
}
