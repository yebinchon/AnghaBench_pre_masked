
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenvif_queue {unsigned int id; TYPE_1__* vif; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct net_device* dev; } ;


 int FUNC_0 (struct net_device*,unsigned int) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct xenvif_queue *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->vif->dev;
 unsigned int VAR_2 = VAR_0->id;
 return FUNC_1(FUNC_0(VAR_1, VAR_2));
}
