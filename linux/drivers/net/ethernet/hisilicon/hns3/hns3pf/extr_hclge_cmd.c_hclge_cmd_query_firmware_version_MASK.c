
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hclge_query_version_cmd {int firmware; } ;
struct hclge_hw {int dummy; } ;
struct hclge_desc {scalar_t__ data; } ;
typedef enum hclge_cmd_status { ____Placeholder_hclge_cmd_status } hclge_cmd_status ;


 int VAR_0 ;
 int FUNC_0 (struct hclge_hw*,struct hclge_desc*,int) ;
 int FUNC_1 (struct hclge_desc*,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static enum hclge_cmd_status FUNC_3(
  struct hclge_hw *VAR_1, u32 *VAR_2)
{
 struct hclge_query_version_cmd *VAR_3;
 struct hclge_desc VAR_4;
 int VAR_5;

 FUNC_1(&VAR_4, VAR_0, 1);
 VAR_3 = (struct hclge_query_version_cmd *)VAR_4.data;

 VAR_5 = FUNC_0(VAR_1, &VAR_4, 1);
 if (!VAR_5)
  *VAR_2 = FUNC_2(VAR_3->firmware);

 return VAR_5;
}
