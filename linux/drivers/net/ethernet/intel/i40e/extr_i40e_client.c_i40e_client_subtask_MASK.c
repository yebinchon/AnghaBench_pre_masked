
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_vsi {int * state; scalar_t__ netdev_registered; } ;
struct i40e_pf {size_t lan_vsi; int * state; struct i40e_client_instance* cinst; struct i40e_vsi** vsi; } ;
struct i40e_client_instance {int lan_info; int state; } ;
struct i40e_client {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* open ) (int *,struct i40e_client*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct i40e_pf*) ;
 int FUNC_2 (int *,struct i40e_client*,int ,int ,int ,int ) ;
 struct i40e_client* VAR_6 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,struct i40e_client*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

void FUNC_7(struct i40e_pf *VAR_7)
{
 struct i40e_client *VAR_8 = VAR_6;
 struct i40e_client_instance *VAR_9;
 struct i40e_vsi *VAR_10 = VAR_7->vsi[VAR_7->lan_vsi];
 int VAR_11 = 0;

 if (!FUNC_5(VAR_2, VAR_7->state))
  return;
 VAR_9 = VAR_7->cinst;


 if (FUNC_6(VAR_4, VAR_7->state) ||
     FUNC_6(VAR_3, VAR_7->state))
  return;

 if (!VAR_8 || !VAR_9)
  return;




 if (!FUNC_6(VAR_1, &VAR_9->state)) {
  if (VAR_10->netdev_registered &&
      VAR_8->ops && VAR_8->ops->open) {
   FUNC_3(VAR_1, &VAR_9->state);
   VAR_11 = VAR_8->ops->open(&VAR_9->lan_info, VAR_8);
   if (VAR_11) {

    FUNC_0(VAR_1,
       &VAR_9->state);
    FUNC_1(VAR_7);
   }
  }
 }



 if (FUNC_6(VAR_5, VAR_10->state))
  FUNC_2(&VAR_9->lan_info, VAR_8,
         0, 0, 0,
         VAR_0);
 else
  FUNC_2(&VAR_9->lan_info, VAR_8,
         0, 0,
         VAR_0,
         VAR_0);
}
