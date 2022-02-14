
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct i40e_vsi {int netdev; int state; } ;
struct TYPE_8__ {scalar_t__ link_speed; } ;
struct TYPE_7__ {int link_info; scalar_t__ link_speed; } ;
struct TYPE_9__ {int get_link_info; TYPE_3__ link_info; TYPE_2__ link_info_old; } ;
struct TYPE_10__ {TYPE_4__ phy; } ;
struct i40e_pf {size_t lan_vsi; size_t lan_veb; int flags; scalar_t__ vf; scalar_t__* veb; TYPE_5__ hw; TYPE_1__* pdev; int state; struct i40e_vsi** vsi; } ;
typedef scalar_t__ i40e_status ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_5__*,int*) ;
 int FUNC_3 (struct i40e_vsi*,int) ;
 int FUNC_4 (struct i40e_pf*) ;
 int FUNC_5 (struct i40e_pf*) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (struct i40e_vsi*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;

__attribute__((used)) static void FUNC_11(struct i40e_pf *VAR_6)
{
 struct i40e_vsi *VAR_7 = VAR_6->vsi[VAR_6->lan_vsi];
 u8 VAR_8, VAR_9;
 i40e_status VAR_10;
 bool VAR_11, VAR_12;


 VAR_6->hw.phy.get_link_info = 1;
 VAR_12 = (VAR_6->hw.phy.link_info_old.link_info & VAR_0);
 VAR_10 = FUNC_2(&VAR_6->hw, &VAR_11);


 if (VAR_10 == VAR_3) {
  FUNC_0(VAR_4, VAR_6->state);
 } else {



  FUNC_9(VAR_4, VAR_6->state);
  FUNC_1(&VAR_6->pdev->dev, "couldn't get link state, status: %d\n",
   VAR_10);
  return;
 }

 VAR_9 = VAR_6->hw.phy.link_info_old.link_speed;
 VAR_8 = VAR_6->hw.phy.link_info.link_speed;

 if (VAR_11 == VAR_12 &&
     VAR_8 == VAR_9 &&
     (FUNC_10(VAR_5, VAR_7->state) ||
      VAR_11 == FUNC_8(VAR_7->netdev)))
  return;

 FUNC_3(VAR_7, VAR_11);




 if (VAR_6->lan_veb < VAR_2 && VAR_6->veb[VAR_6->lan_veb])
  FUNC_6(VAR_6->veb[VAR_6->lan_veb], VAR_11);
 else
  FUNC_7(VAR_7, VAR_11);

 if (VAR_6->vf)
  FUNC_5(VAR_6);

 if (VAR_6->flags & VAR_1)
  FUNC_4(VAR_6);
}
