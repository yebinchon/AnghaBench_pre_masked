
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i40e_vsi {scalar_t__ type; scalar_t__ netdev; int state; struct i40e_pf* back; } ;
struct TYPE_4__ {int link_info; } ;
struct TYPE_5__ {TYPE_1__ link_info; } ;
struct TYPE_6__ {TYPE_2__ phy; } ;
struct i40e_pf {int flags; int state; scalar_t__ fd_atr_cnt; scalar_t__ fd_add_err; TYPE_3__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct i40e_vsi*) ;
 int FUNC_2 (struct i40e_vsi*) ;
 int FUNC_3 (struct i40e_vsi*) ;
 int FUNC_4 (struct i40e_vsi*,int) ;
 int FUNC_5 (struct i40e_pf*) ;
 int FUNC_6 (struct i40e_vsi*) ;
 int FUNC_7 (struct i40e_vsi*) ;
 int FUNC_8 (struct i40e_vsi*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12(struct i40e_vsi *VAR_5)
{
 struct i40e_pf *VAR_6 = VAR_5->back;
 int VAR_7;

 if (VAR_6->flags & VAR_1)
  FUNC_6(VAR_5);
 else
  FUNC_1(VAR_5);


 VAR_7 = FUNC_8(VAR_5);
 if (VAR_7)
  return VAR_7;

 FUNC_0(VAR_4, VAR_5->state);
 FUNC_3(VAR_5);
 FUNC_7(VAR_5);

 if ((VAR_6->hw.phy.link_info.link_info & VAR_0) &&
     (VAR_5->netdev)) {
  FUNC_4(VAR_5, 1);
  FUNC_10(VAR_5->netdev);
  FUNC_9(VAR_5->netdev);
 }


 if (VAR_5->type == VAR_2) {

  VAR_6->fd_add_err = 0;
  VAR_6->fd_atr_cnt = 0;
  FUNC_2(VAR_5);
 }




 FUNC_11(VAR_3, VAR_6->state);
 FUNC_5(VAR_6);

 return 0;
}
