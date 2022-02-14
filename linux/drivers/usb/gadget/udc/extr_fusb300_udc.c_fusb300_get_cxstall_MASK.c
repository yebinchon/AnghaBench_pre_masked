
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct fusb300 {scalar_t__ reg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u8 FUNC_1(struct fusb300 *VAR_2)
{
 u8 VAR_3;
 u32 VAR_4 = FUNC_0(VAR_2->reg + VAR_1);

 VAR_3 = (VAR_4 & VAR_0) >> 1;

 return VAR_3;
}
