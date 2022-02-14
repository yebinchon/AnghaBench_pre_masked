
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hclgevf_query_version_cmd {int firmware; } ;
struct hclgevf_hw {int dummy; } ;
struct hclgevf_desc {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct hclgevf_hw*,struct hclgevf_desc*,int) ;
 int FUNC_1 (struct hclgevf_desc*,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct hclgevf_hw *VAR_1,
            u32 *VAR_2)
{
 struct hclgevf_query_version_cmd *VAR_3;
 struct hclgevf_desc VAR_4;
 int VAR_5;

 VAR_3 = (struct hclgevf_query_version_cmd *)VAR_4.data;

 FUNC_1(&VAR_4, VAR_0, 1);
 VAR_5 = FUNC_0(VAR_1, &VAR_4, 1);
 if (!VAR_5)
  *VAR_2 = FUNC_2(VAR_3->firmware);

 return VAR_5;
}
