
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct iscsi_cmd {size_t pdu_count; TYPE_1__* pdu_list; } ;
struct TYPE_2__ {size_t seq_no; size_t pdu_send_order; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t*,size_t) ;
 size_t* FUNC_1 (size_t,int,int ) ;
 int FUNC_2 (size_t*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(
 struct iscsi_cmd *VAR_2,
 u8 VAR_3)
{
 int VAR_4 = 0;
 u32 *VAR_5, VAR_6, VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_2->pdu_count; VAR_6++) {
redo:
  if (VAR_2->pdu_list[VAR_6].seq_no == VAR_8) {
   VAR_7++;
   continue;
  }
  VAR_5 = FUNC_1(VAR_7, sizeof(u32), VAR_1);
  if (!VAR_5) {
   FUNC_3("Unable to allocate memory"
    " for random array.\n");
   return -VAR_0;
  }
  FUNC_0(VAR_5, VAR_7);

  for (VAR_4 = 0; VAR_4 < VAR_7; VAR_4++)
   VAR_2->pdu_list[VAR_9+VAR_4].pdu_send_order = VAR_5[VAR_4];

  FUNC_2(VAR_5);

  VAR_9 += VAR_7;
  VAR_7 = 0;
  VAR_8++;
  goto redo;
 }

 if (VAR_7) {
  VAR_5 = FUNC_1(VAR_7, sizeof(u32), VAR_1);
  if (!VAR_5) {
   FUNC_3("Unable to allocate memory for"
    " random array.\n");
   return -VAR_0;
  }
  FUNC_0(VAR_5, VAR_7);

  for (VAR_4 = 0; VAR_4 < VAR_7; VAR_4++)
   VAR_2->pdu_list[VAR_9+VAR_4].pdu_send_order = VAR_5[VAR_4];

  FUNC_2(VAR_5);
 }

 return 0;
}
