
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dev; } ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned char*,int const*,int) ;
 int FUNC_3 (int ,int ,int ,int,int,int,unsigned char*,int,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct usb_serial *VAR_3, __u16 VAR_4, __u16 VAR_5,
     __u16 VAR_6, const __u8 *VAR_7)
{
 int VAR_8;
 __u16 VAR_9;
 unsigned char *VAR_10;

 VAR_10 = FUNC_1(64, VAR_1);
 if (!VAR_10)
  return -VAR_0;


 VAR_8 = 0;
 while (VAR_6 > 0) {
  if (VAR_6 > 64)
   VAR_9 = 64;
  else
   VAR_9 = VAR_6;
  FUNC_2(VAR_10, VAR_7, VAR_9);
  VAR_8 = FUNC_3(VAR_3->dev,
     FUNC_4(VAR_3->dev, 0),
     VAR_2, 0x40,
     VAR_5, VAR_4,
     VAR_10, VAR_9, 300);
  if (VAR_8 < 0)
   break;
  VAR_6 -= VAR_9;
  VAR_5 += VAR_9;
  VAR_7 += VAR_9;
 }

 FUNC_0(VAR_10);
 return VAR_8;
}
