
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hinic_hwif {int dummy; } ;
struct hinic_api_cmd_chain {int chain_type; struct hinic_hwif* hwif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (struct hinic_hwif*,int ) ;
 int FUNC_5 (struct hinic_hwif*,int ,int ) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct hinic_api_cmd_chain *VAR_4)
{
 struct hinic_hwif *VAR_5 = VAR_4->hwif;
 int VAR_6 = -VAR_1;
 unsigned long VAR_7;
 u32 VAR_8, VAR_9;


 VAR_8 = FUNC_3(VAR_4->chain_type);
 VAR_9 = FUNC_4(VAR_5, VAR_8);

 VAR_9 = FUNC_0(VAR_9, VAR_2);
 VAR_9 |= FUNC_2(1, VAR_2);

 FUNC_5(VAR_5, VAR_8, VAR_9);

 VAR_7 = VAR_3 + FUNC_6(VAR_0);
 do {
  VAR_9 = FUNC_4(VAR_5, VAR_8);

  if (!FUNC_1(VAR_9, VAR_2)) {
   VAR_6 = 0;
   break;
  }

  FUNC_7(20);
 } while (FUNC_8(VAR_3, VAR_7));

 return VAR_6;
}
