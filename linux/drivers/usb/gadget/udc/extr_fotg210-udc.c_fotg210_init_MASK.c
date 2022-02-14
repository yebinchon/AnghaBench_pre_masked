
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fotg210_udc {scalar_t__ reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct fotg210_udc *VAR_9)
{
 u32 VAR_10;


 FUNC_1(VAR_7 | VAR_8 | VAR_6,
    VAR_9->reg + VAR_5);


 VAR_10 = FUNC_0(VAR_9->reg + VAR_2);
 VAR_10 &= ~VAR_0;
 FUNC_1(VAR_10, VAR_9->reg + VAR_2);


 FUNC_1(~(u32)0, VAR_9->reg + VAR_4);


 VAR_10 = FUNC_0(VAR_9->reg + VAR_3);
 VAR_10 |= VAR_1;
 FUNC_1(VAR_10, VAR_9->reg + VAR_3);
}
