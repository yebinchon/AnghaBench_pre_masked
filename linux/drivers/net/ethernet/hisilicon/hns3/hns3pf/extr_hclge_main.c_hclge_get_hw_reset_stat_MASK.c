
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_dev {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hclge_vport* FUNC_0 (struct hnae3_handle*) ;
 scalar_t__ FUNC_1 (int *,int ) ;

__attribute__((used)) static bool FUNC_2(struct hnae3_handle *VAR_2)
{
 struct hclge_vport *VAR_3 = FUNC_0(VAR_2);
 struct hclge_dev *VAR_4 = VAR_3->back;

 return FUNC_1(&VAR_4->hw, VAR_1) ||
        FUNC_1(&VAR_4->hw, VAR_0);
}
