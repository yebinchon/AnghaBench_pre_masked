
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fotg210_udc {scalar_t__ reg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct fotg210_udc *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2->reg + VAR_0);

 VAR_3 &= ~VAR_1;
 FUNC_1(VAR_3, VAR_2->reg + VAR_0);
}
