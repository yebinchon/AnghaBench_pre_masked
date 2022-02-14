
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hinic_hwif {int dummy; } ;
typedef enum hinic_pf_action { ____Placeholder_hinic_pf_action } hinic_pf_action ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct hinic_hwif*,int ) ;
 int FUNC_3 (struct hinic_hwif*,int ,int ) ;

void FUNC_4(struct hinic_hwif *VAR_2, enum hinic_pf_action VAR_3)
{
 u32 VAR_4 = FUNC_2(VAR_2, VAR_0);

 VAR_4 = FUNC_0(VAR_4, VAR_1);
 VAR_4 |= FUNC_1(VAR_3, VAR_1);

 FUNC_3(VAR_2, VAR_0, VAR_4);
}
