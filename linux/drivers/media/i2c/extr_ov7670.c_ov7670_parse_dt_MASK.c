
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ parallel; } ;
struct v4l2_fwnode_endpoint {scalar_t__ bus_type; TYPE_2__ bus; } ;
struct ov7670_info {int pclk_hb_disable; int mbus_config; } ;
struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 struct fwnode_handle* FUNC_1 (struct device*) ;
 struct fwnode_handle* FUNC_2 (struct fwnode_handle*,int *) ;
 int FUNC_3 (struct fwnode_handle*) ;
 scalar_t__ FUNC_4 (struct fwnode_handle*,char*) ;
 int FUNC_5 (struct fwnode_handle*,struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2,
      struct ov7670_info *VAR_3)
{
 struct fwnode_handle *VAR_4 = FUNC_1(VAR_2);
 struct v4l2_fwnode_endpoint VAR_5 = { .bus_type = 0 };
 struct fwnode_handle *VAR_6;
 int VAR_7;

 if (!VAR_4)
  return -VAR_0;

 VAR_3->pclk_hb_disable = 0;
 if (FUNC_4(VAR_4, "ov7670,pclk-hb-disable"))
  VAR_3->pclk_hb_disable = 1;

 VAR_6 = FUNC_2(VAR_4, ((void*)0));
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_6, &VAR_5);
 FUNC_3(VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_5.bus_type != VAR_1) {
  FUNC_0(VAR_2, "Unsupported media bus type\n");
  return VAR_7;
 }
 VAR_3->mbus_config = VAR_5.bus.parallel.flags;

 return 0;
}
