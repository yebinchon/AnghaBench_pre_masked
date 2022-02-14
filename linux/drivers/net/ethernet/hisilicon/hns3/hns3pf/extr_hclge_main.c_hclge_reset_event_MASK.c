
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct hnae3_handle {int dummy; } ;
struct hnae3_ae_dev {struct hclge_dev* priv; } ;
struct hclge_dev {scalar_t__ reset_level; int reset_request; TYPE_2__* pdev; scalar_t__ last_reset_time; scalar_t__ default_reset_request; int reset_timer; TYPE_1__* vport; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct hnae3_handle nic; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct hnae3_ae_dev*,scalar_t__*) ;
 int FUNC_2 (struct hclge_dev*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,scalar_t__) ;
 struct hnae3_ae_dev* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (scalar_t__,int *) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_5, struct hnae3_handle *VAR_6)
{
 struct hnae3_ae_dev *VAR_7 = FUNC_4(VAR_5);
 struct hclge_dev *VAR_8 = VAR_7->priv;
 if (!VAR_6)
  VAR_6 = &VAR_8->vport[0].nic;

 if (FUNC_7(VAR_4, (VAR_8->last_reset_time +
      VAR_0))) {
  FUNC_3(&VAR_8->reset_timer, VAR_4 + VAR_0);
  return;
 } else if (VAR_8->default_reset_request)
  VAR_8->reset_level =
   FUNC_1(VAR_7,
           &VAR_8->default_reset_request);
 else if (FUNC_6(VAR_4, (VAR_8->last_reset_time + 4 * 5 * VAR_3)))
  VAR_8->reset_level = VAR_1;

 FUNC_0(&VAR_8->pdev->dev, "received reset event, reset type is %d\n",
   VAR_8->reset_level);


 FUNC_5(VAR_8->reset_level, &VAR_8->reset_request);
 FUNC_2(VAR_8);

 if (VAR_8->reset_level < VAR_2)
  VAR_8->reset_level++;
}
