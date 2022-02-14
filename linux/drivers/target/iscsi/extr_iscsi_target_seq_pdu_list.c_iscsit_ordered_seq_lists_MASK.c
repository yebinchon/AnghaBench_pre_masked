
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct iscsi_cmd {size_t seq_count; TYPE_1__* seq_list; } ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ seq_send_order; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(
 struct iscsi_cmd *VAR_1,
 u8 VAR_2)
{
 u32 VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->seq_count; VAR_3++) {
  if (VAR_1->seq_list[VAR_3].type != VAR_0)
   continue;
  VAR_1->seq_list[VAR_3].seq_send_order = VAR_4++;
 }
}
