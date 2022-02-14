
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_device {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct v4l2_ctrl_handler {int error; } ;
struct tea5764_regs {scalar_t__ chipid; int manid; } ;
struct TYPE_4__ {int device_caps; struct v4l2_device* v4l2_dev; int * lock; } ;
struct tea5764_device {TYPE_1__ vdev; int mutex; struct tea5764_regs regs; struct i2c_client* i2c_client; struct v4l2_ctrl_handler ctrl_handler; struct v4l2_device v4l2_dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct i2c_client*,struct tea5764_device*) ;
 int FUNC_4 (struct tea5764_device*) ;
 struct tea5764_device* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (struct tea5764_device*) ;
 int FUNC_8 (struct tea5764_device*,int) ;
 int FUNC_9 (struct tea5764_device*) ;
 TYPE_1__ VAR_12 ;
 int FUNC_10 (struct tea5764_device*,int ) ;
 int FUNC_11 (struct v4l2_ctrl_handler*) ;
 int FUNC_12 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_13 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int) ;
 int FUNC_14 (int *,struct v4l2_device*) ;
 int FUNC_15 (struct v4l2_device*) ;
 int FUNC_16 (struct v4l2_device*,char*) ;
 int FUNC_17 (TYPE_1__*,int ,int ) ;
 int FUNC_18 (TYPE_1__*,struct tea5764_device*) ;

__attribute__((used)) static int FUNC_19(struct i2c_client *VAR_13,
        const struct i2c_device_id *VAR_14)
{
 struct tea5764_device *VAR_15;
 struct v4l2_device *VAR_16;
 struct v4l2_ctrl_handler *VAR_17;
 struct tea5764_regs *VAR_18;
 int VAR_19;

 FUNC_0("probe");
 VAR_15 = FUNC_5(sizeof(struct tea5764_device), VAR_2);
 if (!VAR_15)
  return -VAR_1;

 VAR_16 = &VAR_15->v4l2_dev;
 VAR_19 = FUNC_14(&VAR_13->dev, VAR_16);
 if (VAR_19 < 0) {
  FUNC_16(VAR_16, "could not register v4l2_device\n");
  goto errfr;
 }

 VAR_17 = &VAR_15->ctrl_handler;
 FUNC_12(VAR_17, 1);
 FUNC_13(VAR_17, &VAR_11,
   VAR_7, 0, 1, 1, 1);
 VAR_16->ctrl_handler = VAR_17;
 if (VAR_17->error) {
  VAR_19 = VAR_17->error;
  FUNC_16(VAR_16, "Could not register controls\n");
  goto errunreg;
 }

 FUNC_6(&VAR_15->mutex);
 VAR_15->i2c_client = VAR_13;
 VAR_19 = FUNC_7(VAR_15);
 if (VAR_19)
  goto errunreg;
 VAR_18 = &VAR_15->regs;
 FUNC_0("chipid = %04X, manid = %04X", VAR_18->chipid, VAR_18->manid);
 if (VAR_18->chipid != VAR_3 ||
  (VAR_18->manid & 0x0fff) != VAR_4) {
  FUNC_2("This chip is not a TEA5764!");
  VAR_19 = -VAR_0;
  goto errunreg;
 }

 VAR_15->vdev = VAR_12;

 FUNC_3(VAR_13, VAR_15);
 FUNC_18(&VAR_15->vdev, VAR_15);
 VAR_15->vdev.lock = &VAR_15->mutex;
 VAR_15->vdev.v4l2_dev = VAR_16;
 VAR_15->vdev.device_caps = VAR_6 | VAR_5;


 FUNC_7(VAR_15);
 FUNC_10(VAR_15, VAR_8);
 FUNC_8(VAR_15, 1);
 FUNC_9(VAR_15);

 VAR_19 = FUNC_17(&VAR_15->vdev, VAR_9, VAR_10);
 if (VAR_19 < 0) {
  FUNC_2("Could not register video device!");
  goto errunreg;
 }

 FUNC_1("registered.");
 return 0;
errunreg:
 FUNC_11(VAR_17);
 FUNC_15(VAR_16);
errfr:
 FUNC_4(VAR_15);
 return VAR_19;
}
