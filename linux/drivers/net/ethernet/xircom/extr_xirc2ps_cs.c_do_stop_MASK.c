
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int open; int dev; } ;
struct net_device {unsigned int base_addr; } ;
struct local_info {struct pcmcia_device* p_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,char*,struct net_device*) ;
 struct local_info* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_4)
{
    unsigned int VAR_5 = VAR_4->base_addr;
    struct local_info *VAR_6 = FUNC_3(VAR_4);
    struct pcmcia_device *VAR_7 = VAR_6->p_dev;

    FUNC_2(&VAR_7->dev, "do_stop(%p)\n", VAR_4);

    if (!VAR_7)
 return -VAR_0;

    FUNC_4(VAR_4);

    FUNC_1(0);
    FUNC_0(VAR_3, 0);
    FUNC_1(0x01);
    FUNC_0(VAR_1, 0x00);
    FUNC_1(4);
    FUNC_0(VAR_2, 0);
    FUNC_1(0);

    VAR_7->open--;
    return 0;
}
