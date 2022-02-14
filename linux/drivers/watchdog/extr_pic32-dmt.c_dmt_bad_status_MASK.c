
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pic32_dmt {scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct pic32_dmt *VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_5->regs + VAR_3);
 VAR_6 &= (VAR_0 | VAR_1 | VAR_2);
 if (VAR_6)
  return -VAR_4;

 return 0;
}
