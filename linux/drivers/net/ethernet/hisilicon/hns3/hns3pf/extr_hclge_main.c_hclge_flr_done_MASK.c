
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae3_ae_dev {struct hclge_dev* priv; } ;
struct hclge_dev {int flr_state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct hnae3_ae_dev *VAR_1)
{
 struct hclge_dev *VAR_2 = VAR_1->priv;

 FUNC_0(VAR_0, &VAR_2->flr_state);
}
