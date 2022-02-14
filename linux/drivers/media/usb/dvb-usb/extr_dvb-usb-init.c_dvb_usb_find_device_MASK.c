
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int idProduct; int idVendor; } ;
struct usb_device {TYPE_3__ descriptor; } ;
struct dvb_usb_device_properties {int num_device_descs; int (* identify_state ) (struct usb_device*,struct dvb_usb_device_properties*,struct dvb_usb_device_description**,int*) ;struct dvb_usb_device_description* devices; } ;
struct dvb_usb_device_description {TYPE_2__** warm_ids; TYPE_1__** cold_ids; } ;
struct TYPE_5__ {scalar_t__ idVendor; scalar_t__ idProduct; } ;
struct TYPE_4__ {scalar_t__ idVendor; scalar_t__ idProduct; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct usb_device*,struct dvb_usb_device_properties*,struct dvb_usb_device_description**,int*) ;

__attribute__((used)) static struct dvb_usb_device_description *FUNC_3(struct usb_device *VAR_1, struct dvb_usb_device_properties *VAR_2, int *VAR_3)
{
 int VAR_4, VAR_5;
 struct dvb_usb_device_description *VAR_6 = ((void*)0);

 *VAR_3 = -1;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_device_descs; VAR_4++) {

  for (VAR_5 = 0; VAR_5 < VAR_0 && VAR_2->devices[VAR_4].cold_ids[VAR_5] != ((void*)0); VAR_5++) {
   FUNC_0("check for cold %x %x\n", VAR_2->devices[VAR_4].cold_ids[VAR_5]->idVendor, VAR_2->devices[VAR_4].cold_ids[VAR_5]->idProduct);
   if (VAR_2->devices[VAR_4].cold_ids[VAR_5]->idVendor == FUNC_1(VAR_1->descriptor.idVendor) &&
    VAR_2->devices[VAR_4].cold_ids[VAR_5]->idProduct == FUNC_1(VAR_1->descriptor.idProduct)) {
    *VAR_3 = 1;
    VAR_6 = &VAR_2->devices[VAR_4];
    break;
   }
  }

  if (VAR_6 != ((void*)0))
   break;

  for (VAR_5 = 0; VAR_5 < VAR_0 && VAR_2->devices[VAR_4].warm_ids[VAR_5] != ((void*)0); VAR_5++) {
   FUNC_0("check for warm %x %x\n", VAR_2->devices[VAR_4].warm_ids[VAR_5]->idVendor, VAR_2->devices[VAR_4].warm_ids[VAR_5]->idProduct);
   if (VAR_2->devices[VAR_4].warm_ids[VAR_5]->idVendor == FUNC_1(VAR_1->descriptor.idVendor) &&
    VAR_2->devices[VAR_4].warm_ids[VAR_5]->idProduct == FUNC_1(VAR_1->descriptor.idProduct)) {
    *VAR_3 = 0;
    VAR_6 = &VAR_2->devices[VAR_4];
    break;
   }
  }
 }

 if (VAR_6 != ((void*)0) && VAR_2->identify_state != ((void*)0))
  VAR_2->identify_state(VAR_1, VAR_2, &VAR_6, VAR_3);

 return VAR_6;
}
