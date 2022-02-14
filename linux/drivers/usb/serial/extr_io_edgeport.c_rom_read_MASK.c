
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
 int VAR_3 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (int ,int ,int ,int,int,int,unsigned char*,int,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct usb_serial *VAR_4, __u16 VAR_5,
     __u16 VAR_6, __u16 VAR_7, __u8 *VAR_8)
{
 int VAR_9;
 __u16 VAR_10;
 unsigned char *VAR_11;

 VAR_11 = FUNC_1(64, VAR_2);
 if (!VAR_11)
  return -VAR_1;


 VAR_9 = 0;
 while (VAR_7 > 0) {
  if (VAR_7 > 64)
   VAR_10 = 64;
  else
   VAR_10 = VAR_7;
  VAR_9 = FUNC_3(VAR_4->dev,
     FUNC_4(VAR_4->dev, 0),
     VAR_3,
     0xC0, VAR_6, VAR_5, VAR_11,
     VAR_10, 300);
  if (VAR_9 < VAR_10) {
   if (VAR_9 >= 0)
    VAR_9 = -VAR_0;
   break;
  }
  FUNC_2(VAR_8, VAR_11, VAR_10);
  VAR_7 -= VAR_10;
  VAR_6 += VAR_10;
  VAR_8 += VAR_10;

  VAR_9 = 0;
 }

 FUNC_0(VAR_11);
 return VAR_9;
}
