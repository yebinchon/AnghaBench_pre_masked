
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_uevent_env {int dummy; } ;
struct greybus_descriptor_cport {int protocol_id; } ;
struct gbphy_device {int id; struct gb_bundle* bundle; struct greybus_descriptor_cport* cport_desc; } ;
struct gb_module {int module_id; } ;
struct gb_interface {int product_id; int vendor_id; int interface_id; struct gb_host_device* hd; struct gb_module* module; } ;
struct gb_host_device {int bus_id; } ;
struct gb_bundle {int class; int id; struct gb_interface* intf; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kobj_uevent_env*,char*,int ,...) ;
 struct gbphy_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct kobj_uevent_env *VAR_2)
{
 struct gbphy_device *VAR_3 = FUNC_1(VAR_1);
 struct greybus_descriptor_cport *VAR_4 = VAR_3->cport_desc;
 struct gb_bundle *VAR_5 = VAR_3->bundle;
 struct gb_interface *VAR_6 = VAR_5->intf;
 struct gb_module *VAR_7 = VAR_6->module;
 struct gb_host_device *VAR_8 = VAR_6->hd;

 if (FUNC_0(VAR_2, "BUS=%u", VAR_8->bus_id))
  return -VAR_0;
 if (FUNC_0(VAR_2, "MODULE=%u", VAR_7->module_id))
  return -VAR_0;
 if (FUNC_0(VAR_2, "INTERFACE=%u", VAR_6->interface_id))
  return -VAR_0;
 if (FUNC_0(VAR_2, "GREYBUS_ID=%08x/%08x",
      VAR_6->vendor_id, VAR_6->product_id))
  return -VAR_0;
 if (FUNC_0(VAR_2, "BUNDLE=%u", VAR_3->bundle->id))
  return -VAR_0;
 if (FUNC_0(VAR_2, "BUNDLE_CLASS=%02x", VAR_5->class))
  return -VAR_0;
 if (FUNC_0(VAR_2, "GBPHY=%u", VAR_3->id))
  return -VAR_0;
 if (FUNC_0(VAR_2, "PROTOCOL_ID=%02x", VAR_4->protocol_id))
  return -VAR_0;

 return 0;
}
