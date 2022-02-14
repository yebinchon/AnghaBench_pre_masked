
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hnae3_ae_dev {struct hclge_dev* priv; } ;
struct hclge_mac {int mdio_bus; scalar_t__ phydev; } ;
struct TYPE_4__ {int vector_irq; } ;
struct TYPE_3__ {struct hclge_mac mac; } ;
struct hclge_dev {int vport_cfg_mutex; int vport_lock; TYPE_2__ misc_vector; TYPE_1__ hw; } ;


 int FUNC_0 (struct hclge_dev*) ;
 int FUNC_1 (struct hclge_dev*,int) ;
 int FUNC_2 (struct hclge_dev*,int) ;
 int FUNC_3 (struct hclge_dev*,int) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (struct hclge_dev*) ;
 int FUNC_6 (struct hclge_dev*) ;
 int FUNC_7 (struct hclge_dev*) ;
 int FUNC_8 (struct hclge_dev*) ;
 int FUNC_9 (struct hclge_dev*) ;
 int FUNC_10 (struct hclge_dev*) ;
 int FUNC_11 (struct hclge_dev*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(struct hnae3_ae_dev *VAR_0)
{
 struct hclge_dev *VAR_1 = VAR_0->priv;
 struct hclge_mac *VAR_2 = &VAR_1->hw.mac;

 FUNC_5(VAR_1);
 FUNC_8(VAR_1);

 if (VAR_2->phydev)
  FUNC_12(VAR_2->mdio_bus);

 FUNC_9(VAR_1);


 FUNC_4(&VAR_1->misc_vector, 0);
 FUNC_14(VAR_1->misc_vector.vector_irq);


 FUNC_1(VAR_1, 0);
 FUNC_2(VAR_1, 0);
 FUNC_3(VAR_1, 0);

 FUNC_0(VAR_1);
 FUNC_6(VAR_1);
 FUNC_7(VAR_1);
 FUNC_13(&VAR_1->vport_lock);
 FUNC_10(VAR_1);
 FUNC_11(VAR_1);
 FUNC_13(&VAR_1->vport_cfg_mutex);
 VAR_0->priv = ((void*)0);
}
