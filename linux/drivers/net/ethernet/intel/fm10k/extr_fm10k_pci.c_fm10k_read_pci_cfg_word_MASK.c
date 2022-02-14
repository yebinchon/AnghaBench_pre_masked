
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fm10k_intfc {int pdev; } ;
struct fm10k_hw {int hw_addr; struct fm10k_intfc* back; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct fm10k_hw*) ;
 int FUNC_2 (int ,int ,int*) ;

u16 FUNC_3(struct fm10k_hw *VAR_0, u32 VAR_1)
{
 struct fm10k_intfc *VAR_2 = VAR_0->back;
 u16 VAR_3 = 0;

 if (FUNC_0(VAR_0->hw_addr))
  return ~VAR_3;

 FUNC_2(VAR_2->pdev, VAR_1, &VAR_3);
 if (VAR_3 == 0xFFFF)
  FUNC_1(VAR_0);

 return VAR_3;
}
