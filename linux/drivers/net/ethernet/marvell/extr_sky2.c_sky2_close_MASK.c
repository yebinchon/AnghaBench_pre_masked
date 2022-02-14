
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sky2_port {size_t port; int tx_le; struct sky2_hw* hw; } ;
struct sky2_hw {int ports; int napi; TYPE_1__* pdev; int flags; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct sky2_hw*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct sky2_port* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sky2_port*,int ,struct net_device*,char*) ;
 int * VAR_3 ;
 int FUNC_5 (struct sky2_port*) ;
 int FUNC_6 (struct sky2_port*) ;
 int FUNC_7 (struct sky2_hw*,int ) ;
 int FUNC_8 (struct sky2_hw*,int ,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_4)
{
 struct sky2_port *VAR_5 = FUNC_3(VAR_4);
 struct sky2_hw *VAR_6 = VAR_5->hw;


 if (!VAR_5->tx_le)
  return 0;

 FUNC_4(VAR_5, VAR_2, VAR_4, "disabling interface\n");

 if (VAR_6->ports == 1) {
  FUNC_8(VAR_6, VAR_0, 0);
  FUNC_7(VAR_6, VAR_0);

  FUNC_1(&VAR_6->napi);
  FUNC_0(VAR_6->pdev->irq, VAR_6);
  VAR_6->flags &= ~VAR_1;
 } else {
  u32 VAR_7;


  VAR_7 = FUNC_7(VAR_6, VAR_0);
  VAR_7 &= ~VAR_3[VAR_5->port];
  FUNC_8(VAR_6, VAR_0, VAR_7);
  FUNC_7(VAR_6, VAR_0);

  FUNC_9(VAR_6->pdev->irq);
  FUNC_2(&VAR_6->napi);
 }

 FUNC_6(VAR_5);

 FUNC_5(VAR_5);

 return 0;
}
