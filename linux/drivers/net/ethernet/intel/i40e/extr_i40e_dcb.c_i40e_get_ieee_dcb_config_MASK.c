
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ asq_last_status; } ;
struct TYPE_4__ {int dcbx_mode; } ;
struct i40e_hw {TYPE_1__ aq; TYPE_2__ remote_dcbx_config; TYPE_2__ local_dcbx_config; } ;
typedef scalar_t__ i40e_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct i40e_hw*,int ,int ,TYPE_2__*) ;

__attribute__((used)) static i40e_status FUNC_1(struct i40e_hw *VAR_5)
{
 i40e_status VAR_6 = 0;


 VAR_5->local_dcbx_config.dcbx_mode = VAR_4;

 VAR_6 = FUNC_0(VAR_5, VAR_1, 0,
         &VAR_5->local_dcbx_config);
 if (VAR_6)
  goto out;


 VAR_6 = FUNC_0(VAR_5, VAR_2,
         VAR_0,
         &VAR_5->remote_dcbx_config);

 if (VAR_5->aq.asq_last_status == VAR_3)
  VAR_6 = 0;

out:
 return VAR_6;
}
