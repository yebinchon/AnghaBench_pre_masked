
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt2x00_dev {TYPE_1__* ops; } ;
struct rt2800_ops {int (* read_eeprom ) (struct rt2x00_dev*) ;} ;
struct TYPE_2__ {struct rt2800_ops* drv; } ;


 int FUNC_0 (struct rt2x00_dev*) ;

__attribute__((used)) static inline int FUNC_1(struct rt2x00_dev *VAR_0)
{
 const struct rt2800_ops *VAR_1 = VAR_0->ops->drv;

 return VAR_1->read_eeprom(VAR_0);
}
