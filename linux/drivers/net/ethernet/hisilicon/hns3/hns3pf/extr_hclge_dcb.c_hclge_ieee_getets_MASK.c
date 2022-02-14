
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee_ets {int dummy; } ;
struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_dev {int dummy; } ;


 struct hclge_vport* FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (struct hclge_dev*,struct ieee_ets*) ;

__attribute__((used)) static int FUNC_2(struct hnae3_handle *VAR_0, struct ieee_ets *VAR_1)
{
 struct hclge_vport *VAR_2 = FUNC_0(VAR_0);
 struct hclge_dev *VAR_3 = VAR_2->back;

 FUNC_1(VAR_3, VAR_1);

 return 0;
}
