
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct usb_gadget {int dev; } ;
struct usb_composite_dev {struct usb_gadget* gadget; } ;
struct fsg_opts {int no_configfs; int common; } ;
struct fsg_config {char* vendor_name; char* product_name; int can_stall; } ;
struct TYPE_9__ {int iManufacturer; int iProduct; } ;
struct TYPE_8__ {int iConfiguration; } ;
struct TYPE_7__ {int id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,char*,int ) ;
 TYPE_6__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (int ,struct fsg_config*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct usb_composite_dev*,int ) ;
 int FUNC_8 (int ,char*,char*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (struct fsg_config*,int *,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 struct fsg_opts* FUNC_12 (int ) ;
 int FUNC_13 (struct usb_gadget*) ;
 int VAR_20 ;
 TYPE_2__ VAR_21 ;
 TYPE_2__ VAR_22 ;
 int FUNC_14 (char*) ;
 TYPE_1__* VAR_23 ;
 int FUNC_15 (struct usb_composite_dev*,TYPE_2__*,int ) ;
 int FUNC_16 (struct usb_composite_dev*,int *) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct usb_composite_dev*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_21(struct usb_composite_dev *VAR_24)
{
 struct usb_gadget *VAR_25 = VAR_24->gadget;
 struct fsg_opts *VAR_26;
 struct fsg_config VAR_27;
 int VAR_28;

 VAR_28 = FUNC_20(VAR_24, VAR_23);
 if (VAR_28 < 0)
  goto err_usb;
 VAR_6.iManufacturer = VAR_23[VAR_3].id;
 VAR_6.iProduct = VAR_23[VAR_4].id;
 VAR_28 = VAR_23[VAR_2].id;
 VAR_22.iConfiguration = VAR_28;
 VAR_21.iConfiguration = VAR_28;

 if (!FUNC_13(VAR_25)) {
  VAR_28 = -VAR_0;
  goto err_usb;
 }

 VAR_17 = FUNC_17("phonet");
 if (FUNC_0(VAR_17))
  FUNC_14("could not find phonet function\n");

 VAR_15 = FUNC_17("obex");
 if (FUNC_0(VAR_15))
  FUNC_14("could not find obex function 1\n");

 VAR_16 = FUNC_17("obex");
 if (FUNC_0(VAR_16))
  FUNC_14("could not find obex function 2\n");

 VAR_12 = FUNC_17("acm");
 if (FUNC_0(VAR_12)) {
  VAR_28 = FUNC_2(VAR_12);
  goto err_obex2_inst;
 }

 VAR_13 = FUNC_17("ecm");
 if (FUNC_0(VAR_13)) {
  VAR_28 = FUNC_2(VAR_13);
  goto err_acm_inst;
 }

 VAR_14 = FUNC_17("mass_storage");
 if (FUNC_0(VAR_14)) {
  VAR_28 = FUNC_2(VAR_14);
  goto err_ecm_inst;
 }


 FUNC_11(&VAR_27, &VAR_18, VAR_19);
 VAR_27.vendor_name = "Nokia";
 VAR_27.product_name = "N900";

 VAR_26 = FUNC_12(VAR_14);
 VAR_26->no_configfs = 1;

 VAR_28 = FUNC_9(VAR_26->common, VAR_19);
 if (VAR_28)
  goto err_msg_inst;

 VAR_28 = FUNC_7(VAR_26->common, VAR_24, VAR_27.can_stall);
 if (VAR_28)
  goto err_msg_buf;

 FUNC_10(VAR_26->common, 1);

 VAR_28 = FUNC_4(VAR_26->common, &VAR_27);
 if (VAR_28)
  goto err_msg_buf;

 FUNC_8(VAR_26->common, VAR_27.vendor_name,
          VAR_27.product_name);


 VAR_28 = FUNC_15(VAR_24, &VAR_22,
   VAR_20);
 if (VAR_28 < 0)
  goto err_msg_luns;

 VAR_28 = FUNC_15(VAR_24, &VAR_21,
   VAR_20);
 if (VAR_28 < 0)
  goto err_put_cfg1;

 FUNC_16(VAR_24, &VAR_5);
 FUNC_3(&VAR_25->dev, "%s\n", VAR_1);

 return 0;

err_put_cfg1:
 FUNC_18(VAR_7);
 if (!FUNC_1(VAR_9))
  FUNC_18(VAR_9);
 if (!FUNC_1(VAR_10))
  FUNC_18(VAR_10);
 if (!FUNC_1(VAR_11))
  FUNC_18(VAR_11);
 FUNC_18(VAR_8);
err_msg_luns:
 FUNC_6(VAR_26->common);
err_msg_buf:
 FUNC_5(VAR_26->common);
err_msg_inst:
 FUNC_19(VAR_14);
err_ecm_inst:
 FUNC_19(VAR_13);
err_acm_inst:
 FUNC_19(VAR_12);
err_obex2_inst:
 if (!FUNC_0(VAR_16))
  FUNC_19(VAR_16);
 if (!FUNC_0(VAR_15))
  FUNC_19(VAR_15);
 if (!FUNC_0(VAR_17))
  FUNC_19(VAR_17);
err_usb:
 return VAR_28;
}
