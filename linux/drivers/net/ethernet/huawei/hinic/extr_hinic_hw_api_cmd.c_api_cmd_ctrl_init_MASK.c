
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct hinic_hwif {int dummy; } ;
struct hinic_api_cmd_chain {int cell_size; int chain_type; struct hinic_hwif* hwif; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct hinic_hwif*,int) ;
 int FUNC_5 (struct hinic_hwif*,int,int) ;

__attribute__((used)) static void FUNC_6(struct hinic_api_cmd_chain *VAR_6)
{
 struct hinic_hwif *VAR_7 = VAR_6->hwif;
 u32 VAR_8, VAR_9;
 u16 VAR_10;


 VAR_8 = FUNC_3(VAR_6->chain_type);

 VAR_10 = FUNC_0(VAR_6->cell_size);

 VAR_9 = FUNC_4(VAR_7, VAR_8);

 VAR_9 = FUNC_1(VAR_9, VAR_2) &
  FUNC_1(VAR_9, VAR_5) &
  FUNC_1(VAR_9, VAR_0) &
  FUNC_1(VAR_9, VAR_4) &
  FUNC_1(VAR_9, VAR_1);

 VAR_9 |= FUNC_2(1, VAR_5) |
  FUNC_2(VAR_3, VAR_4) |
  FUNC_2(VAR_10, VAR_1);

 FUNC_5(VAR_7, VAR_8, VAR_9);
}
