
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {unsigned char* ctrl_urb_buffer; int dev; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,unsigned char,unsigned char) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int ,int,int ,int ,unsigned char*,short,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct usb_usbvision*,int ) ;
 int FUNC_4 (struct usb_usbvision*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct usb_usbvision *VAR_9,
     unsigned char VAR_10, const char *VAR_11,
     short VAR_12)
{
 int VAR_13, VAR_14;
 int VAR_15;
 unsigned char *VAR_16 = VAR_9->ctrl_urb_buffer;
 unsigned char VAR_17;

 VAR_17 = (VAR_12 & 0x07) | 0x10;

 VAR_16[0] = VAR_10;
 VAR_16[1] = VAR_17;
 for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++)
  VAR_16[VAR_15 + 2] = VAR_11[VAR_15];

 for (VAR_14 = 5;;) {
  VAR_13 = FUNC_1(VAR_9->dev,
         FUNC_2(VAR_9->dev, 1),
         VAR_2,
         VAR_5 | VAR_7 |
         VAR_6, 0,
         (__u16) VAR_3, VAR_16,
         VAR_12 + 2, VAR_1);

  if (VAR_13 < 0)
   return VAR_13;

  VAR_13 = FUNC_4(VAR_9, VAR_4,
          (VAR_12 & 0x07) | 0x10);
  if (VAR_13 < 0)
   return VAR_13;


  do {
   VAR_13 = FUNC_3(VAR_9, VAR_4);
  } while (VAR_13 > 0 && ((VAR_13 & 0x10) != 0));
  if (VAR_13 < 0)
   return VAR_13;

  if ((VAR_13 & 0x20) == 0)
   break;


  FUNC_4(VAR_9, VAR_4, 0x00);

  if (--VAR_14 < 0)
   return -1;

 }

 if (VAR_8 & VAR_0) {
  int VAR_18;

  for (VAR_18 = 0; VAR_18 < VAR_12; VAR_18++)
   FUNC_0(VAR_0, "wrote %x at address %x", (unsigned char)VAR_11[VAR_18], VAR_10);
 }
 return VAR_12;
}
