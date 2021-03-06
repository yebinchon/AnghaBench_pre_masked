
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65910 {int dummy; } ;
struct attribute {int name; } ;
struct device_attribute {struct attribute attr; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int COMP1 ;
 int COMP2 ;
 int EINVAL ;
 int comp_threshold_get (struct tps65910*,int) ;
 struct tps65910* dev_get_drvdata (int ) ;
 int sprintf (char*,char*,int) ;
 int strcmp (int ,char*) ;

__attribute__((used)) static ssize_t comp_threshold_show(struct device *dev,
    struct device_attribute *attr, char *buf)
{
 struct tps65910 *tps65910 = dev_get_drvdata(dev->parent);
 struct attribute comp_attr = attr->attr;
 int id, uVolt;

 if (!strcmp(comp_attr.name, "comp1_threshold"))
  id = COMP1;
 else if (!strcmp(comp_attr.name, "comp2_threshold"))
  id = COMP2;
 else
  return -EINVAL;

 uVolt = comp_threshold_get(tps65910, id);

 return sprintf(buf, "%d\n", uVolt);
}
