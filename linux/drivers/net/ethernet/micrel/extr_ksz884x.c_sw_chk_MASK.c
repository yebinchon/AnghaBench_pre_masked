
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct ksz_hw {scalar_t__ io; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct ksz_hw *VAR_0, u32 VAR_1, u16 VAR_2)
{
 u16 VAR_3;

 VAR_3 = FUNC_0(VAR_0->io + VAR_1);
 return (VAR_3 & VAR_2) == VAR_2;
}
