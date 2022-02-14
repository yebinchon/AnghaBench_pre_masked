
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vudc {int lock; int desc_cached; int dev_desc; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct device {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct kobject*) ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_5(struct file *VAR_1, struct kobject *VAR_2,
        struct bin_attribute *VAR_3, char *VAR_4,
        loff_t VAR_5, size_t VAR_6)
{
 struct device *VAR_7 = FUNC_1(VAR_2);
 struct vudc *VAR_8 = (struct vudc *)FUNC_0(VAR_7);
 char *VAR_9 = (char *) &VAR_8->dev_desc;
 unsigned long VAR_10;
 int VAR_11;

 FUNC_3(&VAR_8->lock, VAR_10);
 if (!VAR_8->desc_cached) {
  VAR_11 = -VAR_0;
  goto unlock;
 }

 FUNC_2(VAR_4, VAR_9 + VAR_5, VAR_6);
 VAR_11 = VAR_6;
unlock:
 FUNC_4(&VAR_8->lock, VAR_10);
 return VAR_11;
}
