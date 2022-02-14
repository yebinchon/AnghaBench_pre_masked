
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct iscsi_cmd {size_t pdu_count; TYPE_1__* pdu_list; } ;
struct TYPE_2__ {size_t seq_no; scalar_t__ pdu_send_order; } ;



__attribute__((used)) static void FUNC_0(
 struct iscsi_cmd *VAR_0,
 u8 VAR_1)
{
 u32 VAR_2, VAR_3 = 0, VAR_4 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->pdu_count; VAR_2++) {
redo:
  if (VAR_0->pdu_list[VAR_2].seq_no == VAR_4) {
   VAR_0->pdu_list[VAR_2].pdu_send_order = VAR_3++;
   continue;
  }
  VAR_4++;
  VAR_3 = 0;
  goto redo;
 }
}
