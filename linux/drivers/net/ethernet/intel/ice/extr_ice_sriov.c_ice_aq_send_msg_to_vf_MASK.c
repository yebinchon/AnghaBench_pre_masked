
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ice_sq_cd {int dummy; } ;
struct ice_hw {int mailboxq; } ;
struct ice_aqc_pf_vf_msg {void* id; } ;
struct TYPE_2__ {struct ice_aqc_pf_vf_msg virt; } ;
struct ice_aq_desc {int flags; void* cookie_low; void* cookie_high; TYPE_1__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ice_aq_desc*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct ice_hw*,int *,struct ice_aq_desc*,int *,int ,struct ice_sq_cd*) ;

enum ice_status
FUNC_4(struct ice_hw *VAR_2, u16 VAR_3, u32 VAR_4, u32 VAR_5,
        u8 *VAR_6, u16 VAR_7, struct ice_sq_cd *VAR_8)
{
 struct ice_aqc_pf_vf_msg *VAR_9;
 struct ice_aq_desc VAR_10;

 FUNC_2(&VAR_10, VAR_1);

 VAR_9 = &VAR_10.params.virt;
 VAR_9->id = FUNC_1(VAR_3);

 VAR_10.cookie_high = FUNC_1(VAR_4);
 VAR_10.cookie_low = FUNC_1(VAR_5);

 if (VAR_7)
  VAR_10.flags |= FUNC_0(VAR_0);

 return FUNC_3(VAR_2, &VAR_2->mailboxq, &VAR_10, VAR_6, VAR_7, VAR_8);
}
