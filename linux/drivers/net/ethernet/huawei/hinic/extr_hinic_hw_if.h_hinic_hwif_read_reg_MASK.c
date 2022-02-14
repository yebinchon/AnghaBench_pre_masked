
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hinic_hwif {scalar_t__ cfg_regs_bar; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_2(struct hinic_hwif *VAR_0, u32 VAR_1)
{
 return FUNC_0(FUNC_1(VAR_0->cfg_regs_bar + VAR_1));
}
