
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_11__ {int function; } ;
struct v4l2_subdev {TYPE_1__* ctrl_handler; TYPE_5__ entity; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_14__ {struct cx25840_platform_data* platform_data; } ;
struct i2c_client {int addr; TYPE_8__ dev; TYPE_7__* adapter; } ;
struct TYPE_10__ {int error; } ;
struct cx25840_state {int audclk_freq; int vbi_line_offset; int id; int rev; int vbi_regs_offset; int pvr150_workaround; TYPE_1__ hdl; void* volume; void* mute; int std; int audmode; int aud_input; int vid_input; struct i2c_client* c; TYPE_6__* pads; struct v4l2_subdev sd; } ;
struct cx25840_platform_data {int pvr150_workaround; } ;
struct TYPE_13__ {int name; } ;
struct TYPE_12__ {int sig_type; int flags; } ;


 int FUNC_0 (TYPE_6__*) ;







 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;



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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_1 (struct v4l2_subdev*) ;
 int VAR_28 ;
 int FUNC_2 (struct i2c_client*,int) ;
 int FUNC_3 (struct i2c_client*,int,int) ;
 struct cx25840_state* FUNC_4 (TYPE_8__*,int,int ) ;
 int FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (TYPE_7__*,int ) ;
 int FUNC_7 (struct cx25840_state*) ;
 int FUNC_8 (TYPE_5__*,int ,TYPE_6__*) ;
 int FUNC_9 (int,void**) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (TYPE_1__*) ;
 void* FUNC_13 (TYPE_1__*,int *,int ,int,int,int,int) ;
 int FUNC_14 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_15 (int,int ,struct i2c_client*,char*,...) ;
 int FUNC_16 (struct i2c_client*,char*,...) ;
 int FUNC_17 (struct i2c_client*,char*,...) ;

__attribute__((used)) static int FUNC_18(struct i2c_client *VAR_29,
    const struct i2c_device_id *VAR_30)
{
 struct cx25840_state *VAR_31;
 struct v4l2_subdev *VAR_32;
 int VAR_33;
 u32 VAR_34;
 u16 VAR_35;





 if (!FUNC_6(VAR_29->adapter, VAR_8))
  return -VAR_4;

 FUNC_15(1, VAR_27, VAR_29,
  "detecting cx25840 client on address 0x%x\n",
  VAR_29->addr << 1);

 VAR_35 = FUNC_2(VAR_29, 0x101) << 8;
 VAR_35 |= FUNC_2(VAR_29, 0x100);
 FUNC_15(1, VAR_27, VAR_29, "device_id = 0x%04x\n", VAR_35);





 if ((VAR_35 & 0xff00) == 0x8300) {
  VAR_34 = 133 + ((VAR_35 >> 4) & 0xf) - 6;
 } else if ((VAR_35 & 0xff00) == 0x8400) {
  VAR_34 = 131 + ((VAR_35 >> 4) & 0xf);
 } else if (VAR_35 == 0x0000) {
  VAR_34 = FUNC_5(VAR_29);
 } else if ((VAR_35 & 0xfff0) == 0x5A30) {

  VAR_34 = 137;
 } else if ((VAR_35 & 0xff) == (VAR_35 >> 8)) {
  FUNC_16(VAR_29,
   "likely a confused/unresponsive cx2388[578] A/V decoder found @ 0x%x (%s)\n",
   VAR_29->addr << 1, VAR_29->adapter->name);
  FUNC_16(VAR_29,
   "A method to reset it from the cx25840 driver software is not known at this time\n");
  return -VAR_5;
 } else {
  FUNC_15(1, VAR_27, VAR_29, "cx25840 not found\n");
  return -VAR_5;
 }

 VAR_31 = FUNC_4(&VAR_29->dev, sizeof(*VAR_31), VAR_7);
 if (!VAR_31)
  return -VAR_6;

 VAR_32 = &VAR_31->sd;
 FUNC_14(VAR_32, VAR_29, &VAR_28);
 switch (VAR_34) {
 case 136:
  FUNC_17(VAR_29, "cx23885 A/V decoder found @ 0x%x (%s)\n",
    VAR_29->addr << 1, VAR_29->adapter->name);
  break;
 case 135:
  FUNC_17(VAR_29, "cx23887 A/V decoder found @ 0x%x (%s)\n",
    VAR_29->addr << 1, VAR_29->adapter->name);
  break;
 case 134:
  FUNC_17(VAR_29, "cx23888 A/V decoder found @ 0x%x (%s)\n",
    VAR_29->addr << 1, VAR_29->adapter->name);
  break;
 case 137:
  FUNC_17(VAR_29, "cx%d A/V decoder found @ 0x%x (%s)\n",
    VAR_35, VAR_29->addr << 1, VAR_29->adapter->name);
  break;
 case 131:
 case 130:
 case 129:
 case 128:




  FUNC_17(VAR_29, "cx25%3x-2%x found @ 0x%x (%s)\n",
    (VAR_35 & 0xfff0) >> 4,
    (VAR_35 & 0x0f) < 3 ? (VAR_35 & 0x0f) + 1
      : (VAR_35 & 0x0f),
    VAR_29->addr << 1, VAR_29->adapter->name);
  break;
 case 133:
 case 132:
 default:
  FUNC_17(VAR_29, "cx25%3x-%x found @ 0x%x (%s)\n",
    (VAR_35 & 0xfff0) >> 4, VAR_35 & 0x0f,
    VAR_29->addr << 1, VAR_29->adapter->name);
  break;
 }

 VAR_31->c = VAR_29;
 VAR_31->vid_input = VAR_1;
 VAR_31->aud_input = VAR_0;
 VAR_31->audclk_freq = 48000;
 VAR_31->audmode = VAR_24;
 VAR_31->vbi_line_offset = 8;
 VAR_31->id = VAR_34;
 VAR_31->rev = VAR_35;
 VAR_31->vbi_regs_offset = VAR_34 == 134 ? 0x500 - 0x424 : 0;
 VAR_31->std = VAR_23;
 FUNC_11(&VAR_31->hdl, 9);
 FUNC_13(&VAR_31->hdl, &VAR_26,
     VAR_19, 0, 255, 1, 128);
 FUNC_13(&VAR_31->hdl, &VAR_26,
     VAR_20, 0, 127, 1, 64);
 FUNC_13(&VAR_31->hdl, &VAR_26,
     VAR_22, 0, 127, 1, 64);
 FUNC_13(&VAR_31->hdl, &VAR_26,
     VAR_21, -128, 127, 1, 0);
 if (!FUNC_7(VAR_31)) {
  VAR_33 = FUNC_2(VAR_29, 0x8d4);





  if (VAR_33 > 228) {

   VAR_33 = 228;
   FUNC_3(VAR_29, 0x8d4, 228);
  } else if (VAR_33 < 20) {

   VAR_33 = 20;
   FUNC_3(VAR_29, 0x8d4, 20);
  }
  VAR_33 = (((228 - VAR_33) >> 1) + 23) << 9;

  VAR_31->volume = FUNC_13(&VAR_31->hdl,
        &VAR_25,
        VAR_18,
        0, 65535, 65535 / 100,
        VAR_33);
  VAR_31->mute = FUNC_13(&VAR_31->hdl,
      &VAR_25,
      VAR_16,
      0, 1, 1, 0);
  FUNC_13(&VAR_31->hdl, &VAR_25,
      VAR_14,
      0, 65535, 65535 / 100, 32768);
  FUNC_13(&VAR_31->hdl, &VAR_25,
      VAR_15,
      0, 65535, 65535 / 100, 32768);
  FUNC_13(&VAR_31->hdl, &VAR_25,
      VAR_17,
      0, 65535, 65535 / 100, 32768);
 }
 VAR_32->ctrl_handler = &VAR_31->hdl;
 if (VAR_31->hdl.error) {
  int VAR_36 = VAR_31->hdl.error;

  FUNC_10(&VAR_31->hdl);
  return VAR_36;
 }
 if (!FUNC_7(VAR_31))
  FUNC_9(2, &VAR_31->volume);
 FUNC_12(&VAR_31->hdl);

 if (VAR_29->dev.platform_data) {
  struct cx25840_platform_data *VAR_37 = VAR_29->dev.platform_data;

  VAR_31->pvr150_workaround = VAR_37->pvr150_workaround;
 }

 FUNC_1(VAR_32);
 return 0;
}
