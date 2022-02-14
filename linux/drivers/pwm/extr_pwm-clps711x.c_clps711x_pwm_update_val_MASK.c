
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clps711x_chip {int lock; int pmpcon; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct clps711x_chip *VAR_0, u32 VAR_1, u32 VAR_2)
{

 u32 VAR_3 = (VAR_1 + 1) * 4;
 unsigned long VAR_4;
 u32 VAR_5;

 FUNC_1(&VAR_0->lock, VAR_4);

 VAR_5 = FUNC_0(VAR_0->pmpcon);
 VAR_5 &= ~(0xf << VAR_3);
 VAR_5 |= VAR_2 << VAR_3;
 FUNC_3(VAR_5, VAR_0->pmpcon);

 FUNC_2(&VAR_0->lock, VAR_4);
}
