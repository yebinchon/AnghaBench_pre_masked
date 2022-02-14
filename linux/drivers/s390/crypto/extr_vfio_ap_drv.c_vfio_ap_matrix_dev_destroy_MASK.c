
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_4__ {struct device* parent; } ;
struct TYPE_3__ {TYPE_2__ device; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(void)
{
 struct device *VAR_3 = VAR_1->device.parent;

 FUNC_2(&VAR_2);
 FUNC_1(&VAR_1->device);
 FUNC_0(&VAR_0);
 FUNC_3(VAR_3);
}
