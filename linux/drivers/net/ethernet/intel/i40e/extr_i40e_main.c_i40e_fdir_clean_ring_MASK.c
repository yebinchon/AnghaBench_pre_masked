
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i40e_vsi {int work_limit; } ;
struct TYPE_3__ {TYPE_2__* ring; } ;
struct i40e_q_vector {TYPE_1__ tx; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {struct i40e_vsi* vsi; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct i40e_q_vector *VAR_3 = VAR_2;
 struct i40e_vsi *VAR_4;

 if (!VAR_3->tx.ring)
  return VAR_0;

 VAR_4 = VAR_3->tx.ring->vsi;
 FUNC_0(VAR_3->tx.ring, VAR_4->work_limit);

 return VAR_0;
}
