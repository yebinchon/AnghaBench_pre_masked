
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cnt_enb; int cnt_val; } ;
union cvmx_iob_n2c_l2c_pri_cnt {scalar_t__ u64; TYPE_2__ s; } ;
typedef int u32 ;
struct TYPE_6__ {int controller; } ;
struct usb_hcd {int uses_new_polling; TYPE_3__ self; scalar_t__ hcd_priv; } ;
struct resource {int start; } ;
struct device {TYPE_1__* of_node; } ;
struct platform_device {struct device dev; } ;
struct octeon_hcd {int init_flags; int index; int idle_hardware_channels; int * active_pipes; int idle_pipes; int lock; } ;
struct device_node {int dummy; } ;
typedef int irq_hw_number_t ;
struct TYPE_4__ {struct device_node* parent; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct device*,struct octeon_hcd*) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct device*,char*,...) ;
 int FUNC_7 (struct device*,char*,...) ;
 int FUNC_8 (struct device*,char*,int,int) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct device*,int ) ;
 int FUNC_12 (int *,int) ;
 int VAR_13 ;
 int FUNC_13 (struct device_node*,char*,char const**) ;
 int FUNC_14 (struct device_node*,char*,int*) ;
 int FUNC_15 (struct platform_device*,int ) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (char*,char const*) ;
 int FUNC_19 (struct usb_hcd*,int,int ) ;
 struct usb_hcd* FUNC_20 (int *,struct device*,int ) ;
 int FUNC_21 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_14)
{
 int VAR_15;
 int VAR_16;
 int VAR_17;
 struct resource *VAR_18;
 struct device_node *VAR_19;
 int VAR_20 = FUNC_15(VAR_14, 0);
 struct device *VAR_21 = &VAR_14->dev;
 struct octeon_hcd *VAR_22;
 struct usb_hcd *VAR_23;
 u32 VAR_24 = 48000000;
 bool VAR_25 = 0;
 const char *VAR_26;
 int VAR_27;

 if (!VAR_21->of_node) {
  FUNC_7(VAR_21, "Error: empty of_node\n");
  return -VAR_7;
 }
 VAR_19 = VAR_21->of_node->parent;

 VAR_27 = FUNC_14(VAR_19,
     "clock-frequency", &VAR_24);
 if (VAR_27)
  VAR_27 = FUNC_14(VAR_19,
      "refclk-frequency", &VAR_24);
 if (VAR_27) {
  FUNC_7(VAR_21, "No USBN \"clock-frequency\"\n");
  return -VAR_7;
 }
 switch (VAR_24) {
 case 12000000:
  VAR_16 = VAR_1;
  break;
 case 24000000:
  VAR_16 = VAR_2;
  break;
 case 48000000:
  VAR_16 = VAR_3;
  break;
 default:
  FUNC_7(VAR_21, "Illegal USBN \"clock-frequency\" %u\n",
   VAR_24);
  return -VAR_7;
 }

 VAR_27 = FUNC_13(VAR_19,
        "cavium,refclk-type", &VAR_26);
 if (VAR_27)
  VAR_27 = FUNC_13(VAR_19,
         "refclk-type", &VAR_26);

 if (!VAR_27 && FUNC_18("crystal", VAR_26) == 0)
  VAR_25 = 1;

 if (VAR_25)
  VAR_16 |= VAR_5;
 else
  VAR_16 |= VAR_4;

 VAR_18 = FUNC_16(VAR_14, VAR_8, 0);
 if (!VAR_18) {
  FUNC_7(VAR_21, "found no memory resource\n");
  return -VAR_7;
 }
 VAR_17 = (VAR_18->start >> 44) & 1;

 if (VAR_20 < 0) {

  irq_hw_number_t VAR_28 = VAR_17 ? (1 << 6) + 17 : 56;

  VAR_20 = FUNC_12(((void*)0), VAR_28);
 }





 VAR_27 = FUNC_11(VAR_21, FUNC_1(64));
 if (VAR_27)
  return VAR_27;
 if (FUNC_3(VAR_10) || FUNC_3(VAR_11)) {
  union cvmx_iob_n2c_l2c_pri_cnt VAR_29;

  VAR_29.u64 = 0;
  VAR_29.s.cnt_enb = 1;
  VAR_29.s.cnt_val = 400;
  FUNC_5(VAR_0, VAR_29.u64);
 }

 VAR_23 = FUNC_20(&VAR_13, VAR_21, FUNC_9(VAR_21));
 if (!VAR_23) {
  FUNC_6(VAR_21, "Failed to allocate memory for HCD\n");
  return -1;
 }
 VAR_23->uses_new_polling = 1;
 VAR_22 = (struct octeon_hcd *)VAR_23->hcd_priv;

 FUNC_17(&VAR_22->lock);

 VAR_22->init_flags = VAR_16;


 VAR_22->index = VAR_17;
 FUNC_2(&VAR_22->idle_pipes);
 for (VAR_27 = 0; VAR_27 < FUNC_0(VAR_22->active_pipes); VAR_27++)
  FUNC_2(&VAR_22->active_pipes[VAR_27]);


 if (FUNC_3(VAR_9)) {
  VAR_22->init_flags |= VAR_6;

  VAR_22->idle_hardware_channels = 0x1;
 } else if (FUNC_3(VAR_12)) {

  VAR_22->idle_hardware_channels = 0xf7;
 } else {
  VAR_22->idle_hardware_channels = 0xff;
 }

 VAR_15 = FUNC_4(VAR_21, VAR_22);
 if (VAR_15) {
  FUNC_6(VAR_21, "USB initialization failed with %d\n", VAR_15);
  FUNC_21(VAR_23);
  return -1;
 }

 VAR_15 = FUNC_19(VAR_23, VAR_20, 0);
 if (VAR_15) {
  FUNC_6(VAR_21, "USB add HCD failed with %d\n", VAR_15);
  FUNC_21(VAR_23);
  return -1;
 }
 FUNC_10(VAR_23->self.controller);

 FUNC_8(VAR_21, "Registered HCD for port %d on irq %d\n", VAR_17, VAR_20);

 return 0;
}
