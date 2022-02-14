
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct usb_string {int id; } ;
struct usb_midi_out_jack_descriptor_1 {int bLength; int bNrInputPins; TYPE_1__* pins; scalar_t__ iJack; int bJackID; void* bJackType; void* bDescriptorSubtype; void* bDescriptorType; } ;
struct usb_midi_in_jack_descriptor {int bLength; int bJackID; scalar_t__ iJack; void* bJackType; void* bDescriptorSubtype; void* bDescriptorType; } ;
struct usb_function {int name; void* ss_descriptors; void* hs_descriptors; void* fs_descriptors; } ;
struct usb_descriptor_header {int dummy; } ;
struct usb_configuration {struct usb_composite_dev* cdev; } ;
struct usb_composite_dev {int gadget; } ;
struct f_midi {int ms_id; int in_ports; int out_ports; void* out_ep; void* in_ep; int tasklet; int gadget; } ;
struct TYPE_18__ {int bInterfaceNumber; int iInterface; } ;
struct TYPE_17__ {void* wTotalLength; } ;
struct TYPE_16__ {int bNumEmbMIDIJack; void* bLength; int * baAssocJackID; } ;
struct TYPE_15__ {int bInterfaceNumber; } ;
struct TYPE_14__ {int bNumEmbMIDIJack; void* bLength; int * baAssocJackID; } ;
struct TYPE_13__ {void* wMaxPacketSize; } ;
struct TYPE_12__ {int baSourcePin; int baSourceID; } ;
struct TYPE_11__ {int* baInterfaceNr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct usb_composite_dev*,char*,int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct usb_string*) ;
 int VAR_3 ;
 int FUNC_3 (struct usb_string*) ;
 size_t VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int) ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 TYPE_10__ VAR_12 ;
 TYPE_9__ VAR_13 ;
 TYPE_2__ VAR_14 ;
 int VAR_15 ;
 TYPE_2__ VAR_16 ;
 int VAR_17 ;
 void* FUNC_6 (int) ;
 int VAR_18 ;
 int FUNC_7 (struct f_midi*) ;
 int FUNC_8 (struct f_midi*) ;
 struct f_midi* FUNC_9 (struct usb_function*) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 struct usb_descriptor_header** FUNC_12 (int,int,int ) ;
 int FUNC_13 (struct usb_descriptor_header**) ;
 int VAR_19 ;
 int VAR_20 ;
 TYPE_6__ VAR_21 ;
 TYPE_5__ VAR_22 ;
 TYPE_4__ VAR_23 ;
 TYPE_3__ VAR_24 ;
 int FUNC_14 (int *,int ,unsigned long) ;
 void* FUNC_15 (struct usb_descriptor_header**) ;
 void* FUNC_16 (int ,TYPE_2__*) ;
 int FUNC_17 (struct usb_function*) ;
 struct usb_string* FUNC_18 (struct usb_composite_dev*,int ,int ) ;
 int FUNC_19 (struct usb_configuration*,struct usb_function*) ;

