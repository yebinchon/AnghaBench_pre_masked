
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int parent; } ;
struct abx500_ops {int (* get_chip_id ) (struct device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,struct abx500_ops**) ;
 int FUNC_1 (struct device*) ;

int FUNC_2(struct device *VAR_1)
{
 struct abx500_ops *VAR_2;

 FUNC_0(VAR_1->parent, &VAR_2);
 if (VAR_2 && VAR_2->get_chip_id)
  return VAR_2->get_chip_id(VAR_1);
 else
  return -VAR_0;
}
