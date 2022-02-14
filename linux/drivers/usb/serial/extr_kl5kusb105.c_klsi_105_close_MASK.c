
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {int dev; TYPE_1__* serial; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int ,int ,int,int ,int ,int *,int ,int ) ;
 int FUNC_2 (struct usb_serial_port*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct usb_serial_port *VAR_5)
{
 int VAR_6;


 VAR_6 = FUNC_1(VAR_5->serial->dev,
        FUNC_3(VAR_5->serial->dev, 0),
        VAR_0,
        VAR_4 | VAR_3,
        VAR_1,
        0,
        ((void*)0), 0,
        VAR_2);
 if (VAR_6 < 0)
  FUNC_0(&VAR_5->dev, "failed to disable read: %d\n", VAR_6);


 FUNC_2(VAR_5);
}
