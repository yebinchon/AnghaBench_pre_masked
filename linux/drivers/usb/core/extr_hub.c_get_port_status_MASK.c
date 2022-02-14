
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct usb_device*,int ,int ,int,int ,int,void*,int ,int ) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_7, int VAR_8,
      void *VAR_9, u16 VAR_10, u16 VAR_11)
{
 int VAR_12, VAR_13 = -VAR_1;

 for (VAR_12 = 0; VAR_12 < VAR_5 &&
   (VAR_13 == -VAR_1 || VAR_13 == -VAR_0); VAR_12++) {
  VAR_13 = FUNC_0(VAR_7, FUNC_1(VAR_7, 0),
   VAR_3, VAR_2 | VAR_4, VAR_10,
   VAR_8, VAR_9, VAR_11, VAR_6);
 }
 return VAR_13;
}
