
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ iscsi; } ;
struct TYPE_4__ {TYPE_1__ func_caps; int local_dcbx_config; } ;
struct i40e_pf {int flags; TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct i40e_pf*) ;
 int FUNC_2 (struct i40e_pf*) ;

__attribute__((used)) static u8 FUNC_3(struct i40e_pf *VAR_4)
{
 if (VAR_4->flags & VAR_3)
  return FUNC_2(VAR_4);




 if (!(VAR_4->flags & VAR_1))
  return VAR_0;


 if (!(VAR_4->flags & VAR_2))
  return FUNC_0(&VAR_4->hw.local_dcbx_config);


 if (VAR_4->hw.func_caps.iscsi)
  return FUNC_1(VAR_4);
 else
  return VAR_0;
}
