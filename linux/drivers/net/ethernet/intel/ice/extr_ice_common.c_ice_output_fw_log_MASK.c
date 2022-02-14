
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ice_hw {int dummy; } ;
struct ice_aq_desc {int datalen; } ;


 int VAR_0 ;
 int FUNC_0 (struct ice_hw*,int ,char*) ;
 int FUNC_1 (struct ice_hw*,int ,int,int,int *,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct ice_hw *VAR_1, struct ice_aq_desc *VAR_2, void *VAR_3)
{
 FUNC_0(VAR_1, VAR_0, "[ FW Log Msg Start ]\n");
 FUNC_1(VAR_1, VAR_0, 16, 1, (u8 *)VAR_3,
   FUNC_2(VAR_2->datalen));
 FUNC_0(VAR_1, VAR_0, "[ FW Log Msg End ]\n");
}
