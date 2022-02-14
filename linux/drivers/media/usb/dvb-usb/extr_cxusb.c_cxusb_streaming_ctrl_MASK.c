
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {TYPE_2__* devices; } ;
struct dvb_usb_device {TYPE_1__ props; } ;
struct dvb_usb_adapter {struct dvb_usb_device* dev; } ;
struct TYPE_4__ {int ** warm_ids; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct dvb_usb_device*,int ,int*,int,int *,int ) ;
 int FUNC_1 (struct dvb_usb_device*,int ) ;
 int FUNC_2 (struct dvb_usb_device*) ;
 int * VAR_4 ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_adapter *VAR_5, int VAR_6)
{
 struct dvb_usb_device *VAR_7 = VAR_5->dev;
 bool VAR_8 = VAR_7->props.devices[0].warm_ids[0] ==
  &VAR_4[VAR_3];
 u8 VAR_9[2] = { 0x03, 0x00 };

 if (VAR_8 && VAR_6) {
  int VAR_10;

  VAR_10 = FUNC_1(VAR_7, VAR_2);
  if (VAR_10 != 0)
   return VAR_10;
 }

 if (VAR_6)
  FUNC_0(VAR_7, VAR_1, VAR_9, 2, ((void*)0), 0);
 else
  FUNC_0(VAR_7, VAR_0, ((void*)0), 0, ((void*)0), 0);

 if (VAR_8 && !VAR_6)
  FUNC_2(VAR_7);

 return 0;
}
