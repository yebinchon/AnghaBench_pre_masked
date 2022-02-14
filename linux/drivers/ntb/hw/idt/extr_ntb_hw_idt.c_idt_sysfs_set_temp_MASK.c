
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long FUNC_0 (long,int ,int ) ;
 struct idt_ntb_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (struct idt_ntb_dev*,int,long) ;
 int FUNC_3 (char const*,int,long*) ;
 struct sensor_device_attribute* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_5,
      struct device_attribute *VAR_6, const char *VAR_7,
      size_t VAR_8)
{
 struct sensor_device_attribute *VAR_9 = FUNC_4(VAR_6);
 struct idt_ntb_dev *VAR_10 = FUNC_1(VAR_5);
 enum idt_temp_val VAR_11 = VAR_9->index;
 long VAR_12;
 int VAR_13;

 VAR_13 = FUNC_3(VAR_7, 10, &VAR_12);
 if (VAR_13)
  return VAR_13;


 if (VAR_11 == VAR_4)
  VAR_12 = FUNC_0(VAR_12, VAR_3,
     VAR_1);
 else
  VAR_12 = FUNC_0(VAR_12, VAR_2, VAR_0);

 FUNC_2(VAR_10, VAR_11, VAR_12);

 return VAR_8;
}
