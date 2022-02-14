
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sharp_dec {int state; int count; int bits; scalar_t__ pulse_len; } ;
struct rc_dev {int dev; TYPE_1__* raw; } ;
struct ir_raw_event {int pulse; scalar_t__ duration; scalar_t__ reset; } ;
struct TYPE_2__ {struct sharp_dec sharp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;






 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,int,...) ;
 int FUNC_4 (scalar_t__,int,int) ;
 int FUNC_5 (scalar_t__,int ,int) ;
 int FUNC_6 (struct ir_raw_event) ;
 int FUNC_7 (struct rc_dev*,int ,int,int ) ;

__attribute__((used)) static int FUNC_8(struct rc_dev *VAR_8, struct ir_raw_event VAR_9)
{
 struct sharp_dec *VAR_10 = &VAR_8->raw->sharp;
 u32 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 if (!FUNC_6(VAR_9)) {
  if (VAR_9.reset)
   VAR_10->state = 130;
  return 0;
 }

 FUNC_3(&VAR_8->dev, "Sharp decode started at state %d (%uus %s)\n",
  VAR_10->state, FUNC_1(VAR_9.duration), FUNC_0(VAR_9.pulse));

 switch (VAR_10->state) {

 case 130:
  if (!VAR_9.pulse)
   break;

  if (!FUNC_4(VAR_9.duration, VAR_4,
          VAR_4 / 2))
   break;

  VAR_10->count = 0;
  VAR_10->pulse_len = VAR_9.duration;
  VAR_10->state = 132;
  return 0;

 case 133:
  if (!VAR_9.pulse)
   break;

  if (!FUNC_4(VAR_9.duration, VAR_4,
          VAR_4 / 2))
   break;

  VAR_10->pulse_len = VAR_9.duration;
  VAR_10->state = 132;
  return 0;

 case 132:
  if (VAR_9.pulse)
   break;

  VAR_10->bits <<= 1;
  if (FUNC_4(VAR_10->pulse_len + VAR_9.duration, VAR_3,
         VAR_4 * 2))
   VAR_10->bits |= 1;
  else if (!FUNC_4(VAR_10->pulse_len + VAR_9.duration,
        VAR_2, VAR_4 * 2))
   break;
  VAR_10->count++;

  if (VAR_10->count == VAR_6 ||
      VAR_10->count == VAR_6 * 2)
   VAR_10->state = 129;
  else
   VAR_10->state = 133;

  return 0;

 case 129:
  if (!VAR_9.pulse)
   break;

  if (!FUNC_4(VAR_9.duration, VAR_4,
          VAR_4 / 2))
   break;

  if (VAR_10->count == VAR_6) {

   if ((VAR_10->bits & 0x3) != 0x2 &&

       (VAR_10->bits & 0x3) != 0x0)
    break;
   VAR_10->state = 131;
  } else {
   VAR_10->state = 128;
  }
  return 0;

 case 131:
  if (VAR_9.pulse)
   break;

  if (!FUNC_4(VAR_9.duration, VAR_5,
          VAR_5 / 4))
   break;

  VAR_10->state = 133;

  return 0;

 case 128:
  if (VAR_9.pulse)
   break;

  if (!FUNC_5(VAR_9.duration, VAR_7,
    VAR_4 / 2))
   break;


  VAR_11 = (VAR_10->bits >> 15) & 0x7fff;
  VAR_12 = VAR_10->bits & 0x7fff;
  if ((VAR_11 ^ VAR_12) != 0x3ff) {
   FUNC_3(&VAR_8->dev,
    "Sharp checksum error: received 0x%04x, 0x%04x\n",
    VAR_11, VAR_12);
   break;
  }

  VAR_13 = FUNC_2((VAR_11 >> 7) & 0xf8);
  VAR_14 = FUNC_2((VAR_11 >> 2) & 0xff);

  VAR_15 = VAR_13 << 8 | VAR_14;
  FUNC_3(&VAR_8->dev, "Sharp scancode 0x%04x\n", VAR_15);

  FUNC_7(VAR_8, VAR_1, VAR_15, 0);
  VAR_10->state = 130;
  return 0;
 }

 FUNC_3(&VAR_8->dev, "Sharp decode failed at count %d state %d (%uus %s)\n",
  VAR_10->count, VAR_10->state, FUNC_1(VAR_9.duration), FUNC_0(VAR_9.pulse));
 VAR_10->state = 130;
 return -VAR_0;
}
