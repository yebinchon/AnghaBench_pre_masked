
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_private {int media; scalar_t__ packets_waiting; int * saved_skb; struct pcmcia_device* p_dev; } ;
struct pcmcia_device {int open; int dev; } ;
struct net_device {scalar_t__ base_addr; int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct pcmcia_device*) ;
 int FUNC_1 (int *,char*,int ,struct net_device*,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct smc_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct pcmcia_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_5)
{
    struct smc_private *VAR_6 = FUNC_5(VAR_5);
    struct pcmcia_device *VAR_7 = VAR_6->p_dev;

    FUNC_1(&VAR_7->dev, "%s: smc_open(%p), ID/Window %4.4x.\n",
   VAR_5->name, VAR_5, FUNC_2(VAR_5->base_addr + VAR_0));





    if (!FUNC_7(VAR_7))
 return -VAR_1;

    if (FUNC_0(VAR_7) < 0) {
 FUNC_4(VAR_5, "Yikes!  Bad chip signature!\n");
 return -VAR_1;
    }
    VAR_7->open++;

    FUNC_6(VAR_5);
    VAR_6->saved_skb = ((void*)0);
    VAR_6->packets_waiting = 0;

    FUNC_9(VAR_5);
    FUNC_10(&VAR_6->media, VAR_4, 0);
    FUNC_3(&VAR_6->media, VAR_3 + VAR_2);

    return 0;
}
