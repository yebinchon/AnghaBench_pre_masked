
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct idt_ntb_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum idt_temp_val { ____Placeholder_idt_temp_val } idt_temp_val ;


 struct idt_ntb_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct idt_ntb_dev*,int,long*) ;
 int FUNC_2 (char*,char*,long) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
       struct device_attribute *VAR_1, char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_3(VAR_1);
 struct idt_ntb_dev *VAR_4 = FUNC_0(VAR_0);
 enum idt_temp_val VAR_5 = VAR_3->index;
 long VAR_6;

 FUNC_1(VAR_4, VAR_5, &VAR_6);
 return FUNC_2(VAR_2, "%ld\n", VAR_6);
}
