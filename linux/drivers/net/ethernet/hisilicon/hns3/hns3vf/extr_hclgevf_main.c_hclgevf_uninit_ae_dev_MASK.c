
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae3_ae_dev {struct hclgevf_dev* priv; } ;
struct hclgevf_dev {int dummy; } ;


 int FUNC_0 (struct hclgevf_dev*) ;

__attribute__((used)) static void FUNC_1(struct hnae3_ae_dev *VAR_0)
{
 struct hclgevf_dev *VAR_1 = VAR_0->priv;

 FUNC_0(VAR_1);
 VAR_0->priv = ((void*)0);
}
