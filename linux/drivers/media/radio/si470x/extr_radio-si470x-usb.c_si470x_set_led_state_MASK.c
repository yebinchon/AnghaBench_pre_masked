
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si470x_device {unsigned char* usb_buf; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct si470x_device*,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_1(struct si470x_device *VAR_4,
  unsigned char VAR_5)
{
 int VAR_6;

 VAR_4->usb_buf[0] = VAR_2;
 VAR_4->usb_buf[1] = VAR_1;
 VAR_4->usb_buf[2] = VAR_5;

 VAR_6 = FUNC_0(VAR_4, VAR_4->usb_buf, VAR_3);

 return (VAR_6 < 0) ? -VAR_0 : 0;
}
