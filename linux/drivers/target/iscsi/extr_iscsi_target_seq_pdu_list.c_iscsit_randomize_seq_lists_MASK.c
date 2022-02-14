
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct iscsi_cmd {int seq_count; TYPE_1__* seq_list; } ;
struct TYPE_2__ {scalar_t__ type; int seq_send_order; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int*,int) ;
 int* FUNC_1 (int,int,int ) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(
 struct iscsi_cmd *VAR_6,
 u8 VAR_7)
{
 int VAR_8, VAR_9 = 0;
 u32 *VAR_10, VAR_11 = VAR_6->seq_count;

 if ((VAR_7 == VAR_2) || (VAR_7 == VAR_4))
  VAR_11--;
 else if (VAR_7 == VAR_3)
  VAR_11 -= 2;

 if (!VAR_11)
  return 0;

 VAR_10 = FUNC_1(VAR_11, sizeof(u32), VAR_1);
 if (!VAR_10) {
  FUNC_3("Unable to allocate memory for random array.\n");
  return -VAR_0;
 }
 FUNC_0(VAR_10, VAR_11);

 for (VAR_8 = 0; VAR_8 < VAR_6->seq_count; VAR_8++) {
  if (VAR_6->seq_list[VAR_8].type != VAR_5)
   continue;
  VAR_6->seq_list[VAR_8].seq_send_order = VAR_10[VAR_9++];
 }

 FUNC_2(VAR_10);
 return 0;
}
