
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct da903x_chip {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* read_status ) (struct da903x_chip*,unsigned int*) ;} ;


 struct da903x_chip* FUNC_0 (struct device*) ;
 int FUNC_1 (struct da903x_chip*,unsigned int*) ;

int FUNC_2(struct device *VAR_0, unsigned int VAR_1)
{
 struct da903x_chip *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3 = 0;

 VAR_2->ops->read_status(VAR_2, &VAR_3);
 return ((VAR_3 & VAR_1) == VAR_1);
}
