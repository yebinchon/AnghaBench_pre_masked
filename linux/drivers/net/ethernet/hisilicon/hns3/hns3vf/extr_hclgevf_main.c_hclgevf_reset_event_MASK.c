
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct hnae3_handle {int dummy; } ;
struct hnae3_ae_dev {struct hclgevf_dev* priv; } ;
struct hclgevf_dev {int last_reset_time; int reset_state; int reset_level; scalar_t__ default_reset_request; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct hclgevf_dev*,scalar_t__*) ;
 int FUNC_2 (struct hclgevf_dev*) ;
 int VAR_2 ;
 struct hnae3_ae_dev* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_3,
    struct hnae3_handle *VAR_4)
{
 struct hnae3_ae_dev *VAR_5 = FUNC_3(VAR_3);
 struct hclgevf_dev *VAR_6 = VAR_5->priv;

 FUNC_0(&VAR_6->pdev->dev, "received reset request from VF enet\n");

 if (VAR_6->default_reset_request)
  VAR_6->reset_level =
   FUNC_1(VAR_6,
      &VAR_6->default_reset_request);
 else
  VAR_6->reset_level = VAR_1;


 FUNC_4(VAR_0, &VAR_6->reset_state);
 FUNC_2(VAR_6);

 VAR_6->last_reset_time = VAR_2;
}
