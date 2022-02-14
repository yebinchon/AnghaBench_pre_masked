
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_dev {int state; } ;


 int VAR_0 ;
 struct hclge_vport* FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static bool FUNC_2(struct hnae3_handle *VAR_1)
{
 struct hclge_vport *VAR_2 = FUNC_0(VAR_1);
 struct hclge_dev *VAR_3 = VAR_2->back;

 return FUNC_1(VAR_0, &VAR_3->state);
}
