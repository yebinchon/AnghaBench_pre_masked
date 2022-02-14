
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct virtchnl_pf_event {int dummy; } ;
struct ice_vf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ice_vf*,struct virtchnl_pf_event*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct ice_vf *VAR_2, struct virtchnl_pf_event *VAR_3,
   bool VAR_4)
{
 u16 VAR_5;

 if (VAR_4)
  VAR_5 = VAR_0;
 else
  VAR_5 = VAR_1;

 FUNC_0(VAR_2, VAR_3, VAR_5, VAR_4);
}
