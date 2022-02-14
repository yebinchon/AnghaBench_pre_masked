
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rc_scancode_filter {int mask; int data; } ;
struct rc_filter_attribute {scalar_t__ type; scalar_t__ mask; } ;
struct rc_dev {int lock; struct rc_scancode_filter scancode_wakeup_filter; struct rc_scancode_filter scancode_filter; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int) ;
 struct rc_dev* FUNC_3 (struct device*) ;
 struct rc_filter_attribute* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
      struct device_attribute *VAR_2,
      char *VAR_3)
{
 struct rc_dev *VAR_4 = FUNC_3(VAR_1);
 struct rc_filter_attribute *VAR_5 = FUNC_4(VAR_2);
 struct rc_scancode_filter *VAR_6;
 u32 VAR_7;

 FUNC_0(&VAR_4->lock);

 if (VAR_5->type == VAR_0)
  VAR_6 = &VAR_4->scancode_filter;
 else
  VAR_6 = &VAR_4->scancode_wakeup_filter;

 if (VAR_5->mask)
  VAR_7 = VAR_6->mask;
 else
  VAR_7 = VAR_6->data;
 FUNC_1(&VAR_4->lock);

 return FUNC_2(VAR_3, "%#x\n", VAR_7);
}
