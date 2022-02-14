
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* connect ) (struct fm10k_hw*,TYPE_3__*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct fm10k_hw {TYPE_3__ mbx; TYPE_1__ mac; } ;
struct fm10k_intfc {struct fm10k_hw hw; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct fm10k_intfc*) ;
 int FUNC_1 (struct fm10k_intfc*) ;
 int FUNC_2 (struct fm10k_intfc*) ;
 int FUNC_3 (struct fm10k_hw*,TYPE_3__*) ;

int FUNC_4(struct fm10k_intfc *VAR_1)
{
 struct fm10k_hw *VAR_2 = &VAR_1->hw;
 int VAR_3;


 if (VAR_2->mac.type == VAR_0)
  VAR_3 = FUNC_1(VAR_1);
 else
  VAR_3 = FUNC_2(VAR_1);
 if (VAR_3)
  return VAR_3;


 VAR_3 = VAR_2->mbx.ops.connect(VAR_2, &VAR_2->mbx);


 if (VAR_3)
  FUNC_0(VAR_1);

 return VAR_3;
}
