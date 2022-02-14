
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int dev; int open; } ;
struct net_device {scalar_t__ base_addr; int name; } ;
struct el3_private {int media; struct pcmcia_device* p_dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,scalar_t__) ;
 struct el3_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct pcmcia_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_5)
{
 struct el3_private *VAR_6 = FUNC_3(VAR_5);
 struct pcmcia_device *VAR_7 = VAR_6->p_dev;

 if (!FUNC_5(VAR_7))
  return -VAR_1;

 VAR_7->open++;
 FUNC_4(VAR_5);

 FUNC_6(VAR_5);
 FUNC_7(&VAR_6->media, VAR_4, 0);
 FUNC_2(&VAR_6->media, VAR_3 + VAR_2);

 FUNC_0(&VAR_7->dev, "%s: opened, status %4.4x.\n",
   VAR_5->name, FUNC_1(VAR_5->base_addr + VAR_0));

 return 0;
}
