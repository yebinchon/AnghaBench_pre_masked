
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dev; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int,int ,unsigned int,int *,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_serial *VAR_1,
        unsigned VAR_2, __u8 VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1->dev,
     FUNC_1(VAR_1->dev, 0),
     0xfe, 0x40, VAR_3, VAR_2,
     ((void*)0), 0, VAR_0);
 if (VAR_4)
  return VAR_4;

 return 0;
}
