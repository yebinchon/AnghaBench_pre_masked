
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_vsi {TYPE_1__* back; int flags; } ;
struct i40e_mac_filter {scalar_t__ state; int hlist; } ;
struct TYPE_2__ {int state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct i40e_mac_filter*) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct i40e_vsi *VAR_5, struct i40e_mac_filter *VAR_6)
{
 if (!VAR_6)
  return;





 if ((VAR_6->state == VAR_0) ||
     (VAR_6->state == VAR_1)) {
  FUNC_0(&VAR_6->hlist);
  FUNC_1(VAR_6);
 } else {
  VAR_6->state = VAR_2;
 }

 VAR_5->flags |= VAR_3;
 FUNC_2(VAR_4, VAR_5->back->state);
}
