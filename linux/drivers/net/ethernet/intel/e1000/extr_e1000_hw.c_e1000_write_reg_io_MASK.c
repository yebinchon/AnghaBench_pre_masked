
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {unsigned long io_base; } ;


 int FUNC_0 (struct e1000_hw*,unsigned long,int ) ;

__attribute__((used)) static void FUNC_1(struct e1000_hw *VAR_0, u32 VAR_1, u32 VAR_2)
{
 unsigned long VAR_3 = VAR_0->io_base;
 unsigned long VAR_4 = VAR_0->io_base + 4;

 FUNC_0(VAR_0, VAR_3, VAR_1);
 FUNC_0(VAR_0, VAR_4, VAR_2);
}
