
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rio_dev {TYPE_2__* rswitch; scalar_t__ em_efptr; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* em_init ) (struct rio_dev*) ;} ;


 scalar_t__ FUNC_0 (struct rio_dev*) ;
 int FUNC_1 (struct rio_dev*) ;

__attribute__((used)) static void FUNC_2(struct rio_dev *VAR_0)
{
 if (FUNC_0(VAR_0) && (VAR_0->em_efptr) &&
     VAR_0->rswitch->ops && VAR_0->rswitch->ops->em_init) {
  VAR_0->rswitch->ops->em_init(VAR_0);
 }
}
