
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_pf {int flags; int num_alloc_vsi; scalar_t__* veb; TYPE_1__** vsi; int state; scalar_t__ service_timer_previous; scalar_t__ service_timer_period; } ;
struct TYPE_2__ {scalar_t__ netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct i40e_pf*) ;
 int FUNC_1 (struct i40e_pf*) ;
 int FUNC_2 (struct i40e_pf*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct i40e_pf *VAR_7)
{
 int VAR_8;


 if (FUNC_5(VAR_4, VAR_7->state) ||
     FUNC_5(VAR_3, VAR_7->state))
  return;


 if (FUNC_6(VAR_6, (VAR_7->service_timer_previous +
      VAR_7->service_timer_period)))
  return;
 VAR_7->service_timer_previous = VAR_6;

 if ((VAR_7->flags & VAR_0) ||
     FUNC_5(VAR_5, VAR_7->state))
  FUNC_0(VAR_7);




 for (VAR_8 = 0; VAR_8 < VAR_7->num_alloc_vsi; VAR_8++)
  if (VAR_7->vsi[VAR_8] && VAR_7->vsi[VAR_8]->netdev)
   FUNC_3(VAR_7->vsi[VAR_8]);

 if (VAR_7->flags & VAR_1) {

  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
   if (VAR_7->veb[VAR_8])
    FUNC_4(VAR_7->veb[VAR_8]);
 }

 FUNC_1(VAR_7);
 FUNC_2(VAR_7);
}
