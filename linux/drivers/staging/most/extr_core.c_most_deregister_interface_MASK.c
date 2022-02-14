
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct most_interface {int num_channels; int dev; struct most_channel* p; int description; } ;
struct TYPE_8__ {TYPE_3__* comp; } ;
struct TYPE_6__ {TYPE_1__* comp; } ;
struct most_channel {int dev_id; int dev; int list; TYPE_4__ pipe1; TYPE_2__ pipe0; int channel_id; int iface; struct most_channel** channel; } ;
struct TYPE_7__ {int (* disconnect_channel ) (int ,int ) ;} ;
struct TYPE_5__ {int (* disconnect_channel ) (int ,int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct most_channel*) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

void FUNC_8(struct most_interface *VAR_1)
{
 int VAR_2;
 struct most_channel *VAR_3;

 FUNC_5("deregistering device %s (%s)\n", FUNC_0(&VAR_1->dev),
  VAR_1->description);
 for (VAR_2 = 0; VAR_2 < VAR_1->num_channels; VAR_2++) {
  VAR_3 = VAR_1->p->channel[VAR_2];
  if (VAR_3->pipe0.comp)
   VAR_3->pipe0.comp->disconnect_channel(VAR_3->iface,
       VAR_3->channel_id);
  if (VAR_3->pipe1.comp)
   VAR_3->pipe1.comp->disconnect_channel(VAR_3->iface,
       VAR_3->channel_id);
  VAR_3->pipe0.comp = ((void*)0);
  VAR_3->pipe1.comp = ((void*)0);
  FUNC_4(&VAR_3->list);
  FUNC_1(&VAR_3->dev);
  FUNC_3(VAR_3);
 }

 FUNC_2(&VAR_0, VAR_1->p->dev_id);
 FUNC_3(VAR_1->p);
 FUNC_1(&VAR_1->dev);
}
