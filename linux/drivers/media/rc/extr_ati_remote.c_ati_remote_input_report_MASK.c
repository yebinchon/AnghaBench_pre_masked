
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct urb {int actual_length; TYPE_1__* dev; struct ati_remote* context; } ;
struct input_dev {int dummy; } ;
struct ati_remote {unsigned char* inbuf; unsigned long old_jiffies; unsigned char old_data; int repeat_count; unsigned long first_jiffies; TYPE_2__* interface; int rdev; struct input_dev* idev; } ;
struct TYPE_6__ {scalar_t__ kind; unsigned char data; int code; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ati_remote*) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 TYPE_3__* VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,char*,int,...) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 int FUNC_4 (struct input_dev*,int ,int,int) ;
 int FUNC_5 (struct input_dev*,int ,char) ;
 int FUNC_6 (struct input_dev*) ;
 void* VAR_11 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,unsigned char) ;
 int FUNC_9 (int ,int ,unsigned char,unsigned char) ;
 int FUNC_10 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_11 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct urb *VAR_14)
{
 struct ati_remote *VAR_15 = VAR_14->context;
 unsigned char *VAR_16= VAR_15->inbuf;
 struct input_dev *VAR_17 = VAR_15->idev;
 int VAR_18 = -1;
 int VAR_19;
 unsigned char VAR_20;
 u32 VAR_21 = VAR_1;
 int VAR_22;
 if ( VAR_14->actual_length != 4 || VAR_16[0] != 0x14 ||
      VAR_16[1] != (unsigned char)(VAR_16[2] + VAR_16[3] + 0xD5) ||
      (VAR_16[3] & 0x0f) != 0x00) {
  FUNC_1(&VAR_14->dev->dev, VAR_16, VAR_14->actual_length);
  return;
 }

 if (VAR_16[1] != ((VAR_16[2] + VAR_16[3] + 0xd5) & 0xff)) {
  FUNC_2(&VAR_15->interface->dev,
   "wrong checksum in input: %*ph\n", 4, VAR_16);
  return;
 }



 VAR_19 = (VAR_16[3] >> 4) & 0x0f;
 if (VAR_10 & (1 << (VAR_19 + 1))) {
  FUNC_2(&VAR_15->interface->dev,
   "Masked input from channel 0x%02x: data %02x, mask= 0x%02lx\n",
   VAR_19, VAR_16[2], VAR_10);
  return;
 }





 VAR_20 = VAR_16[2] & 0x7f;

 FUNC_2(&VAR_15->interface->dev,
  "channel 0x%02x; key data %02x, scancode %02x\n",
  VAR_19, VAR_16[2], VAR_20);

 if (VAR_20 >= 0x70) {






  VAR_21 = FUNC_8(VAR_15->rdev,
       VAR_20 & 0x78);

  if (VAR_21 == VAR_1) {





   for (VAR_22 = 0; VAR_9[VAR_22].kind != VAR_3; VAR_22++) {
    if (VAR_20 == VAR_9[VAR_22].data) {
     VAR_18 = VAR_22;
     break;
    }
   }
  }
 }

 if (VAR_18 >= 0 && VAR_9[VAR_18].kind == VAR_5) {




  FUNC_4(VAR_17, VAR_0, VAR_9[VAR_18].code,
   !(VAR_16[2] & 1));

  VAR_15->old_jiffies = VAR_11;

 } else if (VAR_18 < 0 || VAR_9[VAR_18].kind == VAR_4) {
  unsigned long VAR_23 = VAR_11;


  if (VAR_15->old_data == VAR_16[2] &&
      FUNC_11(VAR_23, VAR_15->old_jiffies +
         FUNC_7(VAR_13))) {
   VAR_15->repeat_count++;
  } else {
   VAR_15->repeat_count = 0;
   VAR_15->first_jiffies = VAR_23;
  }

  VAR_15->old_jiffies = VAR_23;





  if (VAR_15->repeat_count > 0 &&
      (VAR_15->repeat_count < 5 ||
       FUNC_11(VAR_23, VAR_15->first_jiffies +
          FUNC_7(VAR_12))))
   return;

  if (VAR_18 >= 0) {
   FUNC_4(VAR_17, VAR_0, VAR_9[VAR_18].code, 1);
   FUNC_4(VAR_17, VAR_0, VAR_9[VAR_18].code, 0);
  } else {

   int VAR_24 = 1;

   if (VAR_21 != VAR_1) {






    VAR_24 = (VAR_20 & 0x07) + 1;
    VAR_20 &= 0x78;
   }

   while (VAR_24--) {





    FUNC_9(VAR_15->rdev,
           VAR_6,
           VAR_20, VAR_16[2]);
    FUNC_10(VAR_15->rdev);
   }
   goto nosync;
  }

 } else if (VAR_9[VAR_18].kind == VAR_2) {
  signed char VAR_25 = VAR_9[VAR_18].code >> 8;
  signed char VAR_26 = VAR_9[VAR_18].code & 255;






  int VAR_27 = FUNC_0(VAR_15);
  if (VAR_25)
   FUNC_5(VAR_17, VAR_7, VAR_25 * VAR_27);
  if (VAR_26)
   FUNC_5(VAR_17, VAR_8, VAR_26 * VAR_27);
  VAR_15->old_jiffies = VAR_11;

 } else {
  FUNC_3(&VAR_15->interface->dev, "ati_remote kind=%d\n",
   VAR_9[VAR_18].kind);
  return;
 }
 FUNC_6(VAR_17);
nosync:
 VAR_15->old_data = VAR_16[2];
}
