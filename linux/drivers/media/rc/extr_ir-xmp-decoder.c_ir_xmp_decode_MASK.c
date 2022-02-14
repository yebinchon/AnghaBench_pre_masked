
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct xmp_dec {int state; int count; int* durations; } ;
struct rc_dev {int dev; TYPE_1__* raw; } ;
struct ir_raw_event {int duration; int pulse; scalar_t__ reset; } ;
struct TYPE_2__ {struct xmp_dec xmp; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (struct ir_raw_event) ;
 int FUNC_6 (struct rc_dev*,int ,int,int ) ;
 int FUNC_7 (struct rc_dev*) ;

__attribute__((used)) static int FUNC_8(struct rc_dev *VAR_7, struct ir_raw_event VAR_8)
{
 struct xmp_dec *VAR_9 = &VAR_7->raw->xmp;

 if (!FUNC_5(VAR_8)) {
  if (VAR_8.reset)
   VAR_9->state = 130;
  return 0;
 }

 FUNC_2(&VAR_7->dev, "XMP decode started at state %d %d (%uus %s)\n",
  VAR_9->state, VAR_9->count, FUNC_1(VAR_8.duration), FUNC_0(VAR_8.pulse));

 switch (VAR_9->state) {

 case 130:
  if (!VAR_8.pulse)
   break;

  if (FUNC_3(VAR_8.duration, VAR_3, VAR_6 / 2)) {
   VAR_9->count = 0;
   VAR_9->state = 128;
  }

  return 0;

 case 129:
  if (!VAR_8.pulse)
   break;

  if (FUNC_3(VAR_8.duration, VAR_3, VAR_6 / 2))
   VAR_9->state = 128;

  return 0;

 case 128:
  if (VAR_8.pulse)
   break;

  if (FUNC_4(VAR_8.duration, VAR_5, VAR_4)) {
   int VAR_10, VAR_11;
   u8 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
   u32 *VAR_21;
   u32 VAR_22;

   if (VAR_9->count != 16) {
    FUNC_2(&VAR_7->dev, "received TRAILER period at index %d: %u\n",
     VAR_9->count, VAR_8.duration);
    VAR_9->state = 130;
    return -VAR_0;
   }

   VAR_21 = VAR_9->durations;





   VAR_10 = (VAR_21[3] - VAR_4) / 15 - 2000;
   if (VAR_10 < 50) {
    FUNC_2(&VAR_7->dev, "divider to small %d.\n",
     VAR_10);
    VAR_9->state = 130;
    return -VAR_0;
   }


   for (VAR_11 = 0; VAR_11 < 16; VAR_11++)
    VAR_21[VAR_11] = (VAR_21[VAR_11] - VAR_4) / VAR_10;
   VAR_19 = (15 + VAR_21[0] + VAR_21[1] + VAR_21[2] + VAR_21[3] +
    VAR_21[4] + VAR_21[5] + VAR_21[6] + VAR_21[7]) % 16;
   VAR_20 = (15 + VAR_21[8] + VAR_21[9] + VAR_21[10] + VAR_21[11] +
    VAR_21[12] + VAR_21[13] + VAR_21[14] + VAR_21[15]) % 16;

   if (VAR_19 != 15 || VAR_20 != 15) {
    FUNC_2(&VAR_7->dev, "checksum errors sum1=0x%X sum2=0x%X\n",
     VAR_19, VAR_20);
    VAR_9->state = 130;
    return -VAR_0;
   }

   VAR_13 = VAR_21[0] << 4 | VAR_21[2];
   VAR_14 = VAR_21[8] << 4 | VAR_21[11];
   VAR_16 = VAR_21[4] << 4 | VAR_21[5];
   VAR_12 = VAR_21[6] << 4 | VAR_21[7];
   VAR_15 = VAR_21[10];
   VAR_17 = VAR_21[12] << 4 | VAR_21[13];
   VAR_18 = VAR_21[14] << 4 | VAR_21[15];
   if (VAR_13 != VAR_14) {
    FUNC_2(&VAR_7->dev, "subaddress nibbles mismatch 0x%02X != 0x%02X\n",
     VAR_13, VAR_14);
    VAR_9->state = 130;
    return -VAR_0;
   }
   if (VAR_16 != 0x44)
    FUNC_2(&VAR_7->dev, "Warning: OEM nibbles 0x%02X. Expected 0x44\n",
     VAR_16);

   VAR_22 = VAR_12 << 24 | VAR_13 << 16 |
       VAR_17 << 8 | VAR_18;
   FUNC_2(&VAR_7->dev, "XMP scancode 0x%06x\n", VAR_22);

   if (VAR_15 == 0) {
    FUNC_6(VAR_7, VAR_1, VAR_22, 0);
   } else {
    FUNC_7(VAR_7);
    FUNC_2(&VAR_7->dev, "Repeat last key\n");
   }
   VAR_9->state = 130;

   return 0;

  } else if (FUNC_4(VAR_8.duration, VAR_2, VAR_4)) {

   if (VAR_9->count == 16) {
    FUNC_2(&VAR_7->dev, "received half frame pulse at index %d. Probably a final frame key-up event: %u\n",
     VAR_9->count, VAR_8.duration);





    VAR_9->count = 8;
   }

   else if (VAR_9->count != 8)
    FUNC_2(&VAR_7->dev, "received half frame pulse at index %d: %u\n",
     VAR_9->count, VAR_8.duration);
   VAR_9->state = 129;

   return 0;

  } else if (FUNC_4(VAR_8.duration, VAR_4, VAR_6)) {

   if (VAR_9->count == 16) {
    FUNC_2(&VAR_7->dev, "to many pulses (%d) ignoring: %u\n",
     VAR_9->count, VAR_8.duration);
    VAR_9->state = 130;
    return -VAR_0;
   }
   VAR_9->durations[VAR_9->count] = VAR_8.duration;
   VAR_9->count++;
   VAR_9->state = 129;

   return 0;

  }

  break;
 }

 FUNC_2(&VAR_7->dev, "XMP decode failed at count %d state %d (%uus %s)\n",
  VAR_9->count, VAR_9->state, FUNC_1(VAR_8.duration), FUNC_0(VAR_8.pulse));
 VAR_9->state = 130;
 return -VAR_0;
}
