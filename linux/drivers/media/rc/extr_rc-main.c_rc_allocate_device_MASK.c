
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * class; int * type; } ;
struct TYPE_5__ {int lock; } ;
struct rc_dev {int driver_type; TYPE_4__ dev; int lock; int keylock; TYPE_1__ rc_map; int timer_repeat; int timer_keyup; int timeout; TYPE_2__* input_dev; } ;
typedef enum rc_driver_type { ____Placeholder_rc_driver_type } rc_driver_type ;
struct TYPE_6__ {int setkeycode; int getkeycode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,struct rc_dev*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct rc_dev*) ;
 struct rc_dev* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ) ;

struct rc_dev *FUNC_9(enum rc_driver_type VAR_10)
{
 struct rc_dev *VAR_11;

 VAR_11 = FUNC_5(sizeof(*VAR_11), VAR_0);
 if (!VAR_11)
  return ((void*)0);

 if (VAR_10 != VAR_2) {
  VAR_11->input_dev = FUNC_2();
  if (!VAR_11->input_dev) {
   FUNC_4(VAR_11);
   return ((void*)0);
  }

  VAR_11->input_dev->getkeycode = VAR_4;
  VAR_11->input_dev->setkeycode = VAR_5;
  FUNC_3(VAR_11->input_dev, VAR_11);

  VAR_11->timeout = VAR_1;
  FUNC_8(&VAR_11->timer_keyup, VAR_6, 0);
  FUNC_8(&VAR_11->timer_repeat, VAR_7, 0);

  FUNC_7(&VAR_11->rc_map.lock);
  FUNC_7(&VAR_11->keylock);
 }
 FUNC_6(&VAR_11->lock);

 VAR_11->dev.type = &VAR_9;
 VAR_11->dev.class = &VAR_8;
 FUNC_1(&VAR_11->dev);

 VAR_11->driver_type = VAR_10;

 FUNC_0(VAR_3);
 return VAR_11;
}
