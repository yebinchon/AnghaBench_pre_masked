
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hinic_hwif {int dummy; } ;
struct hinic_api_cmd_chain {int chain_type; int prod_idx; struct hinic_hwif* hwif; } ;
typedef enum hinic_api_cmd_chain_type { ____Placeholder_hinic_api_cmd_chain_type } hinic_api_cmd_chain_type ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (struct hinic_hwif*,int ) ;
 int FUNC_4 (struct hinic_hwif*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct hinic_api_cmd_chain *VAR_1)
{
 enum hinic_api_cmd_chain_type VAR_2 = VAR_1->chain_type;
 struct hinic_hwif *VAR_3 = VAR_1->hwif;
 u32 VAR_4, VAR_5;

 VAR_4 = FUNC_2(VAR_2);
 VAR_5 = FUNC_3(VAR_3, VAR_4);

 VAR_5 = FUNC_0(VAR_5, VAR_0);

 VAR_5 |= FUNC_1(VAR_1->prod_idx, VAR_0);

 FUNC_4(VAR_3, VAR_4, VAR_5);
}
