
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int buffersize; } ;
struct TYPE_7__ {TYPE_1__ bulk; } ;
struct usb_data_stream_properties {int endpoint; TYPE_2__ u; } ;
struct TYPE_10__ {TYPE_4__* adapter; } ;
struct dvb_usb_device {int udev; TYPE_5__ props; } ;
struct TYPE_9__ {TYPE_3__* fe; } ;
struct TYPE_8__ {struct usb_data_stream_properties stream; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int const,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int const,int*,int const) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct dvb_usb_device *VAR_1)
{
 struct usb_data_stream_properties *VAR_2 = &VAR_1->props.adapter[0].fe[0].stream;
 const int VAR_3 = 100;
 const int VAR_4 = VAR_2->u.bulk.buffersize;
 u8 *VAR_5;
 int VAR_6;


 VAR_5 = FUNC_1(VAR_4, VAR_0);
 if (!VAR_5)
  return;
 while (1) {
  if (FUNC_2(VAR_1->udev,
     FUNC_3(VAR_1->udev, VAR_2->endpoint),
     VAR_5, VAR_4, &VAR_6, VAR_3) < 0)
   break;
  if (!VAR_6)
   break;
 }
 FUNC_0(VAR_5);
}
