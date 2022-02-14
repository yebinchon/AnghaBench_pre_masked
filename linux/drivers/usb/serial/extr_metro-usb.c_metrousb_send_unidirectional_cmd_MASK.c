
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usb_serial_port {int interrupt_out_endpointAddress; TYPE_1__* serial; } ;
typedef int cmd ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,int *,int,int*,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(u8 VAR_4, struct usb_serial_port *VAR_5)
{
 int VAR_6;
 int VAR_7;
 u8 *VAR_8 = ((void*)0);

 if (!FUNC_2(VAR_5->serial))
  return 0;

 VAR_8 = FUNC_1(sizeof(VAR_4), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 *VAR_8 = VAR_4;

 VAR_6 = FUNC_3(VAR_5->serial->dev,
  FUNC_4(VAR_5->serial->dev, VAR_5->interrupt_out_endpointAddress),
  VAR_8, sizeof(VAR_4),
  &VAR_7, VAR_3);

 FUNC_0(VAR_8);

 if (VAR_6 < 0)
  return VAR_6;
 else if (VAR_7 != sizeof(VAR_4))
  return -VAR_0;
 return 0;
}
