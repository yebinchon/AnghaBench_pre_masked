
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct typec_altmode {char* desc; int * ops; TYPE_1__ dev; int vdo; } ;
struct dp_altmode {int work; int state; struct typec_altmode* alt; struct typec_altmode const* port; int lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 struct dp_altmode* FUNC_3 (TYPE_1__*,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 struct typec_altmode* FUNC_7 (struct typec_altmode*) ;
 int FUNC_8 (struct typec_altmode*,struct dp_altmode*) ;

int FUNC_9(struct typec_altmode *VAR_7)
{
 const struct typec_altmode *VAR_8 = FUNC_7(VAR_7);
 struct dp_altmode *VAR_9;
 int VAR_10;




 if (!(FUNC_0(VAR_8->vdo) &
       FUNC_1(VAR_7->vdo)) &&
     !(FUNC_1(VAR_8->vdo) &
       FUNC_0(VAR_7->vdo)))
  return -VAR_1;

 VAR_10 = FUNC_6(&VAR_7->dev.kobj, &VAR_4);
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_3(&VAR_7->dev, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 FUNC_2(&VAR_9->work, VAR_6);
 FUNC_4(&VAR_9->lock);
 VAR_9->port = VAR_8;
 VAR_9->alt = VAR_7;

 VAR_7->desc = "DisplayPort";
 VAR_7->ops = &VAR_5;

 FUNC_8(VAR_7, VAR_9);

 VAR_9->state = VAR_0;
 FUNC_5(&VAR_9->work);

 return 0;
}
