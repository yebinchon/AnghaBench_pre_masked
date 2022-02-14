
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wbcir_data {int irq; scalar_t__ wbase; struct rc_dev* dev; } ;
struct TYPE_2__ {int data; int mask; } ;
struct rc_dev {int wakeup_protocol; TYPE_1__ scancode_wakeup_filter; } ;
struct device {int dummy; } ;
struct pnp_dev {struct device dev; } ;
typedef int match ;
typedef int mask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (scalar_t__,int*,int) ;
 struct wbcir_data* FUNC_6 (struct pnp_dev*) ;
 int FUNC_7 (scalar_t__,int,int) ;
 int FUNC_8 (struct wbcir_data*,int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void
FUNC_10(struct pnp_dev *VAR_14)
{
 struct device *VAR_15 = &VAR_14->dev;
 struct wbcir_data *VAR_16 = FUNC_6(VAR_14);
 struct rc_dev *VAR_17 = VAR_16->dev;
 bool VAR_18 = 1;
 u8 VAR_19[11];
 u8 VAR_20[11];
 u8 VAR_21 = 0;
 u8 VAR_22;
 u32 VAR_23 = VAR_17->scancode_wakeup_filter.data;
 u32 VAR_24 = VAR_17->scancode_wakeup_filter.mask;
 int VAR_25;

 FUNC_3(VAR_19, 0, sizeof(VAR_19));
 FUNC_3(VAR_20, 0, sizeof(VAR_20));

 if (!VAR_24 || !FUNC_1(VAR_15)) {
  VAR_18 = 0;
  goto finish;
 }

 switch (VAR_17->wakeup_protocol) {
 case 132:

  VAR_20[0] = (VAR_24 & 0x003f);
  VAR_20[0] |= (VAR_24 & 0x0300) >> 2;
  VAR_20[1] = (VAR_24 & 0x1c00) >> 10;
  if (VAR_24 & 0x0040)
   VAR_19[1] |= 0x10;

  VAR_19[0] = (VAR_23 & 0x003F);
  VAR_19[0] |= (VAR_23 & 0x0300) >> 2;
  VAR_19[1] = (VAR_23 & 0x1c00) >> 10;
  if (!(VAR_23 & 0x0040))
   VAR_19[1] |= 0x10;

  VAR_22 = VAR_1;
  break;

 case 135:
  VAR_20[1] = FUNC_0(VAR_24);
  VAR_20[0] = VAR_20[1];
  VAR_20[3] = FUNC_0(VAR_24 >> 8);
  VAR_20[2] = VAR_20[3];

  VAR_19[1] = FUNC_0(VAR_23);
  VAR_19[0] = ~VAR_19[1];
  VAR_19[3] = FUNC_0(VAR_23 >> 8);
  VAR_19[2] = ~VAR_19[3];

  VAR_22 = VAR_0;
  break;

 case 133:
  VAR_20[1] = FUNC_0(VAR_24);
  VAR_20[0] = VAR_20[1];
  VAR_20[2] = FUNC_0(VAR_24 >> 8);
  VAR_20[3] = FUNC_0(VAR_24 >> 16);

  VAR_19[1] = FUNC_0(VAR_23);
  VAR_19[0] = ~VAR_19[1];
  VAR_19[2] = FUNC_0(VAR_23 >> 8);
  VAR_19[3] = FUNC_0(VAR_23 >> 16);

  VAR_22 = VAR_0;
  break;

 case 134:
  VAR_20[0] = FUNC_0(VAR_24);
  VAR_20[1] = FUNC_0(VAR_24 >> 8);
  VAR_20[2] = FUNC_0(VAR_24 >> 16);
  VAR_20[3] = FUNC_0(VAR_24 >> 24);

  VAR_19[0] = FUNC_0(VAR_23);
  VAR_19[1] = FUNC_0(VAR_23 >> 8);
  VAR_19[2] = FUNC_0(VAR_23 >> 16);
  VAR_19[3] = FUNC_0(VAR_23 >> 24);

  VAR_22 = VAR_0;
  break;

 case 131:

  VAR_19[0] = FUNC_9(VAR_23 >> 0);
  VAR_20[0] = FUNC_9(VAR_24 >> 0);
  VAR_19[1] = FUNC_9(VAR_23 >> 4);
  VAR_20[1] = FUNC_9(VAR_24 >> 4);


  VAR_19[2] = FUNC_9(VAR_23 >> 8);
  VAR_20[2] = FUNC_9(VAR_24 >> 8);
  VAR_19[3] = FUNC_9(VAR_23 >> 12);
  VAR_20[3] = FUNC_9(VAR_24 >> 12);


  VAR_19[4] = 0x50;
  VAR_20[4] = 0xF0;
  VAR_19[5] = 0x09;
  VAR_20[5] = 0x0F;

  VAR_21 = 44;
  VAR_22 = VAR_2;
  break;

 case 130:
 case 129:
 case 128:
  VAR_25 = 0;


  VAR_19[VAR_25] = FUNC_9(VAR_23 >> 0);
  VAR_20[VAR_25++] = FUNC_9(VAR_24 >> 0);
  VAR_19[VAR_25] = FUNC_9(VAR_23 >> 4);
  VAR_20[VAR_25++] = FUNC_9(VAR_24 >> 4);


  VAR_19[VAR_25] = FUNC_9(VAR_23 >> 8);
  VAR_20[VAR_25++] = FUNC_9(VAR_24 >> 8);
  VAR_19[VAR_25] = FUNC_9(VAR_23 >> 12);
  VAR_20[VAR_25++] = FUNC_9(VAR_24 >> 12);


  VAR_19[VAR_25] = FUNC_9(VAR_23 >> 16);
  VAR_20[VAR_25++] = FUNC_9(VAR_24 >> 16);

  if (VAR_17->wakeup_protocol == VAR_3) {
   VAR_21 = 52;
  } else {
   VAR_19[VAR_25] = FUNC_9(VAR_23 >> 20);
   VAR_20[VAR_25++] = FUNC_9(VAR_24 >> 20);

   if (VAR_17->wakeup_protocol == 130) {
    VAR_21 = 60;
   } else {

    VAR_19[VAR_25] = FUNC_9(VAR_23 >> 24);
    VAR_20[VAR_25++] = FUNC_9(VAR_24 >> 24);
    VAR_19[VAR_25] = FUNC_9(VAR_23 >> 28);
    VAR_20[VAR_25++] = FUNC_9(VAR_24 >> 28);
    VAR_21 = 76;
   }
  }


  VAR_19[VAR_25] = 0x93;
  VAR_20[VAR_25++] = 0xFF;
  VAR_19[VAR_25] = 0x0A;
  VAR_20[VAR_25++] = 0x0F;
  VAR_22 = VAR_2;
  break;
 default:
  VAR_18 = 0;
  break;
 }

finish:
 if (VAR_18) {

  FUNC_7(VAR_16->wbase + VAR_12,
          VAR_5 | VAR_7,
          0x3F);
  FUNC_5(VAR_16->wbase + VAR_10, VAR_19, 11);
  FUNC_7(VAR_16->wbase + VAR_12,
          VAR_6 | VAR_7,
          0x3F);
  FUNC_5(VAR_16->wbase + VAR_10, VAR_20, 11);


  FUNC_4(VAR_21, VAR_16->wbase + VAR_8);


  FUNC_7(VAR_16->wbase + VAR_13, 0x17, 0x17);


  FUNC_7(VAR_16->wbase + VAR_11, 0x01, 0x07);


  FUNC_7(VAR_16->wbase + VAR_9,
          (VAR_22 << 4) | 0x01, 0x31);

 } else {

  FUNC_7(VAR_16->wbase + VAR_11, 0x00, 0x07);


  FUNC_7(VAR_16->wbase + VAR_9, 0x00, 0x01);
 }







 FUNC_8(VAR_16, VAR_4);
 FUNC_2(VAR_16->irq);
}
