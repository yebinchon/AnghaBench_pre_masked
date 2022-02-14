
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rc_dev {int dev; TYPE_1__* raw; } ;
struct jvc_dec {int state; int first; int toggle; int bits; int old_bits; int count; } ;
struct ir_raw_event {int pulse; int duration; scalar_t__ reset; } ;
struct TYPE_2__ {struct jvc_dec jvc; } ;


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







 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ir_raw_event*,int ) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (struct ir_raw_event) ;
 int FUNC_8 (struct rc_dev*,int ,int,int) ;
 int FUNC_9 (struct rc_dev*) ;

__attribute__((used)) static int FUNC_10(struct rc_dev *VAR_11, struct ir_raw_event VAR_12)
{
 struct jvc_dec *VAR_13 = &VAR_11->raw->jvc;

 if (!FUNC_7(VAR_12)) {
  if (VAR_12.reset)
   VAR_13->state = 130;
  return 0;
 }

 if (!FUNC_6(VAR_12.duration, VAR_9, VAR_9 / 2))
  goto out;

 FUNC_4(&VAR_11->dev, "JVC decode started at state %d (%uus %s)\n",
  VAR_13->state, FUNC_1(VAR_12.duration), FUNC_0(VAR_12.pulse));

again:
 switch (VAR_13->state) {

 case 130:
  if (!VAR_12.pulse)
   break;

  if (!FUNC_5(VAR_12.duration, VAR_4, VAR_9 / 2))
   break;

  VAR_13->count = 0;
  VAR_13->first = 1;
  VAR_13->toggle = !VAR_13->toggle;
  VAR_13->state = 131;
  return 0;

 case 131:
  if (VAR_12.pulse)
   break;

  if (!FUNC_5(VAR_12.duration, VAR_5, VAR_9 / 2))
   break;

  VAR_13->state = 134;
  return 0;

 case 134:
  if (!VAR_12.pulse)
   break;

  if (!FUNC_5(VAR_12.duration, VAR_3, VAR_9 / 2))
   break;

  VAR_13->state = 133;
  return 0;

 case 133:
  if (VAR_12.pulse)
   break;

  VAR_13->bits <<= 1;
  if (FUNC_5(VAR_12.duration, VAR_2, VAR_9 / 2)) {
   VAR_13->bits |= 1;
   FUNC_3(&VAR_12, VAR_2);
  } else if (FUNC_5(VAR_12.duration, VAR_1, VAR_9 / 2))
   FUNC_3(&VAR_12, VAR_1);
  else
   break;
  VAR_13->count++;

  if (VAR_13->count == VAR_6)
   VAR_13->state = 129;
  else
   VAR_13->state = 134;
  return 0;

 case 129:
  if (!VAR_12.pulse)
   break;

  if (!FUNC_5(VAR_12.duration, VAR_7, VAR_9 / 2))
   break;

  VAR_13->state = 128;
  return 0;

 case 128:
  if (VAR_12.pulse)
   break;

  if (!FUNC_6(VAR_12.duration, VAR_8, VAR_9 / 2))
   break;

  if (VAR_13->first) {
   u32 VAR_14;
   VAR_14 = (FUNC_2((VAR_13->bits >> 8) & 0xff) << 8) |
       (FUNC_2((VAR_13->bits >> 0) & 0xff) << 0);
   FUNC_4(&VAR_11->dev, "JVC scancode 0x%04x\n", VAR_14);
   FUNC_8(VAR_11, VAR_10, VAR_14, VAR_13->toggle);
   VAR_13->first = 0;
   VAR_13->old_bits = VAR_13->bits;
  } else if (VAR_13->bits == VAR_13->old_bits) {
   FUNC_4(&VAR_11->dev, "JVC repeat\n");
   FUNC_9(VAR_11);
  } else {
   FUNC_4(&VAR_11->dev, "JVC invalid repeat msg\n");
   break;
  }

  VAR_13->count = 0;
  VAR_13->state = 132;
  return 0;

 case 132:
  if (!VAR_12.pulse)
   break;

  if (FUNC_5(VAR_12.duration, VAR_4, VAR_9 / 2))
   VAR_13->state = 130;
  else
   VAR_13->state = 134;
  goto again;
 }

out:
 FUNC_4(&VAR_11->dev, "JVC decode failed at state %d (%uus %s)\n",
  VAR_13->state, FUNC_1(VAR_12.duration), FUNC_0(VAR_12.pulse));
 VAR_13->state = 130;
 return -VAR_0;
}
