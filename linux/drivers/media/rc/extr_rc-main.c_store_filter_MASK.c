
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_scancode_filter {unsigned long mask; unsigned long data; } ;
struct rc_filter_attribute {scalar_t__ type; scalar_t__ mask; } ;
struct rc_dev {int (* s_filter ) (struct rc_dev*,struct rc_scancode_filter*) ;int (* s_wakeup_filter ) (struct rc_dev*,struct rc_scancode_filter*) ;scalar_t__ wakeup_protocol; int lock; int enabled_protocols; struct rc_scancode_filter scancode_wakeup_filter; struct rc_scancode_filter scancode_filter; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char const*,int ,unsigned long*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rc_dev*,struct rc_scancode_filter*) ;
 struct rc_dev* FUNC_4 (struct device*) ;
 struct rc_filter_attribute* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_4,
       struct device_attribute *VAR_5,
       const char *VAR_6, size_t VAR_7)
{
 struct rc_dev *VAR_8 = FUNC_4(VAR_4);
 struct rc_filter_attribute *VAR_9 = FUNC_5(VAR_5);
 struct rc_scancode_filter VAR_10, *VAR_11;
 int VAR_12;
 unsigned long VAR_13;
 int (*VAR_14)(struct rc_dev *VAR_15, struct rc_scancode_filter *VAR_16);

 VAR_12 = FUNC_0(VAR_6, 0, &VAR_13);
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_9->type == VAR_1) {
  VAR_14 = VAR_8->s_filter;
  VAR_11 = &VAR_8->scancode_filter;
 } else {
  VAR_14 = VAR_8->s_wakeup_filter;
  VAR_11 = &VAR_8->scancode_wakeup_filter;
 }

 if (!VAR_14)
  return -VAR_0;

 FUNC_1(&VAR_8->lock);

 VAR_10 = *VAR_11;
 if (VAR_9->mask)
  VAR_10.mask = VAR_13;
 else
  VAR_10.data = VAR_13;

 if (VAR_9->type == VAR_2) {




  if (VAR_8->wakeup_protocol != VAR_3)
   VAR_12 = FUNC_3(VAR_8, &VAR_10);
  else
   VAR_12 = -VAR_0;

  if (VAR_12 != 0)
   goto unlock;
 }

 if (VAR_9->type == VAR_1 && !VAR_8->enabled_protocols &&
     VAR_13) {

  VAR_12 = -VAR_0;
  goto unlock;
 }

 VAR_12 = VAR_14(VAR_8, &VAR_10);
 if (VAR_12 < 0)
  goto unlock;

 *VAR_11 = VAR_10;

unlock:
 FUNC_2(&VAR_8->lock);
 return (VAR_12 < 0) ? VAR_12 : VAR_7;
}
