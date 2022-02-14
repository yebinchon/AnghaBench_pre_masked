
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_descriptor_header {int dummy; } ;
struct usb_composite_dev {int gadget; } ;
struct TYPE_8__ {int iManufacturer; int iProduct; } ;
struct TYPE_7__ {int iConfiguration; int bmAttributes; struct usb_descriptor_header** descriptors; } ;
struct TYPE_6__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_composite_dev*,char*,int ) ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 TYPE_5__ VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct usb_descriptor_header*) ;
 struct usb_descriptor_header** VAR_8 ;
 TYPE_3__ VAR_9 ;
 int FUNC_3 (struct usb_composite_dev*,TYPE_3__*,char*) ;
 TYPE_1__* VAR_10 ;
 int FUNC_4 (struct usb_composite_dev*,int *) ;
 int FUNC_5 (int ) ;
 struct usb_descriptor_header* FUNC_6 (int ) ;
 int FUNC_7 (int ,struct usb_descriptor_header*) ;
 int FUNC_8 (struct usb_composite_dev*,TYPE_1__*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static int FUNC_9(struct usb_composite_dev *VAR_13)
{
 int VAR_14;





 VAR_14 = FUNC_8(VAR_13, VAR_10);
 if (VAR_14 < 0)
  goto fail;
 VAR_7.iManufacturer = VAR_10[VAR_4].id;
 VAR_7.iProduct = VAR_10[VAR_5].id;
 VAR_14 = VAR_10[VAR_2].id;
 VAR_9.iConfiguration = VAR_14;

 if (FUNC_1(VAR_13->gadget)) {
  if (!VAR_8[0]) {
   struct usb_descriptor_header *VAR_15;

   VAR_15 = FUNC_6(VAR_13->gadget);
   if (!VAR_15) {
    VAR_14 = -VAR_0;
    goto fail;
   }
   FUNC_7(VAR_13->gadget, VAR_15);
   VAR_8[0] = VAR_15;
   VAR_8[1] = ((void*)0);
  }
  VAR_9.descriptors = VAR_8;
  VAR_9.bmAttributes |= VAR_3;
 }


 if (VAR_11) {
  VAR_14 = FUNC_3(VAR_13, &VAR_9,
    "acm");
  FUNC_5(VAR_13->gadget);
 } else if (VAR_12)
  VAR_14 = FUNC_3(VAR_13, &VAR_9,
    "obex");
 else {
  VAR_14 = FUNC_3(VAR_13, &VAR_9,
    "gser");
 }
 if (VAR_14 < 0)
  goto fail1;

 FUNC_4(VAR_13, &VAR_6);
 FUNC_0(VAR_13, "%s\n", VAR_1);

 return 0;
fail1:
 FUNC_2(VAR_8[0]);
 VAR_8[0] = ((void*)0);
fail:
 return VAR_14;
}
