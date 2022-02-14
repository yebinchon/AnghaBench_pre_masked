
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_hw {int dummy; } ;
struct i40e_aqc_queue_shutdown {int driver_unloading; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef int i40e_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,int *) ;
 int FUNC_2 (struct i40e_aq_desc*,int ) ;

i40e_status FUNC_3(struct i40e_hw *VAR_2,
          bool VAR_3)
{
 struct i40e_aq_desc VAR_4;
 struct i40e_aqc_queue_shutdown *VAR_5 =
  (struct i40e_aqc_queue_shutdown *)&VAR_4.params.raw;
 i40e_status VAR_6;

 FUNC_2(&VAR_4,
       VAR_1);

 if (VAR_3)
  VAR_5->driver_unloading = FUNC_0(VAR_0);
 VAR_6 = FUNC_1(VAR_2, &VAR_4, ((void*)0), 0, ((void*)0));

 return VAR_6;
}
