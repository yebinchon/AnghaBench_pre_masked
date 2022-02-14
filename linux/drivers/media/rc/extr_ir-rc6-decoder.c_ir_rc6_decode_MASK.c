
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rc_dev {int dev; TYPE_1__* raw; } ;
struct rc6_dec {int state; int count; int header; int toggle; int body; int wanted_bits; } ;
struct ir_raw_event {int pulse; int duration; scalar_t__ reset; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;
struct TYPE_2__ {struct rc6_dec rc6; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ir_raw_event*,int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (int ,int,int) ;
 int FUNC_6 (struct ir_raw_event) ;
 int const FUNC_7 (struct rc6_dec*) ;
 int FUNC_8 (struct rc_dev*,int,int,int) ;

__attribute__((used)) static int FUNC_9(struct rc_dev *VAR_21, struct ir_raw_event VAR_22)
{
 struct rc6_dec *VAR_23 = &VAR_21->raw->rc6;
 u32 VAR_24;
 u8 VAR_25;
 enum rc_proto VAR_26;

 if (!FUNC_6(VAR_22)) {
  if (VAR_22.reset)
   VAR_23->state = 131;
  return 0;
 }

 if (!FUNC_5(VAR_22.duration, VAR_15, VAR_15 / 2))
  goto out;

again:
 FUNC_3(&VAR_21->dev, "RC6 decode started at state %i (%uus %s)\n",
  VAR_23->state, FUNC_1(VAR_22.duration), FUNC_0(VAR_22.pulse));

 if (!FUNC_5(VAR_22.duration, VAR_15, VAR_15 / 2))
  return 0;

 switch (VAR_23->state) {

 case 131:
  if (!VAR_22.pulse)
   break;




  if (!FUNC_4(VAR_22.duration, VAR_9, VAR_15))
   break;

  VAR_23->state = 130;
  VAR_23->count = 0;
  return 0;

 case 130:
  if (VAR_22.pulse)
   break;

  if (!FUNC_4(VAR_22.duration, VAR_10, VAR_15 / 2))
   break;

  VAR_23->state = 132;
  VAR_23->header = 0;
  return 0;

 case 132:
  if (!FUNC_4(VAR_22.duration, VAR_7, VAR_15 / 2))
   break;

  VAR_23->header <<= 1;
  if (VAR_22.pulse)
   VAR_23->header |= 1;
  VAR_23->count++;
  VAR_23->state = 133;
  return 0;

 case 133:
  if (VAR_23->count == VAR_8)
   VAR_23->state = 128;
  else
   VAR_23->state = 132;

  FUNC_2(&VAR_22, VAR_6);
  goto again;

 case 128:
  if (!FUNC_4(VAR_22.duration, VAR_14, VAR_15 / 2))
   break;

  VAR_23->toggle = VAR_22.pulse;
  VAR_23->state = 129;
  return 0;

 case 129:
  if (!(VAR_23->header & VAR_11)) {
   FUNC_3(&VAR_21->dev, "RC6 invalid start bit\n");
   break;
  }

  VAR_23->state = 135;
  FUNC_2(&VAR_22, VAR_13);
  VAR_23->count = 0;
  VAR_23->body = 0;

  switch (FUNC_7(VAR_23)) {
  case 138:
   VAR_23->wanted_bits = VAR_2;
   break;
  case 137:
   VAR_23->wanted_bits = VAR_5;
   break;
  default:
   FUNC_3(&VAR_21->dev, "RC6 unknown mode\n");
   goto out;
  }
  goto again;

 case 135:
  if (FUNC_4(VAR_22.duration, VAR_7, VAR_15 / 2)) {

   if (VAR_23->count++ < VAR_0 * sizeof VAR_23->body) {
    VAR_23->body <<= 1;
    if (VAR_22.pulse)
     VAR_23->body |= 1;
   }
   VAR_23->state = 136;
   return 0;
  } else if (137 == FUNC_7(VAR_23) && !VAR_22.pulse &&
    FUNC_5(VAR_22.duration, VAR_12, VAR_15 / 2)) {
   VAR_23->state = 134;
   goto again;
  }
  break;

 case 136:
  if (VAR_23->count == VAR_23->wanted_bits)
   VAR_23->state = 134;
  else
   VAR_23->state = 135;

  FUNC_2(&VAR_22, VAR_6);
  goto again;

 case 134:
  if (VAR_22.pulse)
   break;

  switch (FUNC_7(VAR_23)) {
  case 138:
   VAR_24 = VAR_23->body;
   VAR_25 = VAR_23->toggle;
   VAR_26 = VAR_16;
   FUNC_3(&VAR_21->dev, "RC6(0) scancode 0x%04x (toggle: %u)\n",
    VAR_24, VAR_25);
   break;

  case 137:
   if (VAR_23->count > VAR_0 * sizeof VAR_23->body) {
    FUNC_3(&VAR_21->dev, "RC6 too many (%u) data bits\n",
     VAR_23->count);
    goto out;
   }

   VAR_24 = VAR_23->body;
   switch (VAR_23->count) {
   case 20:
    VAR_26 = VAR_17;
    VAR_25 = 0;
    break;
   case 24:
    VAR_26 = VAR_18;
    VAR_25 = 0;
    break;
   case 32:
    switch (VAR_24 & VAR_3) {
    case 140:
    case 141:
    case 139:
     VAR_26 = VAR_20;
     VAR_25 = !!(VAR_24 & VAR_4);
     VAR_24 &= ~VAR_4;
     break;
    default:
     VAR_26 = VAR_19;
     VAR_25 = 0;
     break;
    }
    break;
   default:
    FUNC_3(&VAR_21->dev, "RC6(6A) unsupported length\n");
    goto out;
   }

   FUNC_3(&VAR_21->dev, "RC6(6A) proto 0x%04x, scancode 0x%08x (toggle: %u)\n",
    VAR_26, VAR_24, VAR_25);
   break;
  default:
   FUNC_3(&VAR_21->dev, "RC6 unknown mode\n");
   goto out;
  }

  FUNC_8(VAR_21, VAR_26, VAR_24, VAR_25);
  VAR_23->state = 131;
  return 0;
 }

out:
 FUNC_3(&VAR_21->dev, "RC6 decode failed at state %i (%uus %s)\n",
  VAR_23->state, FUNC_1(VAR_22.duration), FUNC_0(VAR_22.pulse));
 VAR_23->state = 131;
 return -VAR_1;
}
