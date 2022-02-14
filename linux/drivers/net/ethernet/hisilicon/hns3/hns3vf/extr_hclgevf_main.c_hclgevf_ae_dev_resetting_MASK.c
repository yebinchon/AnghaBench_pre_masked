
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae3_handle {int dummy; } ;
struct hclgevf_dev {int state; } ;


 int VAR_0 ;
 struct hclgevf_dev* FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static bool FUNC_2(struct hnae3_handle *VAR_1)
{
 struct hclgevf_dev *VAR_2 = FUNC_0(VAR_1);

 return FUNC_1(VAR_0, &VAR_2->state);
}
