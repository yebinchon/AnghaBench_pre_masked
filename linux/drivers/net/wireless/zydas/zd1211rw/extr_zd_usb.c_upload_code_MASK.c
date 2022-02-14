
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
struct usb_device {int dev; } ;
typedef int ret ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*,unsigned int) ;
 int FUNC_1 (int *,char*,unsigned int) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (size_t,int ) ;
 int FUNC_4 (int*,int const*,size_t) ;
 int FUNC_5 (struct usb_device*,int ,int ,int,size_t,int ,int*,int,int) ;
 int FUNC_6 (struct usb_device*,int ) ;
 int FUNC_7 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_8(struct usb_device *VAR_10,
 const u8 *VAR_11, size_t VAR_12, u16 VAR_13, int VAR_14)
{
 u8 *VAR_15;
 int VAR_16;



 VAR_15 = FUNC_3(VAR_3, VAR_2);
 if (!VAR_15) {
  VAR_16 = -VAR_1;
  goto error;
 }

 VAR_12 &= ~1;
 while (VAR_12 > 0) {
  size_t VAR_17 = VAR_12 <= VAR_3 ?
   VAR_12 : VAR_3;

  FUNC_0(&VAR_10->dev, "transfer size %zu\n", VAR_17);

  FUNC_4(VAR_15, VAR_11, VAR_17);
  VAR_16 = FUNC_5(VAR_10, FUNC_7(VAR_10, 0),
   VAR_8,
   VAR_6 | VAR_9,
   VAR_13, 0, VAR_15, VAR_17, 1000 );
  if (VAR_16 < 0) {
   FUNC_1(&VAR_10->dev,
          "USB control request for firmware upload"
          " failed. Error number %d\n", VAR_16);
   goto error;
  }
  VAR_17 = VAR_16 & ~1;

  VAR_12 -= VAR_17;
  VAR_11 += VAR_17;
  VAR_13 += VAR_17/sizeof(u16);
 }

 if (VAR_14 & VAR_4) {
  u8 VAR_18;


  VAR_16 = FUNC_5(VAR_10, FUNC_6(VAR_10, 0),
   VAR_7,
   VAR_5 | VAR_9,
   0, 0, VAR_15, sizeof(VAR_18), 5000 );
  if (VAR_16 != sizeof(VAR_18)) {
   FUNC_1(&VAR_10->dev,
    "control request firmware confirmation failed."
    " Return value %d\n", VAR_16);
   if (VAR_16 >= 0)
    VAR_16 = -VAR_0;
   goto error;
  }
  VAR_18 = VAR_15[0];
  if (VAR_18 & 0x80) {
   FUNC_1(&VAR_10->dev,
    "Internal error while downloading."
    " Firmware confirm return value %#04x\n",
    (unsigned int)VAR_18);
   VAR_16 = -VAR_0;
   goto error;
  }
  FUNC_0(&VAR_10->dev, "firmware confirm return value %#04x\n",
   (unsigned int)VAR_18);
 }

 VAR_16 = 0;
error:
 FUNC_2(VAR_15);
 return VAR_16;
}
