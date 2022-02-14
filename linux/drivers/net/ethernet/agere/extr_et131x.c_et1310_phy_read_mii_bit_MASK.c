
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct et131x_adapter {int dummy; } ;


 int FUNC_0 (struct et131x_adapter*,int,int*) ;

__attribute__((used)) static void FUNC_1(struct et131x_adapter *VAR_0,
        u16 VAR_1,
        u16 VAR_2,
        u8 *VAR_3)
{
 u16 VAR_4;
 u16 VAR_5 = 1 << VAR_2;

 FUNC_0(VAR_0, VAR_1, &VAR_4);

 *VAR_3 = (VAR_4 & VAR_5) >> VAR_2;
}
