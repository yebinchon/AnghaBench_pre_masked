
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int state; } ;
struct peak_canfd_priv {TYPE_2__ can; } ;
struct TYPE_4__ {TYPE_3__* ndev; } ;
struct pciefd_can {TYPE_1__ ucan; int pucan_cmd; } ;
struct TYPE_6__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;


 int FUNC_0 (struct pciefd_can*) ;
 int FUNC_1 (struct pciefd_can*) ;
 int FUNC_2 (struct pciefd_can*,int,int ) ;
 int VAR_12 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int ,struct pciefd_can*) ;

__attribute__((used)) static int FUNC_5(struct peak_canfd_priv *VAR_13)
{
 struct pciefd_can *VAR_14 = (struct pciefd_can *)VAR_13;
 u16 VAR_15 = FUNC_3(&VAR_14->pucan_cmd);
 int VAR_16;


 switch (VAR_15) {
 case 128:
 case 129:

  if (VAR_13->can.state == VAR_5)
   break;


  VAR_16 = FUNC_4(VAR_14->ucan.ndev->irq,
      VAR_12,
      VAR_6,
      VAR_7,
      VAR_14);
  if (VAR_16)
   return VAR_16;


  FUNC_1(VAR_14);


  FUNC_2(VAR_14, (VAR_2) << 8 |
        VAR_1,
        VAR_11);


  FUNC_2(VAR_14, VAR_3,
        VAR_9);


  FUNC_2(VAR_14, !VAR_4,
        VAR_8);


  FUNC_0(VAR_14);


  FUNC_2(VAR_14, VAR_0,
        VAR_10);


  break;
 default:
  break;
 }

 return 0;
}
