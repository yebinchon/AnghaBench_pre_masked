
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm1105_dev {size_t boardnr; } ;
struct TYPE_2__ {int gpio_scl; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (struct dm1105_dev*,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_1)
{
 struct dm1105_dev *VAR_2 = VAR_1;

 return FUNC_0(VAR_2, VAR_0[VAR_2->boardnr].gpio_scl)
         ? 1 : 0;
}
