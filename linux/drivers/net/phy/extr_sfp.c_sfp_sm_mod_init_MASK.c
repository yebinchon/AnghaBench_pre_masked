
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ e100_base_fx; scalar_t__ e100_base_lx; scalar_t__ e1000_base_t; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct sfp {int sm_retries; TYPE_2__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sfp*) ;
 int FUNC_1 (struct sfp*,int ,int ) ;
 int FUNC_2 (struct sfp*) ;

__attribute__((used)) static void FUNC_3(struct sfp *VAR_2)
{
 FUNC_0(VAR_2);





 FUNC_1(VAR_2, VAR_0, VAR_1);
 VAR_2->sm_retries = 5;
 if (VAR_2->id.base.e1000_base_t ||
     VAR_2->id.base.e100_base_lx ||
     VAR_2->id.base.e100_base_fx)
  FUNC_2(VAR_2);
}
