
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rc_dev {int dev; int input_dev; int timeout; TYPE_1__* raw; } ;
struct mce_kbd_dec {int state; int count; int header; int wanted_bits; int body; int keylock; int rx_timeout; } ;
struct lirc_scancode {int scancode; int rc_proto; } ;
struct ir_raw_event {int pulse; int duration; scalar_t__ reset; } ;
struct TYPE_2__ {struct mce_kbd_dec mce_kbd; } ;


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






 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ir_raw_event*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int ,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct rc_dev*,struct lirc_scancode*) ;
 int FUNC_10 (struct rc_dev*,int) ;
 int FUNC_11 (struct rc_dev*,int) ;
 int FUNC_12 (struct ir_raw_event) ;
 int VAR_10 ;
 int FUNC_13 (struct mce_kbd_dec*) ;
 int FUNC_14 (int *,int ) ;
 unsigned long FUNC_15 (int) ;
 unsigned long FUNC_16 (int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct rc_dev *VAR_11, struct ir_raw_event VAR_12)
{
 struct mce_kbd_dec *VAR_13 = &VAR_11->raw->mce_kbd;
 u32 VAR_14;
 unsigned long VAR_15;
 struct lirc_scancode VAR_16 = {};

 if (!FUNC_12(VAR_12)) {
  if (VAR_12.reset)
   VAR_13->state = 128;
  return 0;
 }

 if (!FUNC_6(VAR_12.duration, VAR_6, VAR_6 / 2))
  goto out;

again:
 FUNC_4(&VAR_11->dev, "started at state %i (%uus %s)\n",
  VAR_13->state, FUNC_1(VAR_12.duration), FUNC_0(VAR_12.pulse));

 if (!FUNC_6(VAR_12.duration, VAR_6, VAR_6 / 2))
  return 0;

 switch (VAR_13->state) {

 case 128:
  if (!VAR_12.pulse)
   break;




  if (!FUNC_5(VAR_12.duration, VAR_5, VAR_6))
   break;

  VAR_13->state = 129;
  VAR_13->count = 0;
  VAR_13->header = 0;
  return 0;

 case 129:
  if (FUNC_6(VAR_12.duration, VAR_4, VAR_6 / 2))
   break;

  VAR_13->header <<= 1;
  if (VAR_12.pulse)
   VAR_13->header |= 1;
  VAR_13->count++;
  VAR_13->state = 130;
  return 0;

 case 130:
  FUNC_2(&VAR_12, VAR_2);

  if (VAR_13->count != VAR_3) {
   VAR_13->state = 129;
   goto again;
  }

  switch (FUNC_13(VAR_13)) {
  case 136:
   VAR_13->wanted_bits = 137;
   break;
  case 135:
   VAR_13->wanted_bits = 134;
   break;
  default:
   FUNC_4(&VAR_11->dev, "not keyboard or mouse data\n");
   goto out;
  }

  VAR_13->count = 0;
  VAR_13->body = 0;
  VAR_13->state = 132;
  goto again;

 case 132:
  if (FUNC_6(VAR_12.duration, VAR_4, VAR_6 / 2))
   break;

  VAR_13->body <<= 1;
  if (VAR_12.pulse)
   VAR_13->body |= 1;
  VAR_13->count++;
  VAR_13->state = 133;
  return 0;

 case 133:
  if (VAR_13->count == VAR_13->wanted_bits)
   VAR_13->state = 131;
  else
   VAR_13->state = 132;

  FUNC_2(&VAR_12, VAR_2);
  goto again;

 case 131:
  if (VAR_12.pulse)
   break;

  switch (VAR_13->wanted_bits) {
  case 137:
   VAR_14 = VAR_13->body & 0xffffff;
   FUNC_4(&VAR_11->dev, "keyboard data 0x%08x\n",
    VAR_13->body);
   FUNC_17(&VAR_13->keylock);
   if (VAR_14) {
    VAR_15 = FUNC_16(VAR_11->timeout) +
     FUNC_15(100);
    FUNC_14(&VAR_13->rx_timeout, VAR_10 + VAR_15);
   } else {
    FUNC_3(&VAR_13->rx_timeout);
   }

   FUNC_10(VAR_11, VAR_14);
   FUNC_18(&VAR_13->keylock);
   VAR_16.rc_proto = VAR_8;
   break;
  case 134:
   VAR_14 = VAR_13->body & 0x1fffff;
   FUNC_4(&VAR_11->dev, "mouse data 0x%06x\n", VAR_14);

   FUNC_11(VAR_11, VAR_14);
   VAR_16.rc_proto = VAR_9;
   break;
  default:
   FUNC_4(&VAR_11->dev, "not keyboard or mouse data\n");
   goto out;
  }

  VAR_16.scancode = VAR_14;
  FUNC_9(VAR_11, &VAR_16);
  VAR_13->state = 128;
  FUNC_7(VAR_11->input_dev, VAR_1, VAR_7, VAR_14);
  FUNC_8(VAR_11->input_dev);
  return 0;
 }

out:
 FUNC_4(&VAR_11->dev, "failed at state %i (%uus %s)\n",
  VAR_13->state, FUNC_1(VAR_12.duration), FUNC_0(VAR_12.pulse));
 VAR_13->state = 128;
 return -VAR_0;
}
