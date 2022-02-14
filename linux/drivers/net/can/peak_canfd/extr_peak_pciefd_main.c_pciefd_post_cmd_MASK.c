
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {int state; } ;
struct peak_canfd_priv {TYPE_3__ can; } ;
struct TYPE_5__ {TYPE_1__* ndev; } ;
struct pciefd_can {TYPE_2__ ucan; int board; int pucan_cmd; } ;
struct TYPE_4__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (int ,struct pciefd_can*) ;
 int FUNC_1 (struct pciefd_can*) ;
 int FUNC_2 (struct pciefd_can*) ;
 int FUNC_3 (struct pciefd_can*,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct peak_canfd_priv *VAR_4)
{
 struct pciefd_can *VAR_5 = (struct pciefd_can *)VAR_4;
 u16 VAR_6 = FUNC_5(&VAR_5->pucan_cmd);

 switch (VAR_6) {
 case 128:

  if (VAR_4->can.state == VAR_1)
   break;




  FUNC_3(VAR_5, VAR_0,
        VAR_2);


  FUNC_2(VAR_5);
  FUNC_1(VAR_5);


  (void)FUNC_4(VAR_5->board, VAR_3);

  FUNC_0(VAR_5->ucan.ndev->irq, VAR_5);

  VAR_4->can.state = VAR_1;

  break;
 }

 return 0;
}
