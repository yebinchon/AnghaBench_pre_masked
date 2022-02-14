
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_5__ {int bcdDevice; int idProduct; int idVendor; } ;
struct usb_device {int dev; TYPE_1__ descriptor; int serial; int product; int manufacturer; } ;
struct ufx_data {int kref; int * gdev; int usb_active; int free_framebuffer_work; int pseudo_palette; struct fb_info* info; struct usb_device* udev; } ;
struct TYPE_7__ {int modedb; } ;
struct TYPE_6__ {int smem_len; } ;
struct TYPE_8__ {int yres; int xres; } ;
struct fb_info {int modelist; int screen_base; TYPE_3__ monspecs; int cmap; TYPE_2__ fix; TYPE_4__ var; int node; int * fbops; int pseudo_palette; struct ufx_data* par; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int,char*,...) ;
 int VAR_4 ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (int *,char*,int ,int ,int ,int) ;
 int FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 struct fb_info* FUNC_12 (int ,int *) ;
 int FUNC_13 (struct fb_info*) ;
 struct usb_device* FUNC_14 (struct usb_interface*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int ) ;
 struct ufx_data* FUNC_18 (int,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct fb_info*) ;
 int FUNC_21 (struct ufx_data*,int ,int ) ;
 int FUNC_22 (struct ufx_data*) ;
 int FUNC_23 (struct ufx_data*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_24 (struct ufx_data*) ;
 int FUNC_25 (struct ufx_data*) ;
 int VAR_8 ;
 int FUNC_26 (TYPE_4__*,struct fb_info*) ;
 int FUNC_27 (struct fb_info*) ;
 int FUNC_28 (struct ufx_data*,int,int *) ;
 int FUNC_29 (struct ufx_data*,int,int) ;
 int FUNC_30 (struct ufx_data*,struct fb_info*,int *,int ) ;
 int FUNC_31 (struct usb_interface*,struct ufx_data*) ;
 int FUNC_32 (int ) ;

__attribute__((used)) static int FUNC_33(struct usb_interface *VAR_9,
   const struct usb_device_id *VAR_10)
{
 struct usb_device *VAR_11;
 struct ufx_data *VAR_12;
 struct fb_info *VAR_13;
 int VAR_14;
 u32 VAR_15, VAR_16;


 VAR_11 = FUNC_14(VAR_9);
 FUNC_0(!VAR_11);

 VAR_12 = FUNC_18(sizeof(*VAR_12), VAR_1);
 if (VAR_12 == ((void*)0)) {
  FUNC_6(&VAR_11->dev, "ufx_usb_probe: failed alloc of dev struct\n");
  return -VAR_0;
 }


 FUNC_16(&VAR_12->kref);
 FUNC_15(&VAR_12->kref);

 VAR_12->udev = VAR_11;
 VAR_12->gdev = &VAR_11->dev;
 FUNC_31(VAR_9, VAR_12);

 FUNC_5(VAR_12->gdev, "%s %s - serial #%s\n",
  VAR_11->manufacturer, VAR_11->product, VAR_11->serial);
 FUNC_5(VAR_12->gdev, "vid_%04x&pid_%04x&rev_%04x driver's ufx_data struct at %p\n",
  FUNC_19(VAR_11->descriptor.idVendor),
  FUNC_19(VAR_11->descriptor.idProduct),
  FUNC_19(VAR_11->descriptor.bcdDevice), VAR_12);
 FUNC_5(VAR_12->gdev, "console enable=%d\n", VAR_4);
 FUNC_5(VAR_12->gdev, "fb_defio enable=%d\n", VAR_5);

 if (!FUNC_21(VAR_12, VAR_3, VAR_2)) {
  FUNC_6(VAR_12->gdev, "ufx_alloc_urb_list failed\n");
  goto e_nomem;
 }




 VAR_13 = FUNC_12(0, &VAR_11->dev);
 if (!VAR_13)
  goto e_nomem;

 VAR_12->info = VAR_13;
 VAR_13->par = VAR_12;
 VAR_13->pseudo_palette = VAR_12->pseudo_palette;
 VAR_13->fbops = &VAR_8;

 VAR_14 = FUNC_8(&VAR_13->cmap, 256, 0);
 if (VAR_14 < 0) {
  FUNC_6(VAR_12->gdev, "fb_alloc_cmap failed %x\n", VAR_14);
  goto destroy_modedb;
 }

 FUNC_1(&VAR_12->free_framebuffer_work,
     VAR_7);

 FUNC_2(&VAR_13->modelist);

 VAR_14 = FUNC_28(VAR_12, 0x3000, &VAR_15);
 FUNC_4(VAR_14, "error %d reading 0x3000 register from device", VAR_14);
 FUNC_5(VAR_12->gdev, "ID_REV register value 0x%08x", VAR_15);

 VAR_14 = FUNC_28(VAR_12, 0x3004, &VAR_16);
 FUNC_4(VAR_14, "error %d reading 0x3004 register from device", VAR_14);
 FUNC_5(VAR_12->gdev, "FPGA_REV register value 0x%08x", VAR_16);

 FUNC_5(VAR_12->gdev, "resetting device");
 VAR_14 = FUNC_25(VAR_12);
 FUNC_4(VAR_14, "error %d resetting device", VAR_14);

 FUNC_5(VAR_12->gdev, "configuring system clock");
 VAR_14 = FUNC_23(VAR_12);
 FUNC_4(VAR_14, "error %d configuring system clock", VAR_14);

 FUNC_5(VAR_12->gdev, "configuring DDR2 controller");
 VAR_14 = FUNC_22(VAR_12);
 FUNC_4(VAR_14, "error %d initialising DDR2 controller", VAR_14);

 FUNC_5(VAR_12->gdev, "configuring I2C controller");
 VAR_14 = FUNC_24(VAR_12);
 FUNC_4(VAR_14, "error %d initialising I2C controller", VAR_14);

 FUNC_5(VAR_12->gdev, "selecting display mode");
 VAR_14 = FUNC_30(VAR_12, VAR_13, ((void*)0), 0);
 FUNC_4(VAR_14, "unable to find common mode for display and adapter");

 VAR_14 = FUNC_29(VAR_12, 0x4000, 0x00000001);
 FUNC_4(VAR_14, "error %d enabling graphics engine", VAR_14);


 FUNC_3(&VAR_12->usb_active, 1);

 FUNC_5(VAR_12->gdev, "checking var");
 VAR_14 = FUNC_26(&VAR_13->var, VAR_13);
 FUNC_4(VAR_14, "error %d ufx_ops_check_var", VAR_14);

 FUNC_5(VAR_12->gdev, "setting par");
 VAR_14 = FUNC_27(VAR_13);
 FUNC_4(VAR_14, "error %d ufx_ops_set_par", VAR_14);

 FUNC_5(VAR_12->gdev, "registering framebuffer");
 VAR_14 = FUNC_20(VAR_13);
 FUNC_4(VAR_14, "error %d register_framebuffer", VAR_14);

 FUNC_7(VAR_12->gdev, "SMSC UDX USB device /dev/fb%d attached. %dx%d resolution."
  " Using %dK framebuffer memory\n", VAR_13->node,
  VAR_13->var.xres, VAR_13->var.yres, VAR_13->fix.smem_len >> 10);

 return 0;

error:
 FUNC_9(&VAR_13->cmap);
destroy_modedb:
 FUNC_10(VAR_13->monspecs.modedb);
 FUNC_32(VAR_13->screen_base);
 FUNC_11(&VAR_13->modelist);
 FUNC_13(VAR_13);
put_ref:
 FUNC_17(&VAR_12->kref, VAR_6);
 FUNC_17(&VAR_12->kref, VAR_6);
 return VAR_14;

e_nomem:
 VAR_14 = -VAR_0;
 goto put_ref;
}
