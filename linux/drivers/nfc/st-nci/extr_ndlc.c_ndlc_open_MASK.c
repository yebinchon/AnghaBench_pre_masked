
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct llt_ndlc {int powered; int phy_id; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* enable ) (int ) ;} ;


 int FUNC_0 (int ) ;

int FUNC_1(struct llt_ndlc *VAR_0)
{

 VAR_0->ops->enable(VAR_0->phy_id);
 VAR_0->powered = 1;
 return 0;
}
