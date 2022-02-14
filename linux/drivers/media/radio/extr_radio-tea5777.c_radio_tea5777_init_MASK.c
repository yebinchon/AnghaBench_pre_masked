
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int device_caps; TYPE_4__* ctrl_handler; TYPE_9__* fops; TYPE_3__* v4l2_dev; int * lock; int name; } ;
struct TYPE_12__ {int error; } ;
struct TYPE_13__ {struct module* owner; } ;
struct radio_tea5777 {long long write_reg; int freq; TYPE_1__ vd; TYPE_3__* v4l2_dev; TYPE_4__ ctrl_handler; TYPE_9__ fops; int mutex; int audmode; } ;
struct module {int dummy; } ;
struct TYPE_11__ {int name; } ;


 long long VAR_0 ;
 long long VAR_1 ;
 long long VAR_2 ;
 long long VAR_3 ;
 long long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct radio_tea5777*) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_11 ;
 TYPE_9__ VAR_12 ;
 TYPE_1__ VAR_13 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int *,int ,int ,int,int,int) ;
 int FUNC_7 (TYPE_3__*,char*,...) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 int FUNC_9 (TYPE_1__*,struct radio_tea5777*) ;

int FUNC_10(struct radio_tea5777 *VAR_14, struct module *VAR_15)
{
 int VAR_16;

 VAR_14->write_reg = (1LL << VAR_1) |
    (1LL << VAR_2) |
    (1LL << VAR_3) |
    (1LL << VAR_0) |
    (1LL << VAR_4);
 VAR_14->freq = 90500 * 16;
 VAR_14->audmode = VAR_9;
 VAR_16 = FUNC_1(VAR_14);
 if (VAR_16) {
  FUNC_7(VAR_14->v4l2_dev, "can't set initial freq (%d)\n", VAR_16);
  return VAR_16;
 }

 VAR_14->vd = VAR_13;
 FUNC_9(&VAR_14->vd, VAR_14);
 FUNC_0(&VAR_14->mutex);
 FUNC_2(VAR_14->vd.name, VAR_14->v4l2_dev->name, sizeof(VAR_14->vd.name));
 VAR_14->vd.lock = &VAR_14->mutex;
 VAR_14->vd.v4l2_dev = VAR_14->v4l2_dev;
 VAR_14->vd.device_caps = VAR_7 | VAR_6 |
         VAR_5;
 VAR_14->fops = VAR_12;
 VAR_14->fops.owner = VAR_15;
 VAR_14->vd.fops = &VAR_14->fops;

 VAR_14->vd.ctrl_handler = &VAR_14->ctrl_handler;
 FUNC_4(&VAR_14->ctrl_handler, 1);
 FUNC_6(&VAR_14->ctrl_handler, &VAR_11,
     VAR_8, 0, 1, 1, 1);
 VAR_16 = VAR_14->ctrl_handler.error;
 if (VAR_16) {
  FUNC_7(VAR_14->v4l2_dev, "can't initialize controls\n");
  FUNC_3(&VAR_14->ctrl_handler);
  return VAR_16;
 }
 FUNC_5(&VAR_14->ctrl_handler);

 VAR_16 = FUNC_8(&VAR_14->vd, VAR_10, -1);
 if (VAR_16) {
  FUNC_7(VAR_14->v4l2_dev, "can't register video device!\n");
  FUNC_3(VAR_14->vd.ctrl_handler);
  return VAR_16;
 }

 return 0;
}
