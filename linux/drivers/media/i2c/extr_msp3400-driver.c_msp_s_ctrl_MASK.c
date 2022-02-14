
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct v4l2_ctrl {int val; int id; } ;
struct msp_state {int scan_in_progress; int has_headphones; int has_scart2_out_volume; TYPE_2__* volume; TYPE_1__* muted; int sd; } ;
struct i2c_client {int dev; } ;
struct TYPE_4__ {int val; } ;
struct TYPE_3__ {int val; } ;


 int VAR_0 ;





 struct msp_state* FUNC_0 (struct v4l2_ctrl*) ;
 int FUNC_1 (int *,int,int ,char*,char*,char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct i2c_client*,int,int) ;
 struct i2c_client* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct v4l2_ctrl *VAR_2)
{
 struct msp_state *VAR_3 = FUNC_0(VAR_2);
 struct i2c_client *VAR_4 = FUNC_3(&VAR_3->sd);
 int VAR_5 = VAR_2->val;

 switch (VAR_2->id) {
 case 128: {

  int VAR_6 = VAR_3->muted->val | VAR_3->scan_in_progress;

  if (!VAR_6)
   VAR_5 = (VAR_5 * 0x7f / 65535) << 8;

  FUNC_1(&VAR_4->dev, 1, VAR_1, "mute=%s scanning=%s volume=%d\n",
    VAR_3->muted->val ? "on" : "off",
    VAR_3->scan_in_progress ? "yes" : "no",
    VAR_3->volume->val);

  FUNC_2(VAR_4, 0x0000, VAR_5);
  FUNC_2(VAR_4, 0x0007, VAR_6 ? 0x1 : (VAR_5 | 0x1));
  if (VAR_3->has_scart2_out_volume)
   FUNC_2(VAR_4, 0x0040, VAR_6 ? 0x1 : (VAR_5 | 0x1));
  if (VAR_3->has_headphones)
   FUNC_2(VAR_4, 0x0006, VAR_5);
  break;
 }

 case 131:
  VAR_5 = ((VAR_5 - 32768) * 0x60 / 65535) << 8;
  FUNC_2(VAR_4, 0x0002, VAR_5);
  if (VAR_3->has_headphones)
   FUNC_2(VAR_4, 0x0031, VAR_5);
  break;

 case 129:
  VAR_5 = ((VAR_5 - 32768) * 0x60 / 65535) << 8;
  FUNC_2(VAR_4, 0x0003, VAR_5);
  if (VAR_3->has_headphones)
   FUNC_2(VAR_4, 0x0032, VAR_5);
  break;

 case 130:
  VAR_5 = VAR_5 ? ((5 * 4) << 8) : 0;
  FUNC_2(VAR_4, 0x0004, VAR_5);
  if (VAR_3->has_headphones)
   FUNC_2(VAR_4, 0x0033, VAR_5);
  break;

 case 132:
  VAR_5 = (u8)((VAR_5 / 256) - 128);
  FUNC_2(VAR_4, 0x0001, VAR_5 << 8);
  if (VAR_3->has_headphones)
   FUNC_2(VAR_4, 0x0030, VAR_5 << 8);
  break;

 default:
  return -VAR_0;
 }
 return 0;
}
