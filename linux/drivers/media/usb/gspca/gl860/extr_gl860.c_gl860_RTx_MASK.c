
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct usb_device {int dummy; } ;
struct gspca_dev {void* usb_buf; struct usb_device* dev; } ;
typedef int s32 ;


 int FUNC_0 (struct gspca_dev*,char*,int,int) ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,unsigned char,int ,int ,int ,int) ;
 int FUNC_4 (struct usb_device*,int ,int ,unsigned char,int ,int ,void*,int,int) ;
 int FUNC_5 (struct usb_device*,int ) ;
 int FUNC_6 (struct usb_device*,int ) ;

int FUNC_7(struct gspca_dev *VAR_0,
  unsigned char VAR_1, u32 VAR_2, u16 VAR_3, u16 VAR_4,
  s32 VAR_5, void *VAR_6)
{
 struct usb_device *VAR_7 = VAR_0->dev;
 s32 VAR_8 = 0;

 if (VAR_1 == 0x40) {
  if (VAR_5 > 0) {
   FUNC_1(VAR_0->usb_buf, VAR_6, VAR_5);
   VAR_8 = FUNC_4(VAR_7, FUNC_6(VAR_7, 0),
     VAR_2, VAR_1, VAR_3, VAR_4,
     VAR_0->usb_buf,
     VAR_5, 400 + 200 * (VAR_5 > 1));
  } else {
   VAR_8 = FUNC_4(VAR_7, FUNC_6(VAR_7, 0),
     VAR_2, VAR_1, VAR_3, VAR_4, ((void*)0), VAR_5, 400);
  }
 } else {
  if (VAR_5 > 0) {
   VAR_8 = FUNC_4(VAR_7, FUNC_5(VAR_7, 0),
     VAR_2, VAR_1, VAR_3, VAR_4,
     VAR_0->usb_buf,
     VAR_5, 400 + 200 * (VAR_5 > 1));
   FUNC_1(VAR_6, VAR_0->usb_buf, VAR_5);
  } else {
   VAR_8 = FUNC_4(VAR_7, FUNC_5(VAR_7, 0),
     VAR_2, VAR_1, VAR_3, VAR_4, ((void*)0), VAR_5, 400);
  }
 }

 if (VAR_8 < 0)
  FUNC_3("ctrl transfer failed %4d [p%02x r%d v%04x i%04x len%d]\n",
         VAR_8, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 else if (VAR_5 > 1 && VAR_8 < VAR_5)
  FUNC_0(VAR_0, "short ctrl transfer %d/%d\n", VAR_8, VAR_5);

 FUNC_2(1);

 return VAR_8;
}
