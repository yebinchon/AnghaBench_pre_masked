
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ti_bandgap {int clk_rate; int lock; } ;


 int FUNC_0 (struct ti_bandgap*,int,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ti_bandgap *VAR_2, int VAR_3,
         u32 VAR_4)
{
 VAR_4 = VAR_4 * VAR_2->clk_rate / 1000;
 FUNC_1(&VAR_2->lock);
 FUNC_0(VAR_2, VAR_3, VAR_0, VAR_1, VAR_4);
 FUNC_2(&VAR_2->lock);
}
