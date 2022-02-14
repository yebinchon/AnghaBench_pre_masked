
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct virtchnl_pf_event {int severity; int event; } ;
struct i40e_pf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i40e_pf*,int ,int ,int *,int) ;

void FUNC_1(struct i40e_pf *VAR_3)
{
 struct virtchnl_pf_event VAR_4;

 VAR_4.event = VAR_1;
 VAR_4.severity = VAR_0;
 FUNC_0(VAR_3, VAR_2, 0,
        (u8 *)&VAR_4, sizeof(struct virtchnl_pf_event));
}
