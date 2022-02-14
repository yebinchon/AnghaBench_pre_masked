
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int open; int dev; } ;
struct net_device {int dummy; } ;
struct local_info {struct pcmcia_device* p_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,struct net_device*) ;
 int FUNC_1 (struct net_device*,int) ;
 struct local_info* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pcmcia_device*) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_1)
{
    struct local_info *VAR_2 = FUNC_2(VAR_1);
    struct pcmcia_device *VAR_3 = VAR_2->p_dev;

    FUNC_0(&VAR_3->dev, "do_open(%p)\n", VAR_1);



    if (!FUNC_4(VAR_3))
 return -VAR_0;


    VAR_3->open++;

    FUNC_3(VAR_1);
    FUNC_1(VAR_1,1);

    return 0;
}
