
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hclgevf_dev {int misc_vector; } ;
typedef int irqreturn_t ;
typedef enum hclgevf_evt_cause { ____Placeholder_hclgevf_evt_cause } hclgevf_evt_cause ;



 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct hclgevf_dev*,int *) ;
 int FUNC_1 (struct hclgevf_dev*,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct hclgevf_dev*) ;
 int FUNC_4 (struct hclgevf_dev*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 enum hclgevf_evt_cause VAR_4;
 struct hclgevf_dev *VAR_5 = VAR_3;
 u32 VAR_6;

 FUNC_2(&VAR_5->misc_vector, 0);
 VAR_4 = FUNC_0(VAR_5, &VAR_6);

 switch (VAR_4) {
 case 128:
  FUNC_4(VAR_5);
  break;
 case 129:
  FUNC_3(VAR_5);
  break;
 default:
  break;
 }

 if (VAR_4 != VAR_0) {
  FUNC_1(VAR_5, VAR_6);
  FUNC_2(&VAR_5->misc_vector, 1);
 }

 return VAR_1;
}
