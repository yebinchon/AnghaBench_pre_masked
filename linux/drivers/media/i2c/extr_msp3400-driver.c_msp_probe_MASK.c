
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int function; } ;
struct v4l2_subdev {struct v4l2_ctrl_handler* ctrl_handler; TYPE_2__ entity; } ;
struct v4l2_ctrl_handler {int error; } ;
struct msp_state {int input; int rev1; int rev2; int ident; int has_nicam; int has_radio; int has_headphones; int has_scart2; int has_scart3; int has_scart4; int has_scart2_out; int has_scart2_out_volume; int has_i2s_conf; int has_subwoofer; int has_sound_processing; int has_virtual_dolby_surround; int has_dolby_pro_logic; int force_btsc; int opmode; int kthread; void* volume; void* muted; struct v4l2_ctrl_handler hdl; int route_out; int route_in; int wq; scalar_t__ i2s_mode; int audmode; int detected_std; int v4l2_std; TYPE_3__* pads; struct v4l2_subdev sd; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; TYPE_1__* adapter; int name; } ;
struct TYPE_6__ {void* sig_type; int flags; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;



 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int *,int,int ,char*,...) ;
 int FUNC_2 (int *,char*,int,int,int,int,int,int ,char*,char*,char*,int ) ;
 int FUNC_3 (int *,char*) ;
 struct msp_state* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int (*) (void*),struct i2c_client*,char*) ;
 int FUNC_7 (TYPE_2__*,int,TYPE_3__*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 void* FUNC_11 (struct i2c_client*,int) ;
 int FUNC_12 (struct i2c_client*) ;
 int FUNC_13 (struct i2c_client*) ;
 int VAR_23 ;
 int * VAR_24 ;
 int FUNC_14 (int ,char*,int) ;
 int FUNC_15 (int,void**) ;
 int FUNC_16 (struct v4l2_ctrl_handler*) ;
 int FUNC_17 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_18 (struct v4l2_ctrl_handler*) ;
 void* FUNC_19 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int) ;
 int FUNC_20 (struct v4l2_subdev*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_21(struct i2c_client *VAR_25, const struct i2c_device_id *VAR_26)
{
 struct msp_state *VAR_27;
 struct v4l2_subdev *VAR_28;
 struct v4l2_ctrl_handler *VAR_29;
 int (*VAR_30)(void *VAR_31) = ((void*)0);
 int VAR_32;
 int VAR_33;
 int VAR_34;
 int VAR_35, VAR_36, VAR_37;
 int VAR_38;




 if (!VAR_26)
  FUNC_14(VAR_25->name, "msp3400", sizeof(VAR_25->name));

 if (FUNC_12(VAR_25) == -1) {
  FUNC_1(&VAR_25->dev, 1, VAR_21, "msp3400 not found\n");
  return -VAR_0;
 }

 VAR_27 = FUNC_4(&VAR_25->dev, sizeof(*VAR_27), VAR_2);
 if (!VAR_27)
  return -VAR_1;

 VAR_28 = &VAR_27->sd;
 FUNC_20(VAR_28, VAR_25, &VAR_22);
 VAR_27->v4l2_std = VAR_18;
 VAR_27->detected_std = VAR_17;
 VAR_27->audmode = VAR_19;
 VAR_27->input = -1;
 VAR_27->i2s_mode = 0;
 FUNC_5(&VAR_27->wq);

 VAR_27->route_in = VAR_8;
 VAR_27->route_out = VAR_9;

 VAR_27->rev1 = FUNC_11(VAR_25, 0x1e);
 if (VAR_27->rev1 != -1)
  VAR_27->rev2 = FUNC_11(VAR_25, 0x1f);
 FUNC_1(&VAR_25->dev, 1, VAR_21, "rev1=0x%04x, rev2=0x%04x\n",
   VAR_27->rev1, VAR_27->rev2);
 if (VAR_27->rev1 == -1 || (VAR_27->rev1 == 0 && VAR_27->rev2 == 0)) {
  FUNC_1(&VAR_25->dev, 1, VAR_21,
    "not an msp3400 (cannot read chip version)\n");
  return -VAR_0;
 }

 VAR_33 = ((VAR_27->rev1 >> 4) & 0x0f) + 3;
 VAR_35 = (VAR_27->rev2 >> 8) & 0xff;
 VAR_36 = VAR_35 / 10;
 VAR_37 = VAR_35 % 10;
 VAR_34 = (VAR_27->rev1 & 0x0f) + '@';
 VAR_32 = ((VAR_27->rev1 >> 8) & 0xff) + '@';
 VAR_38 = VAR_27->rev2 & 0x1f;

 VAR_27->ident = VAR_33 * 10000 + 4000 + VAR_35 * 10 +
   VAR_34 - '@';


 VAR_27->has_nicam =
  VAR_36 == 1 || VAR_36 == 5;

 VAR_27->has_radio =
  VAR_34 >= 'G';

 VAR_27->has_headphones =
  VAR_37 < 5;

 VAR_27->has_scart2 =
  VAR_33 >= 4 || VAR_37 < 7;

 VAR_27->has_scart3 =
  VAR_33 >= 4 || VAR_37 < 5;

 VAR_27->has_scart4 =
  VAR_33 >= 4 || (VAR_34 >= 'D' && VAR_37 < 5);


 VAR_27->has_scart2_out =
  VAR_33 >= 4 || VAR_37 < 5;

 VAR_27->has_scart2_out_volume =
  VAR_34 > 'C' && VAR_27->has_scart2_out;

 VAR_27->has_i2s_conf =
  VAR_34 >= 'G' && VAR_37 < 7;


 VAR_27->has_subwoofer =
  VAR_34 >= 'D' && VAR_37 < 5;


 VAR_27->has_sound_processing =
  VAR_37 < 7;

 VAR_27->has_virtual_dolby_surround =
  VAR_34 == 'G' && VAR_37 == 1;

 VAR_27->has_dolby_pro_logic =
  VAR_34 == 'G' && VAR_37 == 2;


 VAR_27->force_btsc =
  VAR_33 == 3 && VAR_34 == 'G' && VAR_36 == 3;

 VAR_27->opmode = VAR_23;
 if (VAR_27->opmode < 128
     || VAR_27->opmode > 129) {

  if (VAR_34 >= 'G')
   VAR_27->opmode = 129;

  else if (VAR_34 >= 'D')
   VAR_27->opmode = 130;
  else
   VAR_27->opmode = 128;
 }

 VAR_29 = &VAR_27->hdl;
 FUNC_17(VAR_29, 6);
 if (VAR_27->has_sound_processing) {
  FUNC_19(VAR_29, &VAR_20,
   VAR_12, 0, 65535, 65535 / 100, 32768);
  FUNC_19(VAR_29, &VAR_20,
   VAR_15, 0, 65535, 65535 / 100, 32768);
  FUNC_19(VAR_29, &VAR_20,
   VAR_13, 0, 1, 1, 0);
 }
 VAR_27->volume = FUNC_19(VAR_29, &VAR_20,
   VAR_16, 0, 65535, 65535 / 100, 58880);
 FUNC_19(VAR_29, &VAR_20,
   VAR_11, 0, 65535, 65535 / 100, 32768);
 VAR_27->muted = FUNC_19(VAR_29, &VAR_20,
   VAR_14, 0, 1, 1, 0);
 VAR_28->ctrl_handler = VAR_29;
 if (VAR_29->error) {
  int VAR_39 = VAR_29->error;

  FUNC_16(VAR_29);
  return VAR_39;
 }

 FUNC_15(2, &VAR_27->volume);
 FUNC_18(VAR_29);

 FUNC_2(&VAR_25->dev,
   "MSP%d4%02d%c-%c%d found on %s: supports %s%s%s, mode is %s\n",
   VAR_33, VAR_35,
   VAR_34, VAR_32, VAR_38,
   VAR_25->adapter->name,
   (VAR_27->has_nicam) ? "nicam" : "",
   (VAR_27->has_nicam && VAR_27->has_radio) ? " and " : "",
   (VAR_27->has_radio) ? "radio" : "",
   VAR_24[VAR_27->opmode]);


 switch (VAR_27->opmode) {
 case 128:
  VAR_30 = FUNC_8;
  break;
 case 130:
  VAR_30 = FUNC_9;
  break;
 case 129:
  VAR_30 = FUNC_10;
  break;
 }


 if (VAR_30) {
  VAR_27->kthread = FUNC_6(VAR_30, VAR_25, "msp34xx");

  if (FUNC_0(VAR_27->kthread))
   FUNC_3(&VAR_25->dev, "kernel_thread() failed\n");
  FUNC_13(VAR_25);
 }
 return 0;
}
