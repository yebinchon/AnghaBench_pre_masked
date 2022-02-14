
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rc_dev {int enabled_protocols; int dev; TYPE_1__* raw; } ;
struct rc5_dec {int state; int count; int bits; int is_rc5x; } ;
struct ir_raw_event {int pulse; int duration; scalar_t__ reset; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;
struct TYPE_2__ {struct rc5_dec rc5; } ;


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





 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ir_raw_event*,int) ;
 int FUNC_3 (int *,char*,int,int,int,...) ;
 int FUNC_4 (int ,int,int) ;
 scalar_t__ FUNC_5 (int ,int,int) ;
 int FUNC_6 (struct ir_raw_event) ;
 int FUNC_7 (struct rc_dev*,int,int,int) ;

__attribute__((used)) static int FUNC_8(struct rc_dev *VAR_16, struct ir_raw_event VAR_17)
{
 struct rc5_dec *VAR_18 = &VAR_16->raw->rc5;
 u8 VAR_19;
 u32 VAR_20;
 enum rc_proto VAR_21;

 if (!FUNC_6(VAR_17)) {
  if (VAR_17.reset)
   VAR_18->state = 128;
  return 0;
 }

 if (!FUNC_5(VAR_17.duration, VAR_9, VAR_9 / 2))
  goto out;

again:
 FUNC_3(&VAR_16->dev, "RC5(x/sz) decode started at state %i (%uus %s)\n",
  VAR_18->state, FUNC_1(VAR_17.duration), FUNC_0(VAR_17.pulse));

 if (!FUNC_5(VAR_17.duration, VAR_9, VAR_9 / 2))
  return 0;

 switch (VAR_18->state) {

 case 128:
  if (!VAR_17.pulse)
   break;

  VAR_18->state = 131;
  VAR_18->count = 1;
  FUNC_2(&VAR_17, VAR_5);
  goto again;

 case 131:
  if (!VAR_17.pulse && FUNC_5(VAR_17.duration, VAR_8, VAR_9 / 2)) {
   VAR_18->state = 129;
   goto again;
  }

  if (!FUNC_4(VAR_17.duration, VAR_5, VAR_9 / 2))
   break;

  VAR_18->bits <<= 1;
  if (!VAR_17.pulse)
   VAR_18->bits |= 1;
  VAR_18->count++;
  VAR_18->state = 132;
  return 0;

 case 132:
  if (VAR_18->count == VAR_0)
   VAR_18->state = 130;
  else
   VAR_18->state = 131;

  FUNC_2(&VAR_17, VAR_4);
  goto again;

 case 130:
  if (!VAR_17.pulse && FUNC_5(VAR_17.duration, VAR_3, VAR_9 / 2)) {
   VAR_18->is_rc5x = 1;
   FUNC_2(&VAR_17, VAR_3);
  } else
   VAR_18->is_rc5x = 0;
  VAR_18->state = 131;
  goto again;

 case 129:
  if (VAR_17.pulse)
   break;

  if (VAR_18->is_rc5x && VAR_18->count == VAR_2) {

   u8 VAR_22, VAR_23, VAR_24;
   if (!(VAR_16->enabled_protocols & VAR_11)) {
    VAR_18->state = 128;
    return 0;
   }
   VAR_22 = (VAR_18->bits & 0x0003F) >> 0;
   VAR_23 = (VAR_18->bits & 0x00FC0) >> 6;
   VAR_24 = (VAR_18->bits & 0x1F000) >> 12;
   VAR_19 = (VAR_18->bits & 0x20000) ? 1 : 0;
   VAR_23 += (VAR_18->bits & 0x40000) ? 0 : 0x40;
   VAR_20 = VAR_24 << 16 | VAR_23 << 8 | VAR_22;
   VAR_21 = VAR_14;

  } else if (!VAR_18->is_rc5x && VAR_18->count == VAR_6) {

   u8 VAR_25, VAR_26;
   if (!(VAR_16->enabled_protocols & VAR_10)) {
    VAR_18->state = 128;
    return 0;
   }
   VAR_25 = (VAR_18->bits & 0x0003F) >> 0;
   VAR_26 = (VAR_18->bits & 0x007C0) >> 6;
   VAR_19 = (VAR_18->bits & 0x00800) ? 1 : 0;
   VAR_25 += (VAR_18->bits & 0x01000) ? 0 : 0x40;
   VAR_20 = VAR_26 << 8 | VAR_25;
   VAR_21 = VAR_13;

  } else if (!VAR_18->is_rc5x && VAR_18->count == VAR_7) {

   u8 VAR_27, VAR_28;
   if (!(VAR_16->enabled_protocols & VAR_12)) {
    VAR_18->state = 128;
    return 0;
   }
   VAR_27 = (VAR_18->bits & 0x0003F) >> 0;
   VAR_28 = (VAR_18->bits & 0x02FC0) >> 6;
   VAR_19 = (VAR_18->bits & 0x01000) ? 1 : 0;
   VAR_20 = VAR_28 << 6 | VAR_27;
   VAR_21 = VAR_15;

  } else
   break;

  FUNC_3(&VAR_16->dev, "RC5(x/sz) scancode 0x%06x (p: %u, t: %u)\n",
   VAR_20, VAR_21, VAR_19);

  FUNC_7(VAR_16, VAR_21, VAR_20, VAR_19);
  VAR_18->state = 128;
  return 0;
 }

out:
 FUNC_3(&VAR_16->dev, "RC5(x/sz) decode failed at state %i count %d (%uus %s)\n",
  VAR_18->state, VAR_18->count, FUNC_1(VAR_17.duration), FUNC_0(VAR_17.pulse));
 VAR_18->state = 128;
 return -VAR_1;
}
