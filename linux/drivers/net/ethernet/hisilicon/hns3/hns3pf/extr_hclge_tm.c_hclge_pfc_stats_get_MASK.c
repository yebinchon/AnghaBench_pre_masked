
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef size_t u32 ;
struct hclge_pfc_stats_cmd {int * pkt_num; } ;
struct hclge_dev {int hw; } ;
struct hclge_desc {scalar_t__ data; int flag; } ;
typedef enum hclge_opcode_type { ____Placeholder_hclge_opcode_type } hclge_opcode_type ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct hclge_dev *VAR_7,
          enum hclge_opcode_type VAR_8, u64 *VAR_9)
{
 struct hclge_desc VAR_10[VAR_6];
 int VAR_11, VAR_12, VAR_13;

 if (!(VAR_8 == VAR_3 ||
       VAR_8 == VAR_4))
  return -VAR_0;

 for (VAR_12 = 0; VAR_12 < VAR_6 - 1; VAR_12++) {
  FUNC_2(&VAR_10[VAR_12], VAR_8, 1);
  VAR_10[VAR_12].flag |= FUNC_0(VAR_1);
 }

 FUNC_2(&VAR_10[VAR_12], VAR_8, 1);

 VAR_11 = FUNC_1(&VAR_7->hw, VAR_10, VAR_6);
 if (VAR_11)
  return VAR_11;

 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  struct hclge_pfc_stats_cmd *VAR_14 =
    (struct hclge_pfc_stats_cmd *)VAR_10[VAR_12].data;

  for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
   u32 VAR_15 = VAR_12 * VAR_6 + VAR_13;

   if (VAR_15 < VAR_2)
    VAR_9[VAR_15] =
     FUNC_3(VAR_14->pkt_num[VAR_13]);
  }
 }
 return 0;
}
