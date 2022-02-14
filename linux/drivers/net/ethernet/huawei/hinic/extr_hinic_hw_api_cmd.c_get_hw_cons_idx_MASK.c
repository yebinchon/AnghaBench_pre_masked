
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hinic_api_cmd_chain {int hwif; int chain_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static u32 FUNC_3(struct hinic_api_cmd_chain *VAR_1)
{
 u32 VAR_2, VAR_3;

 VAR_2 = FUNC_1(VAR_1->chain_type);
 VAR_3 = FUNC_2(VAR_1->hwif, VAR_2);

 return FUNC_0(VAR_3, VAR_0);
}
