
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; int max_speed; int * ops; } ;
struct net2272 {unsigned int irq; TYPE_1__ gadget; struct device* dev; int lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net2272* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct device*,char*) ;
 int VAR_4 ;
 struct net2272* FUNC_2 (int,int ) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct net2272 *FUNC_4(struct device *VAR_6, unsigned int VAR_7)
{
 struct net2272 *VAR_8;

 if (!VAR_7) {
  FUNC_1(VAR_6, "No IRQ!\n");
  return FUNC_0(-VAR_0);
 }


 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 FUNC_3(&VAR_8->lock);
 VAR_8->irq = VAR_7;
 VAR_8->dev = VAR_6;
 VAR_8->gadget.ops = &VAR_5;
 VAR_8->gadget.max_speed = VAR_3;


 VAR_8->gadget.name = VAR_4;

 return VAR_8;
}
