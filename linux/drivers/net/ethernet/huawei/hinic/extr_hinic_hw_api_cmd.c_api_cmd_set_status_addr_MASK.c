
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hinic_hwif {int dummy; } ;
struct hinic_api_cmd_chain {int wb_status_paddr; int chain_type; struct hinic_hwif* hwif; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hinic_hwif*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct hinic_api_cmd_chain *VAR_0)
{
 struct hinic_hwif *VAR_1 = VAR_0->hwif;
 u32 VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_0->chain_type);
 VAR_3 = FUNC_4(VAR_0->wb_status_paddr);
 FUNC_2(VAR_1, VAR_2, VAR_3);

 VAR_2 = FUNC_1(VAR_0->chain_type);
 VAR_3 = FUNC_3(VAR_0->wb_status_paddr);
 FUNC_2(VAR_1, VAR_2, VAR_3);
}
