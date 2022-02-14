
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_device {int dev; } ;
struct pvr2_sysfs_class {int class; } ;
struct TYPE_5__ {char* name; void* mode; } ;
struct TYPE_6__ {int * store; int show; TYPE_2__ attr; } ;
struct TYPE_4__ {int hdw; } ;
struct pvr2_sysfs {int v4l_minor_number_created_ok; int v4l_radio_minor_number_created_ok; int unit_number_created_ok; int bus_info_created_ok; int hdw_name_created_ok; int hdw_desc_created_ok; TYPE_3__ attr_hdw_desc; struct device* class_dev; TYPE_3__ attr_hdw_name; TYPE_3__ attr_bus_info; TYPE_3__ attr_unit_number; TYPE_3__ attr_v4l_radio_minor_number; TYPE_3__ attr_v4l_minor_number; TYPE_1__ channel; } ;
struct device {int parent; int * class; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,struct pvr2_sysfs*) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (struct device*,TYPE_3__*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 struct device* FUNC_5 (int,int ) ;
 int FUNC_6 (struct device*) ;
 struct usb_device* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct pvr2_sysfs*) ;
 int FUNC_10 (struct pvr2_sysfs*) ;
 int FUNC_11 (char*,struct device*) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_14(struct pvr2_sysfs *VAR_9,
        struct pvr2_sysfs_class *VAR_10)
{
 struct usb_device *VAR_11;
 struct device *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_7(VAR_9->channel.hdw);
 if (!VAR_11) return;
 VAR_12 = FUNC_5(sizeof(*VAR_12),VAR_0);
 if (!VAR_12) return;

 FUNC_11("Creating class_dev id=%p",VAR_12);

 VAR_12->class = &VAR_10->class;

 FUNC_1(VAR_12, "%s",
       FUNC_8(VAR_9->channel.hdw));

 VAR_12->parent = FUNC_4(&VAR_11->dev);

 VAR_9->class_dev = VAR_12;
 FUNC_0(VAR_12, VAR_9);
 VAR_13 = FUNC_3(VAR_12);
 if (VAR_13) {
  FUNC_12(VAR_1,
      "device_register failed");
  FUNC_6(VAR_12);
  return;
 }

 FUNC_13(&VAR_9->attr_v4l_minor_number.attr);
 VAR_9->attr_v4l_minor_number.attr.name = "v4l_minor_number";
 VAR_9->attr_v4l_minor_number.attr.mode = VAR_2;
 VAR_9->attr_v4l_minor_number.show = VAR_7;
 VAR_9->attr_v4l_minor_number.store = ((void*)0);
 VAR_13 = FUNC_2(VAR_9->class_dev,
           &VAR_9->attr_v4l_minor_number);
 if (VAR_13 < 0) {
  FUNC_12(VAR_1,
      "device_create_file error: %d",
      VAR_13);
 } else {
  VAR_9->v4l_minor_number_created_ok = !0;
 }

 FUNC_13(&VAR_9->attr_v4l_radio_minor_number.attr);
 VAR_9->attr_v4l_radio_minor_number.attr.name = "v4l_radio_minor_number";
 VAR_9->attr_v4l_radio_minor_number.attr.mode = VAR_2;
 VAR_9->attr_v4l_radio_minor_number.show = VAR_8;
 VAR_9->attr_v4l_radio_minor_number.store = ((void*)0);
 VAR_13 = FUNC_2(VAR_9->class_dev,
           &VAR_9->attr_v4l_radio_minor_number);
 if (VAR_13 < 0) {
  FUNC_12(VAR_1,
      "device_create_file error: %d",
      VAR_13);
 } else {
  VAR_9->v4l_radio_minor_number_created_ok = !0;
 }

 FUNC_13(&VAR_9->attr_unit_number.attr);
 VAR_9->attr_unit_number.attr.name = "unit_number";
 VAR_9->attr_unit_number.attr.mode = VAR_2;
 VAR_9->attr_unit_number.show = VAR_6;
 VAR_9->attr_unit_number.store = ((void*)0);
 VAR_13 = FUNC_2(VAR_9->class_dev,&VAR_9->attr_unit_number);
 if (VAR_13 < 0) {
  FUNC_12(VAR_1,
      "device_create_file error: %d",
      VAR_13);
 } else {
  VAR_9->unit_number_created_ok = !0;
 }

 FUNC_13(&VAR_9->attr_bus_info.attr);
 VAR_9->attr_bus_info.attr.name = "bus_info_str";
 VAR_9->attr_bus_info.attr.mode = VAR_2;
 VAR_9->attr_bus_info.show = VAR_3;
 VAR_9->attr_bus_info.store = ((void*)0);
 VAR_13 = FUNC_2(VAR_9->class_dev,
           &VAR_9->attr_bus_info);
 if (VAR_13 < 0) {
  FUNC_12(VAR_1,
      "device_create_file error: %d",
      VAR_13);
 } else {
  VAR_9->bus_info_created_ok = !0;
 }

 FUNC_13(&VAR_9->attr_hdw_name.attr);
 VAR_9->attr_hdw_name.attr.name = "device_hardware_type";
 VAR_9->attr_hdw_name.attr.mode = VAR_2;
 VAR_9->attr_hdw_name.show = VAR_5;
 VAR_9->attr_hdw_name.store = ((void*)0);
 VAR_13 = FUNC_2(VAR_9->class_dev,
     &VAR_9->attr_hdw_name);
 if (VAR_13 < 0) {
  FUNC_12(VAR_1,
      "device_create_file error: %d",
      VAR_13);
 } else {
  VAR_9->hdw_name_created_ok = !0;
 }

 FUNC_13(&VAR_9->attr_hdw_desc.attr);
 VAR_9->attr_hdw_desc.attr.name = "device_hardware_description";
 VAR_9->attr_hdw_desc.attr.mode = VAR_2;
 VAR_9->attr_hdw_desc.show = VAR_4;
 VAR_9->attr_hdw_desc.store = ((void*)0);
 VAR_13 = FUNC_2(VAR_9->class_dev,
     &VAR_9->attr_hdw_desc);
 if (VAR_13 < 0) {
  FUNC_12(VAR_1,
      "device_create_file error: %d",
      VAR_13);
 } else {
  VAR_9->hdw_desc_created_ok = !0;
 }

 FUNC_9(VAR_9);



}
