
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct fec_enet_private {unsigned long rx_align; TYPE_1__* pdev; } ;
struct bufdesc {int cbd_bufaddr; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct net_device*,char*) ;
 struct fec_enet_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static int
FUNC_8(struct net_device *VAR_3, struct bufdesc *VAR_4, struct sk_buff *VAR_5)
{
 struct fec_enet_private *VAR_6 = FUNC_6(VAR_3);
 int VAR_7;

 VAR_7 = ((unsigned long)VAR_5->data) & VAR_6->rx_align;
 if (VAR_7)
  FUNC_7(VAR_5, VAR_6->rx_align + 1 - VAR_7);

 VAR_4->cbd_bufaddr = FUNC_0(FUNC_1(&VAR_6->pdev->dev, VAR_5->data, VAR_2 - VAR_6->rx_align, VAR_0));
 if (FUNC_2(&VAR_6->pdev->dev, FUNC_3(VAR_4->cbd_bufaddr))) {
  if (FUNC_4())
   FUNC_5(VAR_3, "Rx DMA memory map failed\n");
  return -VAR_1;
 }

 return 0;
}
