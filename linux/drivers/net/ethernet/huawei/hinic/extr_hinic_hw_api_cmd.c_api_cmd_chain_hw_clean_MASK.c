
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hinic_hwif {int dummy; } ;
struct hinic_api_cmd_chain {int chain_type; struct hinic_hwif* hwif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct hinic_hwif*,int) ;
 int FUNC_3 (struct hinic_hwif*,int,int) ;

__attribute__((used)) static void FUNC_4(struct hinic_api_cmd_chain *VAR_5)
{
 struct hinic_hwif *VAR_6 = VAR_5->hwif;
 u32 VAR_7, VAR_8;

 VAR_7 = FUNC_1(VAR_5->chain_type);

 VAR_8 = FUNC_2(VAR_6, VAR_7);
 VAR_8 = FUNC_0(VAR_8, VAR_2) &
        FUNC_0(VAR_8, VAR_4) &
        FUNC_0(VAR_8, VAR_0) &
        FUNC_0(VAR_8, VAR_3) &
        FUNC_0(VAR_8, VAR_1);

 FUNC_3(VAR_6, VAR_7, VAR_8);
}
