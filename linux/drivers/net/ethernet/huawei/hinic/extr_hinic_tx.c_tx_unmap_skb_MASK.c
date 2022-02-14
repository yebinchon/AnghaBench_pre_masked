
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct pci_dev {int dev; } ;
struct hinic_sge {int len; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; } ;
struct TYPE_2__ {int nr_frags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct hinic_sge*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct hinic_dev *VAR_1, struct sk_buff *VAR_2,
    struct hinic_sge *VAR_3)
{
 struct hinic_hwdev *VAR_4 = VAR_1->hwdev;
 struct hinic_hwif *VAR_5 = VAR_4->hwif;
 struct pci_dev *VAR_6 = VAR_5->pdev;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_3(VAR_2)->nr_frags ; VAR_7++)
  FUNC_0(&VAR_6->dev, FUNC_2(&VAR_3[VAR_7 + 1]),
          VAR_3[VAR_7 + 1].len, VAR_0);

 FUNC_1(&VAR_6->dev, FUNC_2(&VAR_3[0]), VAR_3[0].len,
    VAR_0);
}
