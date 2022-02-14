
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_querymenu {scalar_t__ value; int index; int id; } ;
struct v4l2_ctrl {int dummy; } ;
struct device {int dummy; } ;
struct cio2_queue {TYPE_2__* sensor; } ;
struct cio2_device {TYPE_1__* pci_dev; } ;
struct cio2_csi2_timing {void* dat_settle; void* dat_termen; void* clk_settle; void* clk_termen; } ;
typedef scalar_t__ s64 ;
struct TYPE_4__ {int ctrl_handler; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_0 (int ,int ,scalar_t__,int ) ;
 int FUNC_1 (struct device*,char*,void*) ;
 int FUNC_2 (struct device*,char*) ;
 struct v4l2_ctrl* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct v4l2_ctrl*) ;
 int FUNC_5 (int ,struct v4l2_querymenu*) ;

__attribute__((used)) static int FUNC_6(struct cio2_device *VAR_14, struct cio2_queue *VAR_15,
     struct cio2_csi2_timing *VAR_16)
{
 struct device *VAR_17 = &VAR_14->pci_dev->dev;
 struct v4l2_querymenu VAR_18 = {.id = VAR_13, };
 struct v4l2_ctrl *VAR_19;
 s64 VAR_20;
 int VAR_21;

 if (!VAR_15->sensor)
  return -VAR_11;

 VAR_19 = FUNC_3(VAR_15->sensor->ctrl_handler, VAR_13);
 if (!VAR_19) {
  FUNC_2(VAR_17, "failed to find LINK_FREQ\n");
  return -VAR_12;
 }

 VAR_18.index = FUNC_4(VAR_19);
 VAR_21 = FUNC_5(VAR_15->sensor->ctrl_handler, &VAR_18);
 if (VAR_21) {
  FUNC_2(VAR_17, "failed to get menu item\n");
  return VAR_21;
 }

 if (!VAR_18.value) {
  FUNC_2(VAR_17, "error invalid link_freq\n");
  return -VAR_10;
 }
 VAR_20 = VAR_18.value;

 VAR_16->clk_termen = FUNC_0(VAR_5,
         VAR_6,
         VAR_20,
         VAR_7);
 VAR_16->clk_settle = FUNC_0(VAR_0,
         VAR_1,
         VAR_20,
         VAR_2);
 VAR_16->dat_termen = FUNC_0(VAR_8,
         VAR_9,
         VAR_20,
         VAR_7);
 VAR_16->dat_settle = FUNC_0(VAR_3,
         VAR_4,
         VAR_20,
         VAR_2);

 FUNC_1(VAR_17, "freq ct value is %d\n", VAR_16->clk_termen);
 FUNC_1(VAR_17, "freq cs value is %d\n", VAR_16->clk_settle);
 FUNC_1(VAR_17, "freq dt value is %d\n", VAR_16->dat_termen);
 FUNC_1(VAR_17, "freq ds value is %d\n", VAR_16->dat_settle);

 return 0;
}
