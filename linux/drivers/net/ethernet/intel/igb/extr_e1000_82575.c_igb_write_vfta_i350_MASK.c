
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct igb_adapter {size_t* shadow_vfta; } ;
struct e1000_hw {struct igb_adapter* back; } ;


 int VAR_0 ;
 int FUNC_0 (int ,size_t,size_t) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct e1000_hw *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct igb_adapter *VAR_4 = VAR_1->back;
 int VAR_5;

 for (VAR_5 = 10; VAR_5--;)
  FUNC_0(VAR_0, VAR_2, VAR_3);

 FUNC_1();
 VAR_4->shadow_vfta[VAR_2] = VAR_3;
}
