
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dev; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (unsigned char const*,int,int ) ;
 int FUNC_3 (struct usb_device*,int ,int ,int,int,int ,unsigned char*,int,int) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct usb_device *VAR_2, int VAR_3,
        const unsigned char *VAR_4, int VAR_5,
        __u8 VAR_6)
{
 int VAR_7;
 unsigned char *VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_1);

 if (!VAR_8) {
  FUNC_0(&VAR_2->dev, "kmalloc(%d) failed.\n", VAR_5);
  return -VAR_0;
 }


 VAR_7 = FUNC_3 (VAR_2, FUNC_4(VAR_2, 0), VAR_6, 0x40, VAR_3, 0, VAR_8, VAR_5, 300);
 FUNC_1 (VAR_8);
 return VAR_7;
}
