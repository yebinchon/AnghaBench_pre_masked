
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fotg210_udc {scalar_t__ reg; } ;
struct fotg210_ep {struct fotg210_udc* fotg210; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct fotg210_ep *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct fotg210_udc *VAR_4 = VAR_1->fotg210;
 u32 VAR_5;

 VAR_5 = FUNC_2(VAR_4->reg + VAR_0);
 VAR_5 |= (VAR_3 ? FUNC_0(VAR_2 - 1) : FUNC_1(VAR_2 - 1));
 FUNC_3(VAR_5, VAR_4->reg + VAR_0);
}
