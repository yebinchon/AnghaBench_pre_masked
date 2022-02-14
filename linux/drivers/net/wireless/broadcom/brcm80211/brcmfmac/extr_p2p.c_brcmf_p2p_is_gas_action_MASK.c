
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmf_p2psd_gas_pub_act_frame {scalar_t__ category; scalar_t__ action; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static bool FUNC_0(void *VAR_5, u32 VAR_6)
{
 struct brcmf_p2psd_gas_pub_act_frame *VAR_7;

 if (VAR_5 == ((void*)0))
  return 0;

 VAR_7 = (struct brcmf_p2psd_gas_pub_act_frame *)VAR_5;
 if (VAR_6 < sizeof(struct brcmf_p2psd_gas_pub_act_frame) - 1)
  return 0;

 if (VAR_7->category != VAR_0)
  return 0;

 if (VAR_7->action == VAR_3 ||
     VAR_7->action == VAR_4 ||
     VAR_7->action == VAR_1 ||
     VAR_7->action == VAR_2)
  return 1;

 return 0;
}
