
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct pcmcia_device {int dev; } ;
struct net_device {int base_addr; int dev_addr; } ;
struct TYPE_5__ {void* tx_free_frames; struct pcmcia_device link; } ;
typedef TYPE_1__ mace_private ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 TYPE_1__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pcmcia_device*,int ,int*) ;
 int FUNC_5 (struct pcmcia_device*,int ,int) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_7)
{
  mace_private *VAR_8 = FUNC_3(VAR_7);
  VAR_8->tx_free_frames=VAR_0;


  FUNC_1(VAR_8, VAR_7->base_addr, VAR_7->dev_addr);
  FUNC_2(VAR_8, VAR_7->base_addr, VAR_5, VAR_6);


  FUNC_6(VAR_7);
}
