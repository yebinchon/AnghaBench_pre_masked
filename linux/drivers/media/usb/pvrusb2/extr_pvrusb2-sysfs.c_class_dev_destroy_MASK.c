
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct pvr2_sysfs {TYPE_1__* class_dev; int attr_unit_number; scalar_t__ unit_number_created_ok; int attr_v4l_radio_minor_number; scalar_t__ v4l_radio_minor_number_created_ok; int attr_v4l_minor_number; scalar_t__ v4l_minor_number_created_ok; int attr_bus_info; scalar_t__ bus_info_created_ok; int attr_hdw_name; scalar_t__ hdw_name_created_ok; int attr_hdw_desc; scalar_t__ hdw_desc_created_ok; } ;
struct device {int dummy; } ;
struct TYPE_5__ {struct device* parent; } ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct pvr2_sysfs*) ;
 int FUNC_5 (struct pvr2_sysfs*) ;
 int FUNC_6 (char*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(struct pvr2_sysfs *VAR_0)
{
 struct device *VAR_1;
 if (!VAR_0->class_dev) return;



 FUNC_4(VAR_0);
 if (VAR_0->hdw_desc_created_ok) {
  FUNC_1(VAR_0->class_dev,
       &VAR_0->attr_hdw_desc);
 }
 if (VAR_0->hdw_name_created_ok) {
  FUNC_1(VAR_0->class_dev,
       &VAR_0->attr_hdw_name);
 }
 if (VAR_0->bus_info_created_ok) {
  FUNC_1(VAR_0->class_dev,
      &VAR_0->attr_bus_info);
 }
 if (VAR_0->v4l_minor_number_created_ok) {
  FUNC_1(VAR_0->class_dev,
      &VAR_0->attr_v4l_minor_number);
 }
 if (VAR_0->v4l_radio_minor_number_created_ok) {
  FUNC_1(VAR_0->class_dev,
      &VAR_0->attr_v4l_radio_minor_number);
 }
 if (VAR_0->unit_number_created_ok) {
  FUNC_1(VAR_0->class_dev,
      &VAR_0->attr_unit_number);
 }
 FUNC_6("Destroying class_dev id=%p",VAR_0->class_dev);
 FUNC_0(VAR_0->class_dev, ((void*)0));
 VAR_1 = VAR_0->class_dev->parent;
 VAR_0->class_dev->parent = ((void*)0);
 FUNC_3(VAR_1);
 FUNC_2(VAR_0->class_dev);
 VAR_0->class_dev = ((void*)0);
}
