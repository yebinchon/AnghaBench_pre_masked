
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae3_ae_dev {struct hclgevf_dev* priv; } ;
struct hclgevf_dev {int default_reset_request; } ;
typedef enum hnae3_reset_type { ____Placeholder_hnae3_reset_type } hnae3_reset_type ;


 int FUNC_0 (int,int *) ;

__attribute__((used)) static void FUNC_1(struct hnae3_ae_dev *VAR_0,
       enum hnae3_reset_type VAR_1)
{
 struct hclgevf_dev *VAR_2 = VAR_0->priv;

 FUNC_0(VAR_1, &VAR_2->default_reset_request);
}
