
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcnet_dev {int link_status; int watchdog; int eth_phy; int phy_id; struct pcmcia_device* p_dev; } ;
struct pcmcia_device {int open; int dev; } ;
struct net_device {unsigned int base_addr; int name; int irq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct pcnet_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,char*,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct net_device*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (struct pcmcia_device*) ;
 int FUNC_6 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_7)
{
    int VAR_8;
    struct pcnet_dev *VAR_9 = FUNC_0(VAR_7);
    struct pcmcia_device *VAR_10 = VAR_9->p_dev;
    unsigned int VAR_11 = VAR_7->base_addr;

    FUNC_1(&VAR_10->dev, "pcnet_open('%s')\n", VAR_7->name);

    if (!FUNC_5(VAR_10))
 return -VAR_1;

    FUNC_7(VAR_7);

    FUNC_4(0xFF, VAR_11 + VAR_0);
    VAR_8 = FUNC_6(VAR_7->irq, VAR_4, VAR_3, VAR_7->name, VAR_7);
    if (VAR_8)
     return VAR_8;

    VAR_10->open++;

    VAR_9->phy_id = VAR_9->eth_phy;
    VAR_9->link_status = 0x00;
    FUNC_8(&VAR_9->watchdog, VAR_5, 0);
    FUNC_3(&VAR_9->watchdog, VAR_6 + VAR_2);

    return FUNC_2(VAR_7);
}
