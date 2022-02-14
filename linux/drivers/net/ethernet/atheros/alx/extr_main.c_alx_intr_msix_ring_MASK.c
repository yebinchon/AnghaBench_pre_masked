
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct alx_napi {int napi; int vec_mask; int vec_idx; TYPE_1__* alx; } ;
struct alx_hw {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct alx_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct alx_hw*,int ,int) ;
 int FUNC_1 (struct alx_hw*,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct alx_napi *VAR_4 = VAR_3;
 struct alx_hw *VAR_5 = &VAR_4->alx->hw;


 FUNC_0(VAR_5, VAR_4->vec_idx, 1);

 FUNC_1(VAR_5, VAR_0, VAR_4->vec_mask);

 FUNC_2(&VAR_4->napi);

 return VAR_1;
}
