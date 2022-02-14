
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae3_handle {int dummy; } ;
struct hclgevf_dev {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct hclgevf_dev* FUNC_1 (struct hnae3_handle*) ;
 int FUNC_2 (struct hclgevf_dev*) ;
 int FUNC_3 (struct hnae3_handle*) ;
 int FUNC_4 (struct hclgevf_dev*) ;

__attribute__((used)) static int FUNC_5(struct hnae3_handle *VAR_1)
{
 struct hclgevf_dev *VAR_2 = FUNC_1(VAR_1);

 FUNC_3(VAR_1);

 FUNC_2(VAR_2);

 FUNC_4(VAR_2);

 FUNC_0(VAR_0, &VAR_2->state);

 return 0;
}
