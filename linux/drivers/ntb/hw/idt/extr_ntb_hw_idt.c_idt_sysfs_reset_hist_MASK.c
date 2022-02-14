
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idt_ntb_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct idt_ntb_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct idt_ntb_dev*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_4,
        struct device_attribute *VAR_5,
        const char *VAR_6, size_t VAR_7)
{
 struct idt_ntb_dev *VAR_8 = FUNC_0(VAR_4);




 FUNC_1(VAR_8, VAR_1, VAR_2);
 FUNC_1(VAR_8, VAR_0, VAR_3);

 return VAR_7;
}
