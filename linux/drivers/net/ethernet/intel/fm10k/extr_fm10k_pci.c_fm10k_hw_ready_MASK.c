
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_hw {int hw_addr; } ;
struct fm10k_intfc {struct fm10k_hw hw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct fm10k_hw*) ;

__attribute__((used)) static int FUNC_2(struct fm10k_intfc *VAR_1)
{
 struct fm10k_hw *VAR_2 = &VAR_1->hw;

 FUNC_1(VAR_2);

 return FUNC_0(VAR_2->hw_addr) ? -VAR_0 : 0;
}
