
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct enetc_hw {int dummy; } ;
struct enetc_si {TYPE_1__* pdev; struct enetc_hw hw; } ;
struct enetc_pf {struct enetc_msg_swbd* rxmsg; } ;
struct enetc_msg_swbd {int dma; int vaddr; int size; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 struct enetc_pf* FUNC_3 (struct enetc_si*) ;
 int FUNC_4 (struct enetc_hw*,int ,int ) ;
 int FUNC_5 (struct enetc_msg_swbd*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct enetc_si *VAR_0, int VAR_1)
{
 struct enetc_pf *VAR_2 = FUNC_3(VAR_0);
 struct enetc_hw *VAR_3 = &VAR_0->hw;
 struct enetc_msg_swbd *VAR_4;

 VAR_4 = &VAR_2->rxmsg[VAR_1];
 FUNC_2(&VAR_0->pdev->dev, VAR_4->size, VAR_4->vaddr, VAR_4->dma);
 FUNC_5(VAR_4, 0, sizeof(*VAR_4));

 FUNC_4(VAR_3, FUNC_0(VAR_1), 0);
 FUNC_4(VAR_3, FUNC_1(VAR_1), 0);
}
