
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_private {int media; struct pcmcia_device* p_dev; } ;
struct pcmcia_device {int open; int dev; } ;
struct net_device {unsigned int base_addr; int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 struct smc_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_6)
{
    struct smc_private *VAR_7 = FUNC_5(VAR_6);
    struct pcmcia_device *VAR_8 = VAR_7->p_dev;
    unsigned int VAR_9 = VAR_6->base_addr;

    FUNC_2(&VAR_8->dev, "%s: smc_close(), status %4.4x.\n",
   VAR_6->name, FUNC_3(VAR_9 + VAR_0));

    FUNC_6(VAR_6);



    FUNC_0(2);
    FUNC_7(0, VAR_9 + VAR_3);
    FUNC_0(0);
    FUNC_4(0xff00, VAR_9 + VAR_4);
    FUNC_4(0xff00, VAR_9 + VAR_5);


    FUNC_0(1);
    FUNC_7(VAR_2, VAR_9 + VAR_1 );

    VAR_8->open--;
    FUNC_1(&VAR_7->media);

    return 0;
}
