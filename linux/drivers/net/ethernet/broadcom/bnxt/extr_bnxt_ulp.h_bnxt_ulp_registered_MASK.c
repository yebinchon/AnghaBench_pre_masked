
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnxt_en_dev {TYPE_1__* ulp_tbl; } ;
struct TYPE_2__ {int ulp_ops; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct bnxt_en_dev *VAR_0, int VAR_1)
{
 if (VAR_0 && FUNC_0(VAR_0->ulp_tbl[VAR_1].ulp_ops))
  return 1;
 return 0;
}
