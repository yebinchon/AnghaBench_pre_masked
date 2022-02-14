
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rcmm_dec {int state; int count; int bits; } ;
struct rc_dev {int enabled_protocols; TYPE_1__* raw; } ;
struct ir_raw_event {int duration; int pulse; scalar_t__ reset; } ;
struct TYPE_2__ {struct rcmm_dec rcmm; } ;


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





 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct ir_raw_event) ;
 int FUNC_2 (struct rc_dev*,int ,int,int) ;
 int FUNC_3 (struct rc_dev*,struct rcmm_dec*) ;
 int FUNC_4 (struct rcmm_dec*) ;

__attribute__((used)) static int FUNC_5(struct rc_dev *VAR_11, struct ir_raw_event VAR_12)
{
 struct rcmm_dec *VAR_13 = &VAR_11->raw->rcmm;
 u32 VAR_14;
 u8 VAR_15;
 int VAR_16;

 if (!(VAR_11->enabled_protocols & (VAR_9 |
       VAR_8 |
       VAR_7)))
  return 0;

 if (!FUNC_1(VAR_12)) {
  if (VAR_12.reset)
   VAR_13->state = 130;
  return 0;
 }

 switch (VAR_13->state) {
 case 130:
  if (!VAR_12.pulse)
   break;

  if (!FUNC_0(VAR_12.duration, VAR_1, VAR_6 / 2))
   break;

  VAR_13->state = 129;
  VAR_13->count = 0;
  VAR_13->bits = 0;
  return 0;

 case 129:
  if (VAR_12.pulse)
   break;

  if (!FUNC_0(VAR_12.duration, VAR_2, VAR_6 / 2))
   break;

  VAR_13->state = 132;
  return 0;

 case 132:
  if (!VAR_12.pulse)
   break;

  if (!FUNC_0(VAR_12.duration, VAR_6, VAR_6 / 2))
   break;

  VAR_13->state = 128;
  return 0;

 case 128:
  if (VAR_12.pulse)
   break;

  if (FUNC_0(VAR_12.duration, VAR_2, VAR_6 / 2))
   VAR_16 = 0;
  else if (FUNC_0(VAR_12.duration, VAR_3, VAR_6 / 2))
   VAR_16 = 1;
  else if (FUNC_0(VAR_12.duration, VAR_4, VAR_6 / 2))
   VAR_16 = 2;
  else if (FUNC_0(VAR_12.duration, VAR_5, VAR_6 / 2))
   VAR_16 = 3;
  else
   VAR_16 = -1;

  if (VAR_16 == -1) {
   if (!FUNC_3(VAR_11, VAR_13))
    return 0;
   break;
  }

  VAR_13->bits <<= 2;
  VAR_13->bits |= VAR_16;

  VAR_13->count += 2;

  if (VAR_13->count < 32)
   VAR_13->state = 132;
  else
   VAR_13->state = 131;

  return 0;

 case 131:
  if (!VAR_12.pulse)
   break;

  if (!FUNC_0(VAR_12.duration, VAR_6, VAR_6 / 2))
   break;

  if (FUNC_4(VAR_13)) {
   VAR_15 = !!(0x8000 & VAR_13->bits);
   VAR_14 = VAR_13->bits & ~0x8000;
  } else {
   VAR_15 = 0;
   VAR_14 = VAR_13->bits;
  }

  if (VAR_11->enabled_protocols & VAR_9) {
   FUNC_2(VAR_11, VAR_10, VAR_14, VAR_15);
   VAR_13->state = 130;
   return 0;
  }

  break;
 }

 VAR_13->state = 130;
 return -VAR_0;
}
