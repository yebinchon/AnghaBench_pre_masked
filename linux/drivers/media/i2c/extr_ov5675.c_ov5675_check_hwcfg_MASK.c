
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ num_data_lanes; } ;
struct TYPE_4__ {TYPE_1__ mipi_csi2; } ;
struct v4l2_fwnode_endpoint {unsigned int nr_of_link_frequencies; scalar_t__* link_frequencies; TYPE_2__ bus; int bus_type; } ;
struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;


 unsigned int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct device*,char*,...) ;
 struct fwnode_handle* FUNC_2 (struct device*) ;
 struct fwnode_handle* FUNC_3 (struct fwnode_handle*,int *) ;
 int FUNC_4 (struct fwnode_handle*) ;
 int FUNC_5 (struct fwnode_handle*,char*,scalar_t__*) ;
 scalar_t__* VAR_5 ;
 int FUNC_6 (struct fwnode_handle*,struct v4l2_fwnode_endpoint*) ;
 int FUNC_7 (struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_6)
{
 struct fwnode_handle *VAR_7;
 struct fwnode_handle *VAR_8 = FUNC_2(VAR_6);
 struct v4l2_fwnode_endpoint VAR_9 = {
  .bus_type = VAR_4
 };
 u32 VAR_10;
 int VAR_11;
 unsigned int VAR_12, VAR_13;

 if (!VAR_8)
  return -VAR_1;

 VAR_11 = FUNC_5(VAR_8, "clock-frequency", &VAR_10);

 if (VAR_11) {
  FUNC_1(VAR_6, "can't get clock frequency");
  return VAR_11;
 }

 if (VAR_10 != VAR_3) {
  FUNC_1(VAR_6, "external clock %d is not supported", VAR_10);
  return -VAR_0;
 }

 VAR_7 = FUNC_3(VAR_8, ((void*)0));
 if (!VAR_7)
  return -VAR_1;

 VAR_11 = FUNC_6(VAR_7, &VAR_9);
 FUNC_4(VAR_7);
 if (VAR_11)
  return VAR_11;

 if (VAR_9.bus.mipi_csi2.num_data_lanes != VAR_2) {
  FUNC_1(VAR_6, "number of CSI2 data lanes %d is not supported",
   VAR_9.bus.mipi_csi2.num_data_lanes);
  VAR_11 = -VAR_0;
  goto check_hwcfg_error;
 }

 if (!VAR_9.nr_of_link_frequencies) {
  FUNC_1(VAR_6, "no link frequencies defined");
  VAR_11 = -VAR_0;
  goto check_hwcfg_error;
 }

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_5); VAR_12++) {
  for (VAR_13 = 0; VAR_13 < VAR_9.nr_of_link_frequencies; VAR_13++) {
   if (VAR_5[VAR_12] ==
    VAR_9.link_frequencies[VAR_13])
    break;
  }

  if (VAR_13 == VAR_9.nr_of_link_frequencies) {
   FUNC_1(VAR_6, "no link frequency %lld supported",
    VAR_5[VAR_12]);
   VAR_11 = -VAR_0;
   goto check_hwcfg_error;
  }
 }

check_hwcfg_error:
 FUNC_7(&VAR_9);

 return VAR_11;
}
