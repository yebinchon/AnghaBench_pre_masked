
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char* u32 ;
struct v4l2_fwnode_bus_parallel {unsigned int flags; char* bus_width; char* data_shift; } ;
struct TYPE_2__ {struct v4l2_fwnode_bus_parallel parallel; } ;
struct v4l2_fwnode_endpoint {int bus_type; TYPE_1__ bus; } ;
struct fwnode_handle {int dummy; } ;
typedef enum v4l2_mbus_type { ____Placeholder_v4l2_mbus_type } v4l2_mbus_type ;


 unsigned int VAR_0 ;

 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;

 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 scalar_t__ FUNC_0 (struct fwnode_handle*,char*) ;
 int FUNC_1 (struct fwnode_handle*,char*,char**) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(struct fwnode_handle *VAR_17,
     struct v4l2_fwnode_endpoint *VAR_18,
     enum v4l2_mbus_type VAR_19)
{
 struct v4l2_fwnode_bus_parallel *VAR_20 = &VAR_18->bus.parallel;
 unsigned int VAR_21 = 0;
 u32 VAR_22;

 if (VAR_19 == 128 || VAR_19 == 129)
  VAR_21 = VAR_20->flags;

 if (!FUNC_1(VAR_17, "hsync-active", &VAR_22)) {
  VAR_21 &= ~(VAR_7 |
      VAR_8);
  VAR_21 |= VAR_22 ? VAR_7 :
   VAR_8;
  FUNC_2("hsync-active %s\n", VAR_22 ? "high" : "low");
 }

 if (!FUNC_1(VAR_17, "vsync-active", &VAR_22)) {
  VAR_21 &= ~(VAR_15 |
      VAR_16);
  VAR_21 |= VAR_22 ? VAR_15 :
   VAR_16;
  FUNC_2("vsync-active %s\n", VAR_22 ? "high" : "low");
 }

 if (!FUNC_1(VAR_17, "field-even-active", &VAR_22)) {
  VAR_21 &= ~(VAR_5 |
      VAR_6);
  VAR_21 |= VAR_22 ? VAR_5 :
   VAR_6;
  FUNC_2("field-even-active %s\n", VAR_22 ? "high" : "low");
 }

 if (!FUNC_1(VAR_17, "pclk-sample", &VAR_22)) {
  VAR_21 &= ~(VAR_11 |
      VAR_10);
  VAR_21 |= VAR_22 ? VAR_11 :
   VAR_10;
  FUNC_2("pclk-sample %s\n", VAR_22 ? "high" : "low");
 }

 if (!FUNC_1(VAR_17, "data-active", &VAR_22)) {
  VAR_21 &= ~(VAR_1 |
      VAR_2);
  VAR_21 |= VAR_22 ? VAR_1 :
   VAR_2;
  FUNC_2("data-active %s\n", VAR_22 ? "high" : "low");
 }

 if (FUNC_0(VAR_17, "slave-mode")) {
  FUNC_2("slave mode\n");
  VAR_21 &= ~VAR_9;
  VAR_21 |= VAR_12;
 } else {
  VAR_21 &= ~VAR_12;
  VAR_21 |= VAR_9;
 }

 if (!FUNC_1(VAR_17, "bus-width", &VAR_22)) {
  VAR_20->bus_width = VAR_22;
  FUNC_2("bus-width %u\n", VAR_22);
 }

 if (!FUNC_1(VAR_17, "data-shift", &VAR_22)) {
  VAR_20->data_shift = VAR_22;
  FUNC_2("data-shift %u\n", VAR_22);
 }

 if (!FUNC_1(VAR_17, "sync-on-green-active", &VAR_22)) {
  VAR_21 &= ~(VAR_13 |
      VAR_14);
  VAR_21 |= VAR_22 ? VAR_13 :
   VAR_14;
  FUNC_2("sync-on-green-active %s\n", VAR_22 ? "high" : "low");
 }

 if (!FUNC_1(VAR_17, "data-enable-active", &VAR_22)) {
  VAR_21 &= ~(VAR_3 |
      VAR_4);
  VAR_21 |= VAR_22 ? VAR_3 :
   VAR_4;
  FUNC_2("data-enable-active %s\n", VAR_22 ? "high" : "low");
 }

 switch (VAR_19) {
 default:
  VAR_20->flags = VAR_21;
  if (VAR_21 & VAR_0)
   VAR_18->bus_type = 128;
  else
   VAR_18->bus_type = 129;
  break;
 case 128:
  VAR_18->bus_type = 128;
  VAR_20->flags = VAR_21;
  break;
 case 129:
  VAR_18->bus_type = 129;
  VAR_20->flags = VAR_21 & ~VAR_0;
  break;
 }
}
