
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int ssid; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_10__ {TYPE_1__ pmcw; } ;
struct subchannel {int lock; int dev; TYPE_3__ schid; TYPE_2__ schib; } ;
struct TYPE_13__ {int initialized; } ;
struct TYPE_12__ {int devno; int ssid; } ;
struct ccw_device_private {TYPE_5__ flags; TYPE_4__ dev_id; int onoff; int timer; int wait_q; int cmb_list; int todo_work; int state; int int_class; struct ccw_device* cdev; } ;
struct TYPE_14__ {int groups; int release; int * parent; } ;
struct ccw_device {TYPE_6__ dev; struct ccw_device_private* private; int ccwlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_6__*,char*,int ,int ) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (struct subchannel*,struct ccw_device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct subchannel *VAR_7,
     struct ccw_device *VAR_8)
{
 struct ccw_device_private *VAR_9 = VAR_8->private;
 int VAR_10;

 VAR_9->cdev = VAR_8;
 VAR_9->int_class = VAR_2;
 VAR_9->state = VAR_0;
 VAR_9->dev_id.devno = VAR_7->schib.pmcw.dev;
 VAR_9->dev_id.ssid = VAR_7->schid.ssid;

 FUNC_1(&VAR_9->todo_work, VAR_5);
 FUNC_0(&VAR_9->cmb_list);
 FUNC_6(&VAR_9->wait_q);
 FUNC_11(&VAR_9->timer, VAR_4, 0);

 FUNC_2(&VAR_9->onoff, 0);
 VAR_8->ccwlock = VAR_7->lock;
 VAR_8->dev.parent = &VAR_7->dev;
 VAR_8->dev.release = VAR_3;
 VAR_8->dev.groups = VAR_6;

 FUNC_4(&VAR_8->dev);
 VAR_10 = FUNC_3(&VAR_8->dev, "0.%x.%04x", VAR_8->private->dev_id.ssid,
      VAR_8->private->dev_id.devno);
 if (VAR_10)
  goto out_put;
 if (!FUNC_5(&VAR_7->dev)) {
  VAR_10 = -VAR_1;
  goto out_put;
 }
 VAR_9->flags.initialized = 1;
 FUNC_9(VAR_7->lock);
 FUNC_8(VAR_7, VAR_8);
 FUNC_10(VAR_7->lock);
 return 0;

out_put:

 FUNC_7(&VAR_8->dev);
 return VAR_10;
}
