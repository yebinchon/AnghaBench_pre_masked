
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_nvm_info {scalar_t__ type; int delay_usec; } ;
struct e1000_hw {struct e1000_nvm_info nvm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct e1000_hw*,int*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct e1000_hw*,int*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct e1000_hw *VAR_4, u16 VAR_5, u16 VAR_6)
{
 struct e1000_nvm_info *VAR_7 = &VAR_4->nvm;
 u32 VAR_8 = FUNC_4(VAR_2);
 u32 VAR_9;

 VAR_9 = FUNC_0(VAR_6 - 1);
 if (VAR_7->type == VAR_3)
  VAR_8 |= VAR_1;

 do {
  VAR_8 &= ~VAR_0;

  if (VAR_5 & VAR_9)
   VAR_8 |= VAR_0;

  FUNC_5(VAR_2, VAR_8);
  FUNC_3();

  FUNC_6(VAR_7->delay_usec);

  FUNC_2(VAR_4, &VAR_8);
  FUNC_1(VAR_4, &VAR_8);

  VAR_9 >>= 1;
 } while (VAR_9);

 VAR_8 &= ~VAR_0;
 FUNC_5(VAR_2, VAR_8);
}
