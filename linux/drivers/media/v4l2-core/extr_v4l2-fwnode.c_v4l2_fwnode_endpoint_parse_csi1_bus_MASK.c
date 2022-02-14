
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct v4l2_fwnode_bus_mipi_csi1 {void* clock_lane; void* data_lane; void* strobe; void* clock_inv; } ;
struct TYPE_2__ {struct v4l2_fwnode_bus_mipi_csi1 mipi_csi1; } ;
struct v4l2_fwnode_endpoint {int bus_type; TYPE_1__ bus; } ;
struct fwnode_handle {int dummy; } ;
typedef enum v4l2_mbus_type { ____Placeholder_v4l2_mbus_type } v4l2_mbus_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fwnode_handle*,char*,void**) ;
 int FUNC_1 (char*,void*) ;

__attribute__((used)) static void
FUNC_2(struct fwnode_handle *VAR_2,
        struct v4l2_fwnode_endpoint *VAR_3,
        enum v4l2_mbus_type VAR_4)
{
 struct v4l2_fwnode_bus_mipi_csi1 *VAR_5 = &VAR_3->bus.mipi_csi1;
 u32 VAR_6;

 if (!FUNC_0(VAR_2, "clock-inv", &VAR_6)) {
  VAR_5->clock_inv = VAR_6;
  FUNC_1("clock-inv %u\n", VAR_6);
 }

 if (!FUNC_0(VAR_2, "strobe", &VAR_6)) {
  VAR_5->strobe = VAR_6;
  FUNC_1("strobe %u\n", VAR_6);
 }

 if (!FUNC_0(VAR_2, "data-lanes", &VAR_6)) {
  VAR_5->data_lane = VAR_6;
  FUNC_1("data-lanes %u\n", VAR_6);
 }

 if (!FUNC_0(VAR_2, "clock-lanes", &VAR_6)) {
  VAR_5->clock_lane = VAR_6;
  FUNC_1("clock-lanes %u\n", VAR_6);
 }

 if (VAR_4 == VAR_0)
  VAR_3->bus_type = VAR_0;
 else
  VAR_3->bus_type = VAR_1;
}
