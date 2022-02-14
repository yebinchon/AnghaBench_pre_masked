
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {int dev; int open; } ;
struct net_device {scalar_t__ base_addr; int name; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct el3_private {TYPE_1__ media; struct pcmcia_device* p_dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 struct el3_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct pcmcia_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4)
{
 struct el3_private *VAR_5 = FUNC_3(VAR_4);
 struct pcmcia_device *VAR_6 = VAR_5->p_dev;

 if (!FUNC_5(VAR_6))
  return -VAR_1;

 VAR_6->open++;
 FUNC_4(VAR_4);

 FUNC_6(VAR_4);
 VAR_5->media.expires = VAR_3 + VAR_2;
 FUNC_0(&VAR_5->media);

 FUNC_1(&VAR_6->dev, "%s: opened, status %4.4x.\n",
    VAR_4->name, FUNC_2(VAR_4->base_addr + VAR_0));

 return 0;
}
