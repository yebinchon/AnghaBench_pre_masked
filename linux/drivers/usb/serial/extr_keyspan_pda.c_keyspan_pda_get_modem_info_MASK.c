
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct usb_serial {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int,int,int ,int ,unsigned char*,int,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_serial *VAR_6,
          unsigned char *VAR_7)
{
 int VAR_8;
 u8 *VAR_9;

 VAR_9 = FUNC_1(1, VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_8 = FUNC_2(VAR_6->dev, FUNC_3(VAR_6->dev, 0),
        3,
        VAR_5|VAR_4|VAR_3,
        0, 0, VAR_9, 1, 2000);
 if (VAR_8 == 1)
  *VAR_7 = *VAR_9;
 else if (VAR_8 >= 0)
  VAR_8 = -VAR_0;

 FUNC_0(VAR_9);
 return VAR_8;
}
