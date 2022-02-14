
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_pf {int num_alloc_vsi; int state; TYPE_1__** vsi; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct i40e_pf *VAR_3)
{
 int VAR_4;

 if (!VAR_3)
  return;
 if (!FUNC_3(VAR_1, VAR_3->state))
  return;
 if (FUNC_4(VAR_2, VAR_3->state)) {
  FUNC_2(VAR_1, VAR_3->state);
  return;
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->num_alloc_vsi; VAR_4++) {
  if (VAR_3->vsi[VAR_4] &&
      (VAR_3->vsi[VAR_4]->flags & VAR_0)) {
   int VAR_5 = FUNC_1(VAR_3->vsi[VAR_4]);

   if (VAR_5) {

    FUNC_2(VAR_1,
     VAR_3->state);
    break;
   }
  }
 }
 FUNC_0(VAR_2, VAR_3->state);
}
