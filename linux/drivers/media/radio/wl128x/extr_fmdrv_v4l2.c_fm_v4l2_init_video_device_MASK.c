
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct v4l2_ctrl {int flags; } ;
struct TYPE_9__ {int name; } ;
struct fmdev {int ctrl_handler; TYPE_4__ v4l2_dev; TYPE_1__* radio_dev; int mutex; } ;
struct TYPE_8__ {int * ctrl_handler; TYPE_4__* v4l2_dev; int * lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_1__ VAR_16 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_17 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 struct v4l2_ctrl* FUNC_5 (int *,int *,int ,int ,int,int,int) ;
 int FUNC_6 (int *,int *,int ,int ,int ,int ) ;
 int FUNC_7 (int *,TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ,int) ;
 int FUNC_10 (TYPE_1__*,struct fmdev*) ;
 int FUNC_11 (TYPE_1__*) ;

int FUNC_12(struct fmdev *VAR_18, int VAR_19)
{
 struct v4l2_ctrl *VAR_20;
 int VAR_21;

 FUNC_2(VAR_18->v4l2_dev.name, VAR_2,
  sizeof(VAR_18->v4l2_dev.name));
 VAR_21 = FUNC_7(((void*)0), &VAR_18->v4l2_dev);
 if (VAR_21 < 0)
  return VAR_21;


 FUNC_1(&VAR_18->mutex);


 VAR_17 = VAR_16;

 FUNC_10(&VAR_17, VAR_18);

 VAR_17.lock = &VAR_18->mutex;
 VAR_17.v4l2_dev = &VAR_18->v4l2_dev;


 if (FUNC_9(&VAR_17, VAR_14, VAR_19)) {
  FUNC_8(&VAR_18->v4l2_dev);
  FUNC_0("Could not register video device\n");
  return -VAR_1;
 }

 VAR_18->radio_dev = &VAR_17;


 VAR_18->radio_dev->ctrl_handler = &VAR_18->ctrl_handler;

 VAR_21 = FUNC_4(&VAR_18->ctrl_handler, 5);
 if (VAR_21 < 0) {
  FUNC_0("(fmdev): Can't init ctrl handler\n");
  FUNC_3(&VAR_18->ctrl_handler);
  FUNC_11(VAR_18->radio_dev);
  FUNC_8(&VAR_18->v4l2_dev);
  return -VAR_0;
 }





 FUNC_5(&VAR_18->ctrl_handler, &VAR_15,
   VAR_8, VAR_6,
   VAR_5, 1, VAR_5);

 FUNC_5(&VAR_18->ctrl_handler, &VAR_15,
   VAR_7, 0, 1, 1, 1);

 FUNC_6(&VAR_18->ctrl_handler, &VAR_15,
   VAR_11, VAR_13,
   0, VAR_13);

 FUNC_5(&VAR_18->ctrl_handler, &VAR_15,
   VAR_10, VAR_4,
   VAR_3, 1, VAR_3);

 VAR_20 = FUNC_5(&VAR_18->ctrl_handler, &VAR_15,
   VAR_9, 0,
   255, 1, 255);

 if (VAR_20)
  VAR_20->flags |= VAR_12;

 return 0;
}
