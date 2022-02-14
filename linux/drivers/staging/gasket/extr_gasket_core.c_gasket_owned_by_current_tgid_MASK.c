
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ owner; scalar_t__ is_owned; } ;
struct gasket_cdev_info {TYPE_1__ ownership; } ;
struct TYPE_4__ {scalar_t__ tgid; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_0(struct gasket_cdev_info *VAR_1)
{
 return (VAR_1->ownership.is_owned &&
  (VAR_1->ownership.owner == VAR_0->tgid));
}
