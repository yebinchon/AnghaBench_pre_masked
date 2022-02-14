
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_12__ {int idProduct; } ;
struct usb_device {TYPE_5__ descriptor; int dev; } ;
struct firmware {int size; int data; } ;
struct TYPE_14__ {int * i2c_algo; TYPE_4__* adapter; } ;
struct TYPE_8__ {int rc_codes; } ;
struct TYPE_9__ {TYPE_1__ core; } ;
struct TYPE_13__ {TYPE_2__ rc; } ;
struct TYPE_11__ {TYPE_3__* fe; } ;
struct TYPE_10__ {int * tuner_attach; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int VAR_6 ;
 int VAR_7 ;
 TYPE_7__ VAR_8 ;
 int VAR_9 ;
 TYPE_6__ VAR_10 ;
 int FUNC_0 (struct usb_device*,int,int,int ,int*,int,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_11 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct firmware const*) ;
 int FUNC_9 (struct firmware const**,int ,int *) ;

__attribute__((used)) static int FUNC_10(struct usb_device *VAR_12,
   const struct firmware *VAR_13)
{
 u8 *VAR_14, *VAR_15;
 int VAR_16 = 0, VAR_17;
 u8 VAR_18;
 u8 VAR_19[] = {0, 0, 0, 0, 0, 0, 0};
 const struct firmware *VAR_20;

 switch (FUNC_5(VAR_12->descriptor.idProduct)) {
 case 0x2101:
  VAR_16 = FUNC_9(&VAR_20, VAR_0, &VAR_12->dev);
  if (VAR_16 != 0) {
   FUNC_1(VAR_11, VAR_0);
   return VAR_16;
  }
  break;
 default:
  VAR_20 = VAR_13;
  break;
 }
 FUNC_2("start downloading DW210X firmware");
 VAR_15 = FUNC_4(VAR_20->size, VAR_4);
 VAR_18 = 1;

 FUNC_0(VAR_12, 0xa0, 0x7f92, 0, &VAR_18, 1, VAR_2);
 FUNC_0(VAR_12, 0xa0, 0xe600, 0, &VAR_18, 1, VAR_2);

 if (VAR_15 != ((void*)0)) {
  FUNC_6(VAR_15, VAR_20->data, VAR_20->size);
  for (VAR_17 = 0; VAR_17 < VAR_20->size; VAR_17 += 0x40) {
   VAR_14 = (u8 *) VAR_15 + VAR_17;
   if (FUNC_0(VAR_12, 0xa0, VAR_17, 0, VAR_14 , 0x40,
     VAR_2) != 0x40) {
    FUNC_1("error while transferring firmware");
    VAR_16 = -VAR_3;
    break;
   }
  }

  VAR_18 = 0;
  if (VAR_16 || FUNC_0(VAR_12, 0xa0, 0x7f92, 0, &VAR_18, 1,
     VAR_2) != 1) {
   FUNC_1("could not restart the USB controller CPU.");
   VAR_16 = -VAR_3;
  }
  if (VAR_16 || FUNC_0(VAR_12, 0xa0, 0xe600, 0, &VAR_18, 1,
     VAR_2) != 1) {
   FUNC_1("could not restart the USB controller CPU.");
   VAR_16 = -VAR_3;
  }

  switch (FUNC_5(VAR_12->descriptor.idProduct)) {
  case 128:
   VAR_10.rc.core.rc_codes = VAR_5;

  case 131:
   VAR_18 = 1;
   FUNC_0(VAR_12, 0xc4, 0x0000, 0, &VAR_18, 1,
     VAR_2);

  case 130:
   VAR_18 = 0;
   FUNC_0(VAR_12, 0xbf, 0x0040, 0, &VAR_18, 0,
     VAR_2);
   break;
  case 129:
  case 132:
   FUNC_0(VAR_12, 0xbf, 0x0040, 0, &VAR_18, 0,
     VAR_2);
   FUNC_0(VAR_12, 0xb9, 0x0000, 0, &VAR_19[0], 2,
     VAR_1);

   FUNC_0(VAR_12, 0xb5, 0, 0, &VAR_19[0], 2,
     VAR_1);
   if ((VAR_19[0] == 0xa1) || (VAR_19[0] == 0x80)) {
    VAR_8.i2c_algo = &VAR_7;
    VAR_8.adapter->fe[0].tuner_attach = &VAR_9;
    break;
   } else {

    VAR_19[0] = 0xd0;
    VAR_19[1] = 1;
    VAR_19[2] = 0;
    FUNC_0(VAR_12, 0xc2, 0, 0, &VAR_19[0], 3,
      VAR_2);
    FUNC_0(VAR_12, 0xc3, 0xd1, 0, &VAR_19[0], 3,
      VAR_1);
    if (VAR_19[2] == 0x11) {
     VAR_8.i2c_algo = &VAR_6;
     break;
    }
   }

  case 0x2101:
   FUNC_0(VAR_12, 0xbc, 0x0030, 0, &VAR_19[0], 2,
     VAR_1);
   FUNC_0(VAR_12, 0xba, 0x0000, 0, &VAR_19[0], 7,
     VAR_1);
   FUNC_0(VAR_12, 0xba, 0x0000, 0, &VAR_19[0], 7,
     VAR_1);
   FUNC_0(VAR_12, 0xb9, 0x0000, 0, &VAR_19[0], 2,
     VAR_1);
   break;
  }

  FUNC_7(100);
  FUNC_3(VAR_15);
 }

 if (FUNC_5(VAR_12->descriptor.idProduct) == 0x2101)
  FUNC_8(VAR_20);
 return VAR_16;
}
