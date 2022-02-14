
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct usb_serial {TYPE_1__* interface; int dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_serial*) ;
 int FUNC_1 (int *,char*,int ,int,int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (void*,void*,int) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,void*,int,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct usb_serial *VAR_5, u8 VAR_6, u16 VAR_7,
        void *VAR_8, int VAR_9)
{
 void *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(VAR_9, VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_11 = FUNC_5(VAR_5->dev, FUNC_6(VAR_5->dev, 0),
     VAR_0, VAR_6, VAR_7,
     FUNC_0(VAR_5), VAR_10, VAR_9,
     VAR_4);
 if (VAR_11 == VAR_9) {
  FUNC_4(VAR_8, VAR_10, VAR_9);
  VAR_11 = 0;
 } else {
  FUNC_1(&VAR_5->interface->dev,
   "failed to get vendor val 0x%04x size %d: %d\n", VAR_7,
   VAR_9, VAR_11);
  if (VAR_11 >= 0)
   VAR_11 = -VAR_1;
 }

 FUNC_2(VAR_10);

 return VAR_11;
}