__attribute__((used)) static int FUNC_20(struct usb_configuration *VAR_25, struct usb_function *VAR_26)
{
 struct usb_descriptor_header **VAR_27;
 struct usb_midi_in_jack_descriptor VAR_28[VAR_3];
 struct usb_midi_in_jack_descriptor VAR_29[VAR_3];
 struct usb_midi_out_jack_descriptor_1 VAR_30[VAR_3];
 struct usb_midi_out_jack_descriptor_1 VAR_31[VAR_3];
 struct usb_composite_dev *VAR_32 = VAR_25->cdev;
 struct f_midi *VAR_33 = FUNC_9(VAR_26);
 struct usb_string *VAR_34;
 int VAR_35, VAR_36, VAR_37 = 1, VAR_38 = 0, VAR_39 = 0;

 VAR_33->gadget = VAR_32->gadget;
 FUNC_14(&VAR_33->tasklet, VAR_18, (unsigned long) VAR_33);
 VAR_35 = FUNC_7(VAR_33);
 if (VAR_35 < 0)
  goto fail_register;


 VAR_34 = FUNC_18(VAR_25->cdev, VAR_20,
     FUNC_0(VAR_19));
 if (FUNC_2(VAR_34)) {
  VAR_35 = FUNC_3(VAR_34);
  goto fail;
 }
 VAR_13.iInterface = VAR_34[VAR_4].id;


 VAR_35 = FUNC_19(VAR_25, VAR_26);
 if (VAR_35 < 0)
  goto fail;
 VAR_13.bInterfaceNumber = VAR_35;

 VAR_35 = FUNC_19(VAR_25, VAR_26);
 if (VAR_35 < 0)
  goto fail;
 VAR_23.bInterfaceNumber = VAR_35;
 VAR_12.baInterfaceNr[0] = VAR_35;
 VAR_33->ms_id = VAR_35;

 VAR_35 = -VAR_0;


 VAR_33->in_ep = FUNC_16(VAR_32->gadget, &VAR_14);
 if (!VAR_33->in_ep)
  goto fail;

 VAR_33->out_ep = FUNC_16(VAR_32->gadget, &VAR_16);
 if (!VAR_33->out_ep)
  goto fail;


 VAR_27 = FUNC_12((VAR_3 * 4) + 11, sizeof(*VAR_27),
    VAR_2);
 if (!VAR_27) {
  VAR_35 = -VAR_1;
  goto fail;
 }
 VAR_27[VAR_38++] = (struct usb_descriptor_header *) &VAR_13;
 VAR_27[VAR_38++] = (struct usb_descriptor_header *) &VAR_12;
 VAR_27[VAR_38++] = (struct usb_descriptor_header *) &VAR_23;


 VAR_36 = VAR_7
  + (VAR_33->in_ports + VAR_33->out_ports) *
   (VAR_6 + FUNC_4(1));
 VAR_21.wTotalLength = FUNC_6(VAR_36);

 VAR_27[VAR_38++] = (struct usb_descriptor_header *) &VAR_21;


 for (VAR_36 = 0; VAR_36 < VAR_33->in_ports; VAR_36++) {
  struct usb_midi_in_jack_descriptor *VAR_40 = &VAR_28[VAR_36];
  struct usb_midi_out_jack_descriptor_1 *VAR_41 = &VAR_31[VAR_36];

  VAR_40->bLength = VAR_6;
  VAR_40->bDescriptorType = VAR_5;
  VAR_40->bDescriptorSubtype = VAR_10;
  VAR_40->bJackType = VAR_9;
  VAR_40->bJackID = VAR_37++;
  VAR_40->iJack = 0;
  VAR_27[VAR_38++] = (struct usb_descriptor_header *) VAR_40;

  VAR_41->bLength = FUNC_4(1);
  VAR_41->bDescriptorType = VAR_5;
  VAR_41->bDescriptorSubtype = VAR_11;
  VAR_41->bJackType = VAR_8;
  VAR_41->bJackID = VAR_37++;
  VAR_41->bNrInputPins = 1;
  VAR_41->pins[0].baSourcePin = 1;
  VAR_41->pins[0].baSourceID = VAR_40->bJackID;
  VAR_41->iJack = 0;
  VAR_27[VAR_38++] = (struct usb_descriptor_header *) VAR_41;


  VAR_22.baAssocJackID[VAR_36] = VAR_41->bJackID;
 }


 for (VAR_36 = 0; VAR_36 < VAR_33->out_ports; VAR_36++) {
  struct usb_midi_in_jack_descriptor *VAR_42 = &VAR_29[VAR_36];
  struct usb_midi_out_jack_descriptor_1 *VAR_43 = &VAR_30[VAR_36];

  VAR_42->bLength = VAR_6;
  VAR_42->bDescriptorType = VAR_5;
  VAR_42->bDescriptorSubtype = VAR_10;
  VAR_42->bJackType = VAR_8;
  VAR_42->bJackID = VAR_37++;
  VAR_42->iJack = 0;
  VAR_27[VAR_38++] = (struct usb_descriptor_header *) VAR_42;

  VAR_43->bLength = FUNC_4(1);
  VAR_43->bDescriptorType = VAR_5;
  VAR_43->bDescriptorSubtype = VAR_11;
  VAR_43->bJackType = VAR_9;
  VAR_43->bJackID = VAR_37++;
  VAR_43->bNrInputPins = 1;
  VAR_43->iJack = 0;
  VAR_43->pins[0].baSourceID = VAR_42->bJackID;
  VAR_43->pins[0].baSourcePin = 1;
  VAR_27[VAR_38++] = (struct usb_descriptor_header *) VAR_43;


  VAR_24.baAssocJackID[VAR_36] = VAR_42->bJackID;
 }


 VAR_24.bLength = FUNC_5(VAR_33->in_ports);
 VAR_24.bNumEmbMIDIJack = VAR_33->in_ports;

 VAR_22.bLength = FUNC_5(VAR_33->out_ports);
 VAR_22.bNumEmbMIDIJack = VAR_33->out_ports;


 VAR_39 = VAR_38;
 VAR_27[VAR_38++] = (struct usb_descriptor_header *) &VAR_16;
 VAR_27[VAR_38++] = (struct usb_descriptor_header *) &VAR_24;
 VAR_27[VAR_38++] = (struct usb_descriptor_header *) &VAR_14;
 VAR_27[VAR_38++] = (struct usb_descriptor_header *) &VAR_22;
 VAR_27[VAR_38++] = ((void*)0);







 VAR_26->fs_descriptors = FUNC_15(VAR_27);
 if (!VAR_26->fs_descriptors)
  goto fail_f_midi;

 if (FUNC_10(VAR_25->cdev->gadget)) {
  VAR_14.wMaxPacketSize = FUNC_6(512);
  VAR_16.wMaxPacketSize = FUNC_6(512);
  VAR_26->hs_descriptors = FUNC_15(VAR_27);
  if (!VAR_26->hs_descriptors)
   goto fail_f_midi;
 }

 if (FUNC_11(VAR_25->cdev->gadget)) {
  VAR_14.wMaxPacketSize = FUNC_6(1024);
  VAR_16.wMaxPacketSize = FUNC_6(1024);
  VAR_38 = VAR_39;
  VAR_27[VAR_38++] = (struct usb_descriptor_header *)
         &VAR_16;
  VAR_27[VAR_38++] = (struct usb_descriptor_header *)
         &VAR_17;
  VAR_27[VAR_38++] = (struct usb_descriptor_header *)
         &VAR_24;
  VAR_27[VAR_38++] = (struct usb_descriptor_header *)
         &VAR_14;
  VAR_27[VAR_38++] = (struct usb_descriptor_header *)
         &VAR_15;
  VAR_27[VAR_38++] = (struct usb_descriptor_header *)
         &VAR_22;
  VAR_26->ss_descriptors = FUNC_15(VAR_27);
  if (!VAR_26->ss_descriptors)
   goto fail_f_midi;
 }

 FUNC_13(VAR_27);

 return 0;

fail_f_midi:
 FUNC_13(VAR_27);
 FUNC_17(VAR_26);
fail:
 FUNC_8(VAR_33);
fail_register:
 FUNC_1(VAR_32, "%s: can't bind, err %d\n", VAR_26->name, VAR_35);

 return VAR_35;
}
