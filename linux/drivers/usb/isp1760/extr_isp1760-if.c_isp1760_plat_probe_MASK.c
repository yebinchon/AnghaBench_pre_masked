
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct resource {unsigned long flags; int start; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct isp1760_platform_data {scalar_t__ dreq_polarity_high; scalar_t__ dack_polarity_high; scalar_t__ analog_oc; scalar_t__ port1_otg; scalar_t__ bus_width_16; scalar_t__ is_isp1761; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 struct isp1760_platform_data* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct resource*,int ,unsigned long,TYPE_1__*,unsigned int) ;
 scalar_t__ FUNC_3 (struct device_node*,char*) ;
 scalar_t__ FUNC_4 (struct device_node*,char*) ;
 int FUNC_5 (struct device_node*,char*,int*) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_11)
{
 unsigned long VAR_12;
 unsigned int VAR_13 = 0;
 struct resource *VAR_14;
 struct resource *VAR_15;
 int VAR_16;

 VAR_14 = FUNC_6(VAR_11, VAR_3, 0);

 VAR_15 = FUNC_6(VAR_11, VAR_2, 0);
 if (!VAR_15) {
  FUNC_8("isp1760: IRQ resource not available\n");
  return -VAR_1;
 }
 VAR_12 = VAR_15->flags & VAR_4;

 if (FUNC_0(VAR_0) && VAR_11->dev.of_node) {
  struct device_node *VAR_17 = VAR_11->dev.of_node;
  u32 VAR_18 = 0;

  if (FUNC_3(VAR_17, "nxp,usb-isp1761"))
   VAR_13 |= VAR_9;


  FUNC_5(VAR_17, "bus-width", &VAR_18);
  if (VAR_18 == 16)
   VAR_13 |= VAR_6;

  if (FUNC_4(VAR_17, "port1-otg"))
   VAR_13 |= VAR_10;

  if (FUNC_4(VAR_17, "analog-oc"))
   VAR_13 |= VAR_5;

  if (FUNC_4(VAR_17, "dack-polarity"))
   VAR_13 |= VAR_7;

  if (FUNC_4(VAR_17, "dreq-polarity"))
   VAR_13 |= VAR_8;
 } else if (FUNC_1(&VAR_11->dev)) {
  struct isp1760_platform_data *VAR_19 =
   FUNC_1(&VAR_11->dev);

  if (VAR_19->is_isp1761)
   VAR_13 |= VAR_9;
  if (VAR_19->bus_width_16)
   VAR_13 |= VAR_6;
  if (VAR_19->port1_otg)
   VAR_13 |= VAR_10;
  if (VAR_19->analog_oc)
   VAR_13 |= VAR_5;
  if (VAR_19->dack_polarity_high)
   VAR_13 |= VAR_7;
  if (VAR_19->dreq_polarity_high)
   VAR_13 |= VAR_8;
 }

 VAR_16 = FUNC_2(VAR_14, VAR_15->start, VAR_12, &VAR_11->dev,
          VAR_13);
 if (VAR_16 < 0)
  return VAR_16;

 FUNC_7("ISP1760 USB device initialised\n");
 return 0;
}
