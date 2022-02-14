
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_c_info {int prb_resp_timeout; int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

void FUNC_1(struct brcms_c_info *VAR_2, bool VAR_3)
{




 VAR_2->prb_resp_timeout = VAR_3 ? VAR_0 : 1;
 FUNC_0(VAR_2->hw, VAR_1, VAR_2->prb_resp_timeout);

}
