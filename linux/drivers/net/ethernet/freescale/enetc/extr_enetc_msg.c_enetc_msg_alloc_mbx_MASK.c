
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct enetc_hw {int dummy; } ;
struct enetc_si {struct enetc_hw hw; TYPE_1__* pdev; } ;
struct enetc_pf {struct enetc_msg_swbd* rxmsg; } ;
struct enetc_msg_swbd {int dma; int size; int vaddr; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct device*,char*,int ) ;
 int FUNC_3 (struct device*,int ,int *,int ) ;
 struct enetc_pf* FUNC_4 (struct enetc_si*) ;
 int FUNC_5 (struct enetc_hw*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct enetc_si *VAR_3, int VAR_4)
{
 struct enetc_pf *VAR_5 = FUNC_4(VAR_3);
 struct device *VAR_6 = &VAR_3->pdev->dev;
 struct enetc_hw *VAR_7 = &VAR_3->hw;
 struct enetc_msg_swbd *VAR_8;
 u32 VAR_9;

 VAR_8 = &VAR_5->rxmsg[VAR_4];

 VAR_8->size = VAR_0;

 VAR_8->vaddr = FUNC_3(VAR_6, VAR_8->size, &VAR_8->dma,
     VAR_2);
 if (!VAR_8->vaddr) {
  FUNC_2(VAR_6, "msg: fail to alloc dma buffer of size: %d\n",
   VAR_8->size);
  return -VAR_1;
 }


 VAR_9 = FUNC_6(VAR_8->dma);
 FUNC_5(VAR_7, FUNC_0(VAR_4), VAR_9);
 VAR_9 = FUNC_7(VAR_8->dma);
 FUNC_5(VAR_7, FUNC_1(VAR_4), VAR_9);

 return 0;
}
