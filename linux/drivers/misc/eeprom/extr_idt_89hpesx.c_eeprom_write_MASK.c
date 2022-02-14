
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct kobject {int dummy; } ;
struct idt_89hpesx_dev {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;


 struct idt_89hpesx_dev* FUNC_0 (int ) ;
 int FUNC_1 (struct idt_89hpesx_dev*,int ,int ,int *) ;
 int FUNC_2 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_3(struct file *VAR_0, struct kobject *VAR_1,
       struct bin_attribute *VAR_2,
       char *VAR_3, loff_t VAR_4, size_t VAR_5)
{
 struct idt_89hpesx_dev *VAR_6;
 int VAR_7;


 VAR_6 = FUNC_0(FUNC_2(VAR_1));


 VAR_7 = FUNC_1(VAR_6, (u16)VAR_4, (u16)VAR_5, (u8 *)VAR_3);
 return (VAR_7 != 0 ? VAR_7 : VAR_5);
}
