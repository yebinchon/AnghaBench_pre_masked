
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct comedi_device {struct device* hw_dev; } ;


 int VAR_0 ;
 struct device* FUNC_0 (struct device*) ;

int FUNC_1(struct comedi_device *VAR_1, struct device *VAR_2)
{
 if (VAR_2 == VAR_1->hw_dev)
  return 0;
 if (VAR_1->hw_dev)
  return -VAR_0;
 VAR_1->hw_dev = FUNC_0(VAR_2);
 return 0;
}
