
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int open; int dev; } ;
struct net_device {unsigned int base_addr; int name; } ;
struct el3_private {int media; int window_lock; struct pcmcia_device* p_dev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;
 struct el3_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int,scalar_t__) ;
 scalar_t__ FUNC_6 (struct pcmcia_device*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_5)
{
 unsigned int VAR_6 = VAR_5->base_addr;
 struct el3_private *VAR_7 = FUNC_3(VAR_5);
 struct pcmcia_device *VAR_8 = VAR_7->p_dev;

 FUNC_2(&VAR_8->dev, "%s: shutting down ethercard.\n", VAR_5->name);

 if (FUNC_6(VAR_8)) {
  unsigned long VAR_9;


  FUNC_5(VAR_3, VAR_6 + VAR_0);


  FUNC_5(VAR_1, VAR_6 + VAR_0);
  FUNC_5(VAR_4, VAR_6 + VAR_0);


  FUNC_0(0);
  FUNC_7(&VAR_7->window_lock, VAR_9);
  FUNC_9(VAR_5);
  FUNC_8(&VAR_7->window_lock, VAR_9);


  FUNC_5(VAR_2 | 0x0000, VAR_6 + VAR_0);
 }

 VAR_8->open--;
 FUNC_4(VAR_5);
 FUNC_1(&VAR_7->media);

 return 0;
}
