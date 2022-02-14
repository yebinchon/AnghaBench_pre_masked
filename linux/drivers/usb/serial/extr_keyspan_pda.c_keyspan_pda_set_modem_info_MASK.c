
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int,unsigned char,int ,int *,int ,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_serial *VAR_3,
          unsigned char VAR_4)
{
 int VAR_5;
 VAR_5 = FUNC_0(VAR_3->dev, FUNC_1(VAR_3->dev, 0),
        3,
        VAR_2|VAR_1|VAR_0,
        VAR_4, 0, ((void*)0), 0, 2000);
 return VAR_5;
}
