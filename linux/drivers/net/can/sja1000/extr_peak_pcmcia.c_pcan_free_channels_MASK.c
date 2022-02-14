
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct pcan_pccard {int chan_count; TYPE_2__* pdev; TYPE_1__* channel; } ;
struct net_device {int name; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct net_device* netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct pcan_pccard*) ;
 int FUNC_4 (struct pcan_pccard*,int ) ;
 int FUNC_5 (struct pcan_pccard*,int ,int ) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static void FUNC_8(struct pcan_pccard *VAR_2)
{
 int VAR_3;
 u8 VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2->chan_count; VAR_3++) {
  struct net_device *VAR_5;
  char VAR_6[VAR_0];

  VAR_4 |= FUNC_0(VAR_3);

  VAR_5 = VAR_2->channel[VAR_3].netdev;
  if (!VAR_5)
   continue;

  FUNC_6(VAR_6, VAR_5->name, VAR_0);

  FUNC_7(VAR_5);

  FUNC_2(VAR_5);

  FUNC_1(&VAR_2->pdev->dev, "%s removed\n", VAR_6);
 }


 if (FUNC_3(VAR_2)) {
  FUNC_5(VAR_2, VAR_4, VAR_1);
  FUNC_4(VAR_2, 0);
 }
}
